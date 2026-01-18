#include <regex>
#include <string>

#include "numbers.hpp"

const std::regex RealNumber::INTEGER_REGEX("^(-)?(\\d+)");
const std::regex RealNumber::FLOAT_REGEX("(-)?(\\d*)\\.(\\d+)");
const std::regex RealNumber::FRACTION_REGEX("^(-)?(\\d+)\\/(\\d+)$");

RealNumber::RealNumber(int value) {
    this->sign = (value > 0) - (value < 0);
    this->numerator = value * this->sign;
    this->denominator = 1;
}

RealNumber::RealNumber(std::string value) {
    std::smatch matched_value;
    if (std::regex_match(value, matched_value, RealNumber::INTEGER_REGEX)) {
        int int_value = std::stoi(value);
        this->sign = (int_value > 0) - (int_value < 0);
        this->numerator = int_value * this->sign;
        this->denominator = 1;
    }
    else if (std::regex_match(value, matched_value, RealNumber::FLOAT_REGEX)) {
        this->numerator = std::stoi(matched_value[2].str() + matched_value[3].str());
        this->denominator = matched_value[3].str().length();
        this->sign = (this->numerator == 0) ? this->sign = 0 : (matched_value[1].str() == "-") ? this->sign = -1 : this->sign = 1;
    }
}

int RealNumber::greatest_common_divisor(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return greatest_common_divisor(b, a % b);
    }
}
