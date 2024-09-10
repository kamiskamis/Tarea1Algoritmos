#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

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


