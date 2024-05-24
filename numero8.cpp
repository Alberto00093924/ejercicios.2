#include <iostream>

using namespace std;

int main() {
    int numeros[10];
    int suma = 0;

    cout << "Ingrese 10 números enteros: ";
    for (int i = 0; i < 10; ++i) {
        cin >> numeros[i];
        suma += numeros[i];
    }

    double media = suma / 10.0;
    cout << "La media de los números ingresados es: " << media << endl;

    return 0;
}