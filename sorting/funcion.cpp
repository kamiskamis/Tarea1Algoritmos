#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

// Función para ordenar un vector de enteros
void integrada(vector<int>& dataset) {
    sort(dataset.begin(), dataset.end());
}

void tiempo_integrada(vector<int> dataset){
    auto start = high_resolution_clock::now();

    integrada(dataset);

    auto end = high_resolution_clock::now();

    duration<double> duration = end - start;

    cout << "Tiempo de ejecución Integrada: " << duration.count() << " segundos" << endl;

    
}