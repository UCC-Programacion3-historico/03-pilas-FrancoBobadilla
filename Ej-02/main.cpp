#include <iostream>
#include "../Pila/Pila.h"
using namespace std;
bool sonIguales(Pila<int>,Pila<int>);
int main() {
    Pila<int> primera,segunda;
    int n;

    n=0;
    cout<<"Ingrese elementos de la primera pila (-1 para terminar): "<<endl;
    while(n!=-1){
        cin>>n;
        primera.push(n);
    }

    n=0;
    cout<<endl<<"Ingrese elementos de la segunda pila (-1 para terminar): "<<endl;
    while(n!=-1){
        cin>>n;
        segunda.push(n);
    }

    if(sonIguales(primera,segunda)){
        cout<<endl<<"Son iguales";
    }else{
        cout<<endl<<"No son iguales";
    }

    return 0;
}
bool sonIguales(Pila<int> primera,Pila<int> segunda){
    while(true){
        if(primera.esVacia()&&segunda.esVacia())return true;
        if((primera.esVacia()&&!segunda.esVacia())||(segunda.esVacia()&&!primera.esVacia()))return false;
        if(primera.pop()!=segunda.pop())return false;
    }
}