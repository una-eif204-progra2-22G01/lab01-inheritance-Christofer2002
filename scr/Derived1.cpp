//
// Created by Christofer Chaves on 19/3/2022.
//

#include "Derived1.h"


Derived1::Derived1() {
    saludo = "";
}

Derived1::Derived1(int tamanio, string saludo) {
    setTamanio(tamanio);
    this->saludo = saludo;
}

void Derived1::do_something() {
    cout << "Derived1!!!" << endl;
    cout<<saludo<<" and my size is "<<getTamanio()<<endl<<endl;
}

const string &Derived1::getSaludo() const {
    return saludo;
}

void Derived1::setSaludo(const string &saludo) {
    this->saludo = saludo;
}

Derived1::~Derived1() {

}



