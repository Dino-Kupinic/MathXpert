//
// Created by Dino Kupinic on 09.06.23.
//

#include "mathX_trigonometry.hpp"
#include "cmath"
#include "mathX_decimal_display.hpp"

namespace mathX {
  double trigonometry::sin(const double &num) {
    double num_in_rad = num * (M_PI / 180);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display())
        << std::sin(num_in_rad);
    return std::stod(oss.str());
  }

  double trigonometry::arcsin(const double &num) {
    if (num < -1.0 || num > 1.0) {
      std::cerr
              << "Invalid input for arcsin. Input can only be greater than or equal to -1 or smaller than or equal to 1."
              << std::endl;
      return std::numeric_limits<double>::quiet_NaN();
    }
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display())
        << std::asin(num) * (180 / M_PI);
    return std::stod(oss.str());
  }

  double trigonometry::cos(const double &num) {
    double num_in_rad = num * (M_PI / 180);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display())
        << std::cos(num_in_rad);
    return std::stod(oss.str());
  }

  double trigonometry::arccos(const double &num) {
    if (num < -1.0 || num > 1.0) {
      std::cerr
              << "Invalid input for arccos. Input can only be greater than or equal to -1 or smaller than or equal to 1."
              << std::endl;
      return std::numeric_limits<double>::quiet_NaN();
    }
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display())
        << std::acos(num) * (180 / M_PI);
    return std::stod(oss.str());
  }

  double trigonometry::tan(const double &num) {
    if (num == 90 || num == -90) {
      std::cerr
              << "Invalid input for tan. Input can not be 90 or -90."
              << std::endl;
      return std::numeric_limits<double>::quiet_NaN();
    }
    double num_in_rad = num * (M_PI / 180);
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display())
        << std::tan(num_in_rad);
    return std::stod(oss.str());
  }

  double trigonometry::arctan(const double &num) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_display::get_instance().get_decimal_display())
        << std::atan(num) * (180 / M_PI);
    return std::stod(oss.str());
  }
} // mathX