//
// Created by Dino Kupinic on 11.06.23.
//

#ifndef MATHXPERT_MATHX_LOGARITHM_HPP
#define MATHXPERT_MATHX_LOGARITHM_HPP

#include <iostream>
#include <iomanip>
#include <sstream>

namespace mathX {
  class logarithm {
  public:
    /**
     * calculates the natural logarithm
     * @param num
     * @return double
     */
    static double ln(const double &num);

    /**
     * calculates the binary logarithm
     * @param num
     * @return double
     */
    static double lb(const double &num);

    /**
     * calcuates base10 logarithm
     * @param num
     * @return double
     */
    static double lg(const double &num);

    /**
     * calculates custom logarithm
     * @param base base number
     * @param num
     * @return double
     */
    static double log(const double &base, const double &num);
  };
}


#endif //MATHXPERT_MATHX_LOGARITHM_HPP
