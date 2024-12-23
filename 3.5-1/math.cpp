#include "math.h"
#include <cmath>
#include <stdexcept>

double sum(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero!");
    }
    return a / b;
}

double exponentiation(double a, double b) {
    return pow(a, b);
}
