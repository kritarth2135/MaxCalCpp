// #include <regex>
// #include <string>

#include "numbers.h"

using namespace std;

int RealNumber :: greatest_common_divisor(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return greatest_common_divisor(b, a % b);
    }
}