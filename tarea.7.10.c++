#include <iostream>
#include <vector>

using namespace std;

struct Posicion {
    int fila;
    int columna;
};

void encontrar_mayor_y_menor(const vector<vector<int>>& matriz) {
    int mayor = matriz[0][0];
    int menor = matriz[0][0];
    Posicion pos_mayor = {0, 0};
    Posicion pos_menor = {0, 0};

    // buscar el elemento mayor y menor y sus posiciones
    for (int i = 0; i < matriz.size(); i++) {
        for (int j = 0; j < matriz[0].size(); j++) {
            if (matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                pos_mayor = {i, j};
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                pos_menor = {i, j};
            }
        }
    }

    // mostrar los resultados en pantalla
    cout << "El elemento mayor es " << mayor << " y se encuentra en la fila " << pos_mayor.fila << ", columna " << pos_mayor.columna << endl;
    cout << "El elemento menor es " << menor << " y se encuentra en la fila " << pos_menor.fila << ", columna " << pos_menor.columna << endl;
}

int main() {
    // ejemplo de una matriz de 3x3
    vector<vector<int>> matriz = {{6, 3, 4}, {9, 2, 1}, {8, 5, 7}};

    encontrar_mayor_y_menor(matriz);

    return 0;
}
