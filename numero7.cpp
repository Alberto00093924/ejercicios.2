#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos números enteros: "<<"\n";
    cin >> a >> b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    cout << "El MCD es: " << a << endl;
    return 0;
}