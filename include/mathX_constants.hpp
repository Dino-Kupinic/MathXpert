//
// Created by Dino Kupinic on 11.06.23.
//

#ifndef MATHXPERT_MATHX_CONSTANTS_HPP
#define MATHXPERT_MATHX_CONSTANTS_HPP

#include <cmath>

namespace mathX {
    static double pi = M_PI;
    static double e = std::exp(1.0);
    static double tau = 2 * pi;
    static double sqrt2 = std::pow(2, 0.5);
    static double sqrt3 = std::pow(3, 0.5);
    static double sqrt5 = std::pow(5, 0.5);
    static double phi = (1 + sqrt5) / 2;
}

#endif //MATHXPERT_MATHX_CONSTANTS_HPP
