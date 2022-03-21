#include "Derived1.h"
#include "Derived2.h"

// function main begins program execution
int main(int argc, const char *argv[]) {
    Derived1 derived1;
    Derived2 derived2;
    string saludoDerived1 = "Hi,I'm a program", saludoDerived2 = "Hi, I'm a computer";

    derived1 = Derived1(20,saludoDerived1);
    derived2 = Derived2(10,saludoDerived2);

    cout << "Welcome to the UNA!" << endl<<endl;

    derived1.do_something();
    derived2.do_something();

}  // end function main