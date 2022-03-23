//
// Created by Christofer Chaves on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_CHRISTOFER2002_DERIVED2_H
#define LAB01_INHERITANCE_CHRISTOFER2002_DERIVED2_H
#include "Base.h"


class Derived2 final: public Base{
private:
    string saludo;
public:
    Derived2();
    Derived2(int, string);
    void do_something() override final;
    const string &getSaludo() const;
    void setSaludo(const string &saludo);
    string toString();
    ~Derived2();
};


#endif //LAB01_INHERITANCE_CHRISTOFER2002_DERIVED2_H
