#include <iostream>

using namespace std;

struct Posicion {
    int indice;
};

void encontrar_mayor_y_menor(int arr[], int tam) {
    int mayor = arr[0];
    int menor = arr[0];
    Posicion pos_mayor = {0};
    Posicion pos_menor = {0};

    // buscar el elemento mayor y menor y sus posiciones
    for (int i = 0; i < tam; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
            pos_mayor = {i};
        }
        if (arr[i] < menor) {
            menor = arr[i];
            pos_menor = {i};
        }
    }

    // mostrar los resultados en pantalla
    cout << "El elemento mayor es " << mayor << " y se encuentra en el índice " << pos_mayor.indice << endl;
    cout << "El elemento menor es " << menor << " y se encuentra en el índice " << pos_menor.indice << endl;
}

int main() {
    // ejemplo de un array de 16 números
    int arr[] = {4, 7, 1, 3, 5, 2, 0, 6, 9, 7, 3, 1, 2, 6, 4};
    int tam = sizeof(arr) / sizeof(arr[0]);

    encontrar_mayor_y_menor(arr, tam);

    return 0;
}
