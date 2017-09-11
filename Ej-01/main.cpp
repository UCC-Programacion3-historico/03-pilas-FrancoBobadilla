#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

int main() {
    Pila<char> pila;

    string texto;
    cout << endl << "Ingrese texto a invertir" << endl;
    cin >> texto;

    int fin = texto.length();

    for (int i = 0; i < fin; i++)
        pila.push(texto[i]);

    while (!pila.esVacia())
        cout << pila.pop();

    return 0;
}