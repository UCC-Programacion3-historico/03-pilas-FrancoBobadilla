#include <iostream>
#include "../Pila/Pila.h"

using namespace std;

bool comprobar(Pila<char> *pila, char hasta) {
    while (!pila->esVacia()) {
        char caracter = pila->pop();
        if (caracter == hasta)return true;
        if (caracter == '(' || caracter == '[' || caracter == '{' || caracter == '~')return false;
        switch (caracter) {
            case ')': {
                if (!comprobar(pila, '('))return false;
                break;
            }
            case ']': {
                if (!comprobar(pila, '['))return false;
                break;
            }
            case '}': {
                if (!comprobar(pila, '{'))return false;
                break;
            }
            default:
                return comprobar(pila, hasta);
        }
    }
    return false;
}

int main() {
    Pila<char> pila;
    string formula;
    cout << endl << "Ingrese forumla a comprobar ('~' para salir)" << endl;
    cin >> formula;
    long fin = formula.length();
    pila.push('~');
    for (int i = 0; i < fin; i++) {
        if (formula[i] == '~')return 1;
        pila.push(formula[i]);
    }
    if (comprobar(&pila, '~')) cout << endl << "Formula balanceada" << endl;
    else cout << endl << "Formula desbalanceada" << endl;
    main();
    return 0;
}
