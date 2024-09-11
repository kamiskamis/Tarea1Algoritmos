#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

// Función para combinar dos sub-vectores ordenados en un único sub-vector ordenado
void merge(vector<int>& arr, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    // Copiar los datos en los vectores temporales L y R
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Combinar los vectores L y R en arr
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copiar los elementos restantes de L, si hay alguno
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copiar los elementos restantes de R, si hay alguno
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Función principal de merge sort
void mergeSort(vector<int>& arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

void tiempo_merge(vector<int> dataset){
    auto start = high_resolution_clock::now();

    mergeSort(dataset, 0, dataset.size() - 1);

    auto end = high_resolution_clock::now();

    duration<double> duration = end - start;

    cout << "Tiempo de ejecución Mergesort: " << duration.count() << " segundos" << endl;

    
}
