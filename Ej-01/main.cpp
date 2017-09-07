#include <iostream>
#include "../Pila/Pila.h"
#include <string>
using namespace std;

int main() {
    Pila<char> pila;

    string texto;
    cout<<"Ingrese texto a invertir"<<endl;
    cin>>texto;

    int fin=texto.length();

    for(int i=0;i<fin;i++)
        pila.push(texto[i]);

    for(int i=0;!pila.esVacia();i++)
        cout<<pila.pop();

    return 0;
}