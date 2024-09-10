#include <iostream>
#include "dataset.h"
#include "bubble.h"
#include "merge.h"
#include "quick.h"
#include "funcion.h"

using namespace std;


void printVector(const vector<int>& vec) {
    for (const int& num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int size = 20;
    vector<int> dataset = generar_dataset(size, 100); 
    vector<int> aux= dataset;
    cout<<"Dataset generado: ";
    printVector(dataset); 

    aux= dataset;
    quick_sort(aux,0,size-1);
    cout<<"Quick sort: ";
    printVector(aux);

    aux= dataset;
    mergeSort(aux, 0, size-1);
    cout<<"Merge sort: ";
    printVector(aux);

    aux= dataset;
    bubble_sort(aux);
    cout<<"Bubble sort: ";
    printVector(aux); 

    aux=dataset;
    integrada(aux);
    cout<<"Funcion ordenamiento: ";
    printVector(aux);


    return 0;
}
