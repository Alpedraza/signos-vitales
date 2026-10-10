#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double tempF = 98.6;
    std::cout << tempF << " °F equivale a " << fahrenheitACelsius(tempF) << " °C\n";
    return 0;
}