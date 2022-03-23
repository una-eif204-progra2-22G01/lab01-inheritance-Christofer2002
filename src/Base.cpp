//
// Created by Christofer Chaves on 19/3/2022.
//

#include "Base.h"


Base::Base() {
    tamanio = 0;
}

void Base::do_something() {
    cout<<"I'm Base"<<endl;
}

int Base::getTamanio() const {
    return tamanio;
}

void Base::setTamanio(int tamanio) {
    Base::tamanio = tamanio;
}

string Base::toString() {
    stringstream x;
    x<<"Tamaño: "<<tamanio<<endl;
    return x.str();
}

Base::~Base() {}
