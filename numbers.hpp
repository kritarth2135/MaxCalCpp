#ifndef NUMBERS_H
#define NUMBERS_H

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
    long long int numerator;
    long long int denominator;

    static int greatest_common_divisor(long long int a, long long int b);

    RealNumber(long long int value);
    RealNumber(std::string value);
    RealNumber(long long int value[RealNumber::INPUT_TUPLE_SIZE]);

    void simplify();

    int fast_continued_fraction();
};

class ComplexNumber;

#endif // NUMBERS_H
