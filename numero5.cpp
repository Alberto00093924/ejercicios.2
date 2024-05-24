#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce un número entero positivo: ";
    cin >> n;
    
    double suma = 0.0;
    for (int i = 1; i <= n; ++i) {
        suma += 1.0 / i;
    }
    
    cout << "La suma de las fracciones hasta 1/" << n << " es: " << suma << endl;
    return 0;
}