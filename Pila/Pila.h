#ifndef PILA_H
#define PILA_H

#include <iostream>
#include "Nodo.h"

template<class T>
class Pila {
private:
    Nodo<T> *inicio;
public:
    Pila();

    ~Pila();

    void push(T dato);

    T pop();

    bool esVacia();

    T peek();
};


template<class T>
Pila<T>::Pila() {
    inicio = NULL;
}


template<class T>
Pila<T>::~Pila() {
    while (!esVacia())pop();
}


template<class T>
void Pila<T>::push(T dato) {
    Nodo<T> *aux = new Nodo<T>(dato, inicio);
    inicio = aux;
}


template<class T>
T Pila<T>::pop() {
    if (inicio == NULL) throw 1;
    T dato = inicio->getDato();
    Nodo<T> *aux = inicio;
    inicio = inicio->getNext();
    delete aux;
    return dato;
}


template<class T>
bool Pila<T>::esVacia() {
    return inicio == NULL;
}


template<class T>
T Pila<T>::peek() {
    if (inicio == NULL) throw 1;
    return inicio->getDato();
}

#endif //PILA_H