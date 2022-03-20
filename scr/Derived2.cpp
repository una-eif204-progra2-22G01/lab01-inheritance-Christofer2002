//
// Created by Christofer Chaves on 19/3/2022.
//

#include "Derived2.h"

Derived2::Derived2() {

}

Derived2::Derived2(int tamanio, string saludo) {
    setTamanio(tamanio);
    this->saludo = saludo;
}

void Derived2::do_something() {
    cout << "Derived2!!!" << endl;
    cout<<saludo<< " and my size is "<<getTamanio()<< endl;
}

void Derived2::setSaludo(const string &saludo) {
    this->saludo = saludo;
}

const string &Derived2::getSaludo() const {
    return saludo;
}

Derived2::~Derived2() {

}
