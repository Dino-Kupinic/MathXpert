#ifndef MATHXPERT_MATHX_BASIC_H
#define MATHXPERT_MATHX_BASIC_H

#include <iostream>
#include "typeinfo"

namespace mathX {
    static int DECIMAL_ACCURACY = 3;

    std::vector<std::string> valid_number_types{
            "d", "i", "j", "s", "l", "m", "f"
    };

    class basic {
    public:
        static double add(const double &first_summand, const double &second_summand);

        static double sub(const double &minuend, const double &subtrahend);

        static double mul(const double &multiplier, const double &multiplicand);

        static double div(const double &dividend, const double &divisor);

        template<typename T>
        static bool isFinite(const T &num) {
            if (!(std::find(valid_number_types.begin(), valid_number_types.end(), typeid(num).name()) != valid_number_types.end())) {
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
