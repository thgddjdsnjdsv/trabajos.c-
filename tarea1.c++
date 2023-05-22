#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, string> libros;

    // loop para obtener información de los libros
    for (int i = 0; i < 8; i++) {
        string titulo;
        string autor;

        cout << "Ingrese el título del libro: ";
        getline(cin, titulo);

        cout << "Ingrese el autor del libro: ";
        getline(cin, autor);

        libros[titulo] = autor;
    }

    // imprimir los libros almacenados
    cout << "Los libros almacenados son:" << endl;
    for (auto const& entry : libros) {
        cout << entry.first << " por " << entry.second << endl;
    }

    return 0;
}