#include "foobar.h"
#ifndef FOO_H
#define FOO_H

class Foo : public Foobar {
    public:
        Foo(std::string name_in, int position) : Foobar(name_in, position) {}
        ~Foo() {
            std::cout << "Destructor of Foo";
        }
        int setStrength(int position) {
            strength = position * 3;
            return 0;
        }
};

#endif