//
// Created by Christofer Chaves on 19/3/2022.
//

#include "Base.h"


Base::Base() {
    tamanio = 0;
}

int Base::getTamanio() const {
    return tamanio;
}

void Base::setTamanio(int tamanio) {
    Base::tamanio = tamanio;
}

Base::~Base() {

}
