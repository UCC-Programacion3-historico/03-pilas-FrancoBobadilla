#include <iostream>
#include "../Pila/Pila.h"


using namespace std;

bool comprobar(Pila<char> *, char);

int main() {

    Pila<char> pila;
    string formula;
    bool bandera;

    cout << endl << "Ingrese forumla a comprobar ('~' para salir)" << endl;
    cin >> formula;

    int fin = formula.length();
    pila.push('~');
    for (int i = 0; i < fin; i++) {
        if (formula[i] == '~')return 0;
        pila.push(formula[i]);
    }
    //Pila<char> copia(pila);
    if (comprobar(&pila, '~')) cout << endl << "Formula balanceada" << endl;
    else cout << endl << "Formula desbalanceada" << endl;

    main();
    return 0;
}

bool comprobar(Pila<char> *pila, char hasta) {
    bool bandera = true;
    do {
        switch (pila->pop()) {


            case '(': {
                if (hasta != '(')
                    return false;
                break;
            }
            case '[': {
                if (hasta == '[')
                    bandera = true;
                else
                    return false;
                break;
            }
            case '{': {
                if (hasta == '{')
                    bandera = true;
                else
                    return false;
                break;
            }


            case ')': {
                if (comprobar(pila, '('))
                    return true;
                return false;
            }
            case ']': {
                if (comprobar(pila, '['))
                    return true;
                return false;
            }
            case '}': {
                if (comprobar(pila, '{'))
                    return true;
                return false;
            }


            default: {
                if (comprobar(pila, hasta))
                    return true;
                return false;
            }
        }
    } while (bandera == true);
}