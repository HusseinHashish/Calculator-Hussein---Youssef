// test.cpp
#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "===== CALCULATOR LIBRARY TEST PROGRAM =====" << std::endl << std::endl;
    
    // Test addition
    std::cout << "Testing addition:" << std::endl;
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "-7 + 12 = " << add(-7, 12) << std::endl;
    std::cout << std::endl;

    // Test subtraction
    std::cout << "Testing subtraction:" << std::endl;
    std::cout << "10 - 4 = " << subtract(10, 4) << std::endl;
    std::cout << "5 - 8 = " << subtract(5, 8) << std::endl;
    std::cout << std::endl;

    // Test multiplication
    std::cout << "Testing multiplication:" << std::endl;
    std::cout << "6 * 7 = " << multiply(6, 7) << std::endl;
    std::cout << "-3 * 4 = " << multiply(-3, 4) << std::endl;
    std::cout << std::endl;

    // Test division
    std::cout << "Testing division:" << std::endl;
    std::cout << "20 / 4 = " << divide(20, 4) << std::endl;
    std::cout << "7 / 2 = " << divide(7, 2) << std::endl;
    std::cout << "Division by zero: 10 / 0 = " << divide(10, 0) << std::endl;
    std::cout << std::endl;

    // Test factorial
    std::cout << "Testing factorial:" << std::endl;
    std::cout << "0! = " << factorial(0) << std::endl;
    std::cout << "1! = " << factorial(1) << std::endl;
    std::cout << "5! = " << factorial(5) << std::endl;
    std::cout << "10! = " << factorial(10) << std::endl;
    std::cout << std::endl;

    // Test GCD
    std::cout << "Testing GCD:" << std::endl;
    std::cout << "GCD(48, 18) = " << gcd(48, 18) << std::endl;
    std::cout << "GCD(35, 14) = " << gcd(35, 14) << std::endl;
    std::cout << "GCD(0, 8) = " << gcd(0, 8) << std::endl;
    std::cout << std::endl;

    // Test LCM
    std::cout << "Testing LCM:" << std::endl;
    std::cout << "LCM(12, 18) = " << lcm(12, 18) << std::endl;
    std::cout << "LCM(5, 7) = " << lcm(5, 7) << std::endl;
    std::cout << "LCM(0, 5) = " << lcm(0, 5) << std::endl;
    std::cout << std::endl;

    // Test random number generation
    std::cout << "Testing random number generation:" << std::endl;
    std::cout << "Random number between 1 and 10: " << randomInRange(1, 10) << std::endl;
    std::cout << "Another random number between 1 and 10: " << randomInRange(1, 10) << std::endl;
    std::cout << "Random number between -100 and 100: " << randomInRange(-100, 100) << std::endl;
    std::cout << std::endl;

    std::cout << "All tests completed!" << std::endl;
    
    return 0;
}
