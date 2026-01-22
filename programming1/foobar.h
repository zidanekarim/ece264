#include <string>
#include <iostream>
#ifndef FOOBAR_H
#define FOOBAR_H

class Foobar {
    public:
        std::string name;
        int strength;   
        Foobar(std::string name_in, int position) {
            name = name_in;
            strength = position;
        }
        virtual int setStrength(int position) {
            strength = position;
            return 0;
        }
        ~Foobar() {
            std::cout << "Destructor of Foobar";
        }
};

#endif