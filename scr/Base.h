//
// Created by Christofer Chaves on 19/3/2022.
//
#include <iostream>  // allows program to output data to the screen
#include <sstream>
#ifndef LAB01_INHERITANCE_CHRISTOFER2002_BASE_H
#define LAB01_INHERITANCE_CHRISTOFER2002_BASE_H
using namespace std;

class Base{
private:
    int tamanio;
public:
    Base();
    virtual void do_something() = 0;
    int getTamanio() const;
    void setTamanio(int tamanio);
    string toString();
    virtual ~Base();
};


#endif //LAB01_INHERITANCE_CHRISTOFER2002_BASE_H
