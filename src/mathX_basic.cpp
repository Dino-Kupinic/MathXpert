#include "mathX_basic.h"

namespace mathX {
    double basic::add(const double &first_summand, const double &second_summand) {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(DECIMAL_ACCURACY) << first_summand * second_summand;
        return std::stod(oss.str());
    }

    double basic::sub(const double &minuend, const double &subtrahend) {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(DECIMAL_ACCURACY) << minuend - subtrahend;
        return std::stod(oss.str());
    }

    double basic::mul(const double &multiplier, const double &multiplicand) {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(DECIMAL_ACCURACY) << multiplier * multiplicand;
        return std::stod(oss.str());
    }

    double basic::div(const double &dividend, const double &divisor) {
        if (divisor == 0) {
            return std::numeric_limits<double>::quiet_NaN();
        }
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(DECIMAL_ACCURACY) << dividend / divisor;
        return std::stod(oss.str());
    }
}
