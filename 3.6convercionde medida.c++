#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float pies, yardas, pulgadas, cm, metros;
    cout << "Ingrese el valor en pies: ";
    cin >> pies;
    yardas = pies/3; // Convert to yards
    pulgadas = pies*12; // Convert to inches
    cm = pulgadas*2.54; // Convert to centimeters
    metros = cm/100; // Convert to meters
    cout << "Yardas: " << yardas << endl;
    cout << "Pulgadas: " << pulgadas << endl;
    cout << "Centimetros: " << cm << endl;
    cout << "Metros: " << metros << endl;
    return 0;
}