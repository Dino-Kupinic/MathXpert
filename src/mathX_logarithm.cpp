//
// Created by Dino Kupinic on 11.06.23.
//

#include "mathX_logarithm.hpp"
#include "mathX_decimal_display.hpp"

namespace mathX {
  double mathX::logarithm::ln(const double &num) {
    if (num <= 0) {
      std::cerr << "Invalid input for ln (log naturalis). Input can not be 0 or negative.";
      return std::numeric_limits<double>::quiet_NaN();
    }
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display()) << std::log(num);
    return std::stod(oss.str());
  }

  double mathX::logarithm::lb(const double &num) {
    if (num <= 0) {
      std::cerr << "Invalid input for lb (log binary). Input can not be 0 or negative.";
      return std::numeric_limits<double>::quiet_NaN();
    }
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display()) << std::log2(num);
    return std::stod(oss.str());
  }

  double mathX::logarithm::lg(const double &num) {
    if (num <= 0) {
      std::cerr << "Invalid input for lg (log 10). Input can not be 0 or negative.";
      return std::numeric_limits<double>::quiet_NaN();
    }
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display()) << std::log10(num);
    return std::stod(oss.str());
  }

  double mathX::logarithm::log(const double &base, const double &num) {
    if (num <= 0) {
      std::cerr << "Invalid input for lb. Input can not be 0 or negative.";
      return std::numeric_limits<double>::quiet_NaN();
    }
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display())
        << std::log(num) / std::log(base);
    return std::stod(oss.str());
  }

}
