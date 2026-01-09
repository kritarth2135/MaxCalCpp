#include "numbers.h"

using namespace std;

int greatest_common_divisor(int a, int b) {
    if (a == 0) {
        return a;
    } else {
        return greatest_common_divisor(b, a % b);
    }
}