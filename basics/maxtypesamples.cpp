//
// Created by sinigr on 09.11.2018.
//

#include "maxtypesamples.h"
#include "iostream"
#include <string>

int main1() {
    int i = 42;
    std::cout << "max(7, i):   " << ::max(7, i) << '\n';

    double f1 = 3.4;
    double f2 = -6.7;
    std::cout << "max(f1, f2): " << ::max(f1, f2) << '\n';

    std::string s1 = "mathematics";
    std::string s2 = "math";
    std::cout << "max(s1, s2): " << ::max(s1, s2) << '\n';

    return 0;
}
