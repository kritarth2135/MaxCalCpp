#include <regex>
#include <string>

class Number {};

class RealNumber : public Number {
    public:

    static const std::regex INTEGER_REGEX;
    static const std::regex FLOAT_REGEX;
    static const std::regex FRACTION_REGEX;
    static const int INPUT_TUPLE_SIZE = 2;

    int sign;
    int numerator;
    int denominator;

    static int greatest_common_divisor(int a, int b);

    RealNumber(int value);
    RealNumber(std::string value);
    RealNumber(int value[RealNumber::INPUT_TUPLE_SIZE]);

    int fast_continued_fraction();

    bool is_int();
};

class ComplexNumber;
