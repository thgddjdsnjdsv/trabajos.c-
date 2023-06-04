#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float m, c, E;
    cout << "Ingrese el valor de la masa en gramos: ";
    cin >> m;
    cout << "Ingrese el valor de la velocidad de la luz en m/sg: ";
    cin >> c;
    E = m * pow(c, 2) * pow(10, 7); // Convert E from erg to joule
    cout << "La cantidad de energia producida es: " << E << " joule" << endl;
    return 0;
}