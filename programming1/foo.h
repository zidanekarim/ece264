#include "foobar.h"

class Foo : public Foobar {
    public:

        ~Foo() {
            std::cout << "Destructor of Foo";
        }
        int setStrength(int position) {
            strength = position * 3;
            return 0;
        }
}