#include "mathX_basic.h"

namespace mathX {
    double basic::add(const double &first_summand, const double &second_summand) {
        return first_summand + second_summand;
    }

    double basic::sub(const double &minuend, const double &subtrahend) {
        return minuend - subtrahend;
    }

    double basic::mul(const double &multiplier, const double &multiplicand) {
        return multiplier * multiplicand;
    }

    double basic::div(const double &dividend, const double &divisor) {
        if (divisor == 0) {
            std::numeric_limits<double>::quiet_NaN();
        }
        return dividend / divisor;
    }
}
