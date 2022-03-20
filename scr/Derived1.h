//
// Created by Christofer Chaves on 19/3/2022.
//

#ifndef LAB01_INHERITANCE_CHRISTOFER2002_DERIVED1_H
#define LAB01_INHERITANCE_CHRISTOFER2002_DERIVED1_H
#include "Base.h"


class Derived1 : public Base{
private:
    string saludo;
public:
    Derived1();
    Derived1(int, string);
    void do_something() override;
    const string &getSaludo() const;
    void setSaludo(const string &saludo);
    ~Derived1();
};


#endif //LAB01_INHERITANCE_CHRISTOFER2002_DERIVED1_H
