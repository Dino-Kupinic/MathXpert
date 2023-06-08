#ifndef MATHXPERT_LIBRARY_H
#define MATHXPERT_LIBRARY_H

#include <iostream>

namespace mathX {
    static int DECIMAL_ACCURACY = 3;

    class basic {
    public:
        static double add(double a, double b);
        static double sub(double a, double b);
        static double mul(double a, double b);
        static double div(double a, double b);
    };
}

#endif //MATHXPERT_LIBRARY_H
