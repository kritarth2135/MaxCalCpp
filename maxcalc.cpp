#include <iostream>

#include "numbers.hpp"

using namespace std;

int main() {
    long long int temp_number[2] = {6, 12};
    RealNumber* temp = new RealNumber(temp_number);
    cout << temp->sign << " " << temp->numerator << " " << temp->denominator << endl;
    temp->simplify();
    cout << temp->sign << " " << temp->numerator << " " << temp->denominator << endl;
}
