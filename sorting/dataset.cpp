#include <iostream>
#include <vector>
#include <ctime>
using namespace std;


//dataset de numeros aleatorios desordenados
vector<int> generar_dataset(int size, int max) {
    vector<int> dataset(size);
    srand(time(0));
    for (int i = 0; i < size; ++i) {
        int randomNum = rand() % max;
        dataset[i] = randomNum ; 
    }
    return dataset;
}



