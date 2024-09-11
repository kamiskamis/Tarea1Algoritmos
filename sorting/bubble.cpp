#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using namespace std::chrono;

void bubble_sort(vector<int>& dataset){
    int n = dataset.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (dataset[j] > dataset[j + 1]) {
                swap(dataset[j], dataset[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void tiempo_bubble(vector<int> dataset){
    auto start = high_resolution_clock::now();

    bubble_sort(dataset);

    auto end = high_resolution_clock::now();

    duration<double> duration = end - start;

    cout << "Tiempo de ejecución Bubblesort: " << duration.count() << " segundos" << endl;

}
