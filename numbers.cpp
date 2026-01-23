#include <cmath>
#include <regex>
#include <stdexcept>
#include <string>

#include "numbers.hpp"

const std::regex RealNumber::INTEGER_REGEX("^(-)?(\\d+)");
const std::regex RealNumber::FLOAT_REGEX("(-)?(\\d*)\\.(\\d+)");
const std::regex RealNumber::FRACTION_REGEX("^(-)?(\\d+)\\/(\\d+)$");

RealNumber::RealNumber(long long int value) {
    this->sign = (value > 0) - (value < 0);
    this->numerator = value * this->sign;
    this->denominator = 1;
}

RealNumber::RealNumber(std::string value) {
    std::smatch matched_value;

    if (std::regex_match(value, matched_value, RealNumber::INTEGER_REGEX)) {
        long long int int_value = std::stoi(value);
        this->sign = (int_value > 0) - (int_value < 0);
        this->numerator = int_value * this->sign;
        this->denominator = 1;
    }
    else if (std::regex_match(value, matched_value, RealNumber::FLOAT_REGEX)) {
        this->numerator = std::stoi(matched_value[2].str() + matched_value[3].str());
        this->denominator = std::pow(10, matched_value[3].str().length());
        this->sign = (this->numerator == 0) ? this->sign = 0 : (matched_value[1].str() == "-") ? this->sign = -1 : this->sign = 1;
    }
    else if (std::regex_match(value, matched_value, RealNumber::FRACTION_REGEX)) {
        this->numerator = std::stoi(matched_value[2].str());
        this->denominator = std::stoi(matched_value[3].str());
        if (this->denominator == 0) {
            throw std::invalid_argument("Denominator can't be 0");
        }
        this->sign = (this->numerator == 0) ? this->sign = 0 : (matched_value[1].str() == "-") ? this->sign = -1 : this->sign = 1;
    }
}

RealNumber::RealNumber(long long int value[RealNumber::INPUT_TUPLE_SIZE]) {
    this->sign = (value[0] > 0) - (value[0] < 0);
    this->numerator = value[0] * this->sign;
    this->denominator = value[1];
}

int RealNumber::greatest_common_divisor(long long int a, long long int b) {
    if (b == 0) {
        return a;
    } else {
        return greatest_common_divisor(b, a % b);
    }
}
