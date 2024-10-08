#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

// Función para particionar el arreglo
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high]; // Elegir el pivote
    int i = low - 1; // Índice del elemento menor

    for (int j = low; j <= high - 1; j++) {
        // Si el elemento actual es menor que el pivote
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Colocar el pivote en su posición correcta
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Función para ordenar el arreglo usando QuickSort
void quick_sort(vector<int>& arr, int low, int high) {
    if (low < high) {
        // Particionar el arreglo
        int pi = partition(arr, low, high);

        // Ordenar las dos mitades
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void tiempo_quick(vector<int> dataset){
    auto start = high_resolution_clock::now();

    quick_sort(dataset, 0, dataset.size()/2);

    auto end = high_resolution_clock::now();

    duration<double> duration = end - start;

    cout << "Tiempo de ejecución Quicksort: " << duration.count() << " segundos" << endl;

    
}