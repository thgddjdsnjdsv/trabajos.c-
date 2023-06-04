#include <iostream>
using namespace std;

int main() {
    int hm, dam, m, perimetro;

    cout << "Ingrese la longitud del perimetro en hm, dam y m: " << endl;
    cin >> hm >> dam >> m;

    perimetro = (hm * 10000) + (dam * 1000) + (m * 10);
    // Convert to decimeters

    cout << "El perimetro en decimetros es: " << perimetro << endl;

    return 0;
}