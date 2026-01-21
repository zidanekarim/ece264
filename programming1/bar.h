#include "foobar.h"

class Bar : public Foobar {
    public:
        ~Bar() {
            std::cout << "Destructor of Bar";
        }
        int setStrength(int position) {
            strength = position + 15;
            return 0;
        }
}