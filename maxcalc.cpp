#include <iostream>

#include "numbers.hpp"

using namespace std;

int main() {
    RealNumber* temp = new RealNumber(-56);
    cout << temp->sign << temp->numerator << temp->denominator << endl;
}
