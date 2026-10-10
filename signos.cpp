#include <iostream>

double fahrenheitACelsius(double f) {
    return (f - 32.0) * 5.0 / 9.0;
}

int main() {
    double tempF;
    std::cout << "Ingresa la temperatura en Fahrenheit: ";
    std::cin >> tempF;
    std::cout << tempF << " En celcius equivale: " << fahrenheitACelsius(tempF) << "grados celsius";
    return 0;
}