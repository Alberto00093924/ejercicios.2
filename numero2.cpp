#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce un número entero positivo: ";
    cin >> n;
    
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += 2 * i + 1; 
    }
    
    cout << "La suma de los primeros " << n << " números impares es: " << suma << endl;
    return 0;
}