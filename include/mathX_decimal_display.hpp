//
// Created by Dino Kupinic on 09.06.23.
//

#ifndef MATHXPERT_MATHX_DECIMAL_DISPLAY_HPP
#define MATHXPERT_MATHX_DECIMAL_DISPLAY_HPP

namespace mathX {
    class decimal_display {
    public:
        decimal_display(const decimal_display &) = delete;

        decimal_display &operator=(const decimal_display &) = delete;

        static decimal_display &get_instance() {
            static decimal_display instance;
            return instance;
        }

        [[nodiscard]] int get_decimal_display() const {
            return decimal;
        }

        void set_decimal_display(int value) {
            decimal = value;
        }

    private:
        decimal_display() : decimal{3} {}

        int decimal;
    };
}

#endif //MATHXPERT_MATHX_DECIMAL_DISPLAY_HPP
