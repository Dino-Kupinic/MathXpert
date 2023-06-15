//
// Created by Dino Kupinic on 11.06.23.
//

#ifndef MATHXPERT_MATHX_CONSTANTS_HPP
#define MATHXPERT_MATHX_CONSTANTS_HPP

#include <cmath>

namespace mathX {
  static constexpr double pi = M_PI;
  static constexpr double tau = 2 * pi;
  static const double e = std::exp(1.0);
  static const double sqrt2 = std::pow(2, 0.5);
  static const double sqrt3 = std::pow(3, 0.5);
  static const double sqrt5 = std::pow(5, 0.5);
  static const double phi = (1 + sqrt5) / 2;
}

#endif //MATHXPERT_MATHX_CONSTANTS_HPP
