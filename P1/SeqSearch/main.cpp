#include <iostream>

int main() {
    int num[9] {25,3,61,23,18};
    int i; //index
    int n=5; //number of elements
    int b; //search value
    int p=-1; //position of search value

    std::cout << "Arreglo";
    for (i = 0; i < 9; i++) std::cout << num[i] << " ";
    std::cout << "Numero a buscar: ";
    std::cin >> b;

    for (int j = 0; j < n; ++j) {
        if (num[j] == b) {p = j; break;}
    }

    if (p==-1) std::cout << "No se encontro el numero";
    else std::cout << "El numero se encuentra en la posicion " << p;
}

