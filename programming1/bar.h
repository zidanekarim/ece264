#include "foobar.h"
#ifndef BAR_H
#define BAR_H

class Bar : public Foobar {
    public:
        Bar(std::string name_in, int position) : Foobar(name_in, position) {}
        ~Bar() {
            std::cout << "Destructor of Bar";
        }
        int setStrength(int position) {
            strength = position + 15;
            return 0;
        }
};

#endif