#ifndef QUICK_H
#define QUICK_H

#include <vector>
using namespace std;

// Función para ordenar un vector usando el algoritmo rápido
void quick_sort(vector<int>& arr, int low, int high);

int partition(vector<int>& arr, int low, int high);

void tiempo_quick(vector<int> dataset);

#endif // QUICK_H
