#include <iostream>

#include "numbers.hpp"

using namespace std;

int main() {
    long long int temp_number[2] = {-56, 1000};
    RealNumber* temp = new RealNumber(temp_number);
    cout << temp->sign << " " << temp->numerator << " " << temp->denominator << endl;
}
