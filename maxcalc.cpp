#include <iostream>

#include "numbers.h"

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;
    int temp = RealNumber :: greatest_common_divisor(a, b);
    cout << temp;
}