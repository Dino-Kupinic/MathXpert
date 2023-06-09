//
// Created by Dino Kupinic on 09.06.23.
//

#ifndef MATHXPERT_MATHX_TRIGONOMETRY_HPP
#define MATHXPERT_MATHX_TRIGONOMETRY_HPP

#include "iostream"
#include "iomanip"
#include <sstream>

namespace mathX {

    class trigonometry {
    public:
        /**
         * calculates sine of given parameter
         * @param num
         * @return double
         */
        static double sin(const double &num);

        /**
         * calculates arcsin of given parameter
         * @param num
         * @return double
         */
        static double arcsin(const double &num);

        /**
         * calculates cos of given parameter
         * @param num
         * @return
         */
        static double cos(const double &num);

        /**
         * calculates arccos of given parameter
         * @param num
         * @return double
         */
        static double arccos(const double &num);

        /**
         * calculates tan of given parameter
         * @param num
         * @return double
         */
        static double tan(const double &num);

        /**
         * calculates arctan of given parameter
         * @param num
         * @return double
         */
        static double arctan(const double &num);
    };

}

#endif //MATHXPERT_MATHX_TRIGONOMETRY_HPP
