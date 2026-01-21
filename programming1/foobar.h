#include <string>
#include <iostream>

class Foobar {
    public:
        string name;
        int strength;   
        Foobar(string name_in, int position) {
            name = name_in;
            strength = position;
        }
        int setStrength(int position) {
            strength = position;
            return 0;
        }
        ~Foobar() {
            std::cout << "Destructor of Foobar";
        }
}