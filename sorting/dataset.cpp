 #include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

vector<int> ordenado(int size){
    vector<int> aux;
    for (int i=0; i<size;i++){
        aux.push_back(i);
    }
    return aux;
}
vector<int> semi_ordenado(int size, int max) {
    vector<int> dataset(size);

    int mitad = size / 2;
    vector<int> ordenada = ordenado(mitad);
    for (int i = 0; i < mitad; ++i) {
        dataset[i] = ordenada[i];}

    for (int i = mitad; i < size; ++i) {
        dataset[i] = rand() % max;
    }

    return dataset;
}

vector<int> generar_dataset(int size, int max, string tipo) {
    vector<int> dataset(size);
    if (tipo=="aleatorio"){
        srand(time(0));
        for (int i = 0; i <size; i++) {
            int randomNum = rand() % max;
            dataset[i] = randomNum; 
        }}
    else if (tipo=="ordenado"){
        dataset= ordenado(size);}
    else if (tipo=="semi"){
        dataset= semi_ordenado(size, max);
    }
    return dataset;
}
    