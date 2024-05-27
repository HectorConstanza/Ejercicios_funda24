#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "imgrese el tamaño del arreglo: ";
    cin >> size;

    int arr[size];
    int par = 0;

    for (int i = 0; i < size; i++) {
        int num;
        cout << "ingrese un numero " << i+1 << ": ";
        cin >> num;

        if (num % 2 == 1) {
            arr[par] = num;
            par++;
        }
    }

    cout << "los numeros pares son : ";
    for (int i = 0; i < par; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}