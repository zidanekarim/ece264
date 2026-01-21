#include "foobar.h"

class Foo : public Foobar {
    public:
        Foo(string name, int position) {
            Foobar(name, position);
            strength *= 3;
        }
        ~Foo() {
            std::cout << "Destructor of Foo";
        }
}