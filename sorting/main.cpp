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
    int size = 10000;
    vector<int> dataset = generar_dataset(size, 100000000, "semi"); 
    vector<int> aux= dataset;
    cout<<"Dataset generado: ";
    printVector(dataset); 

    aux= dataset;
    cout << "Ordenamiento Quick Sort:" <<endl;
    tiempo_quick(aux);


    aux= dataset;
    cout << "Ordenamiento Merge Sort:" <<endl;
    tiempo_merge(aux);


    aux= dataset;
    cout << "Ordenamiento Bubble Sort:" <<endl;
    tiempo_bubble(aux);


    aux=dataset;
    cout << "Ordenamiento funcion integrada:" <<endl;
    tiempo_integrada(aux);
    return 0;
}
