#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Función para calcular el triángulo de Pascal
vector<vector<int>> calcularTrianguloPascal(int limite) {
    vector<vector<int>> triangulo(limite + 1);

    for (int i = 0; i <= limite; i++) {
        triangulo[i].resize(i + 1);
        triangulo[i][0] = 1;

        for (int j = 1; j < i; j++) {
            triangulo[i][j] = triangulo[i - 1][j - 1] + triangulo[i - 1][j];
        }

        triangulo[i][i] = 1;
    }

    return triangulo;
}

// Función para imprimir el triángulo de Pascal centrado en Visual Studio Code
void imprimirTrianguloPascal(const vector<vector<int>>& triangulo) {
    int limite = triangulo.size() - 1;

    int maxDigits = to_string(triangulo[limite][limite / 2]).length();

    for (int i = 0; i <= limite; i++) {
        int spacesBefore = (limite - i) * (maxDigits + 1) / 2;

        cout << setw(spacesBefore) << "";

        for (int j = 0; j <= i; j++) {
            cout << setw(maxDigits) << triangulo[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {
    int limite;

    cout << "Ingrese el límite del triángulo de Pascal: ";
    cin >> limite;

    vector<vector<int>> triangulo = calcularTrianguloPascal(limite);
    imprimirTrianguloPascal(triangulo);

    return 0;
}