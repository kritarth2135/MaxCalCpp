#include <regex>

class Number {};

class RealNumber : public Number {
    public:

    int sign;
    int numerator;
    int denominator;

    static int greatest_common_divisor(int a, int b);

    int fast_continued_fraction() {return 1;}

    RealNumber(int value) {
        this-> sign = (value > 0) ? 1 : -1;
        this-> numerator = value * this-> sign;
        this-> denominator = 1;
    }

    // const std :: regex integer(R"(^(-)?(\d+)(?:\.(\d*))?$)");

    // RealNumber(string value) {
    //     //
    // }
};

class ComplexNumber;
