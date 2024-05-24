#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de términos de la serie de Fibonacci: ";
    cin >> n;

    int a = 0, b = 1, siguiente;

    for (int i = 1; i <= n; ++i) {
        cout << a << " ";
        siguiente = a + b;
        a = b;
        b = siguiente;
    }
    cout << endl;
    return 0;
}