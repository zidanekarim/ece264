#include "foobar.h"

class Bar : public Foobar {
    public:
        Bar(string name, int position) {
            Foobar(name, position);
            strength += 15;
        }
        ~Bar() {
            std::cout << "Destructor of Bar";
        }
}