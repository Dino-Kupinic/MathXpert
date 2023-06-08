#ifndef MATHXPERT_MATHX_BASIC_H
#define MATHXPERT_MATHX_BASIC_H

#include <iostream>
#include "typeinfo"
#include "iomanip"
#include <sstream>

namespace mathX {
    static int DECIMAL_ACCURACY = 3;

    class basic {
    public:
        /**
         * adds both parameters together
         * @param first_summand
         * @param second_summand
         * @return double
         */
        static double add(const double &first_summand, const double &second_summand);

        /**
         * subtracts the second parameter from the first
         * @param minuend
         * @param subtrahend
         * @return double
         */
        static double sub(const double &minuend, const double &subtrahend);

        /**
         * Multiplies two numbers
         * @param multiplier
         * @param multiplicand
         * @return double
         */
        static double mul(const double &multiplier, const double &multiplicand);

        /**
         * Divides two numbers
         * @param dividend
         * @param divisor
         * @return double
         */
        static double div(const double &dividend, const double &divisor);

        /**
         * Checks if given type is finite
         * @tparam T generic type that only accepts numbers
         * @param num number
         * @return boolean
         */
        template<typename T>
        static bool isFinite(const T &num) {
            if (!std::is_arithmetic_v<T>) {
                throw std::invalid_argument("Invalid Argument: Not valid type");
            }
            if (!std::isfinite(num)) {
                return false;
            }
            return true;
        }
    };
}

#endif //MATHXPERT_MATHX_BASIC_H
