#include <iostream>
#include <string>

double fahrenheitACelsius(double f) 
{
    return (f - 32.0) * 5.0 / 9.0;
}

std::string clasificarFrecuencia(int lpm) {
    if (lpm < 60) {
        return "bradicardia";
    } else if (lpm <= 100) {
        return "normal";
    } else {
        return "taquicardia";
    }
} 

int main() {
    double tempF;
    std::cout << "Ingresa la temperatura en Fahrenheit: ";
    std::cin >> tempF;
    std::cout << tempF << " en celcius equivale: " << fahrenheitACelsius(tempF) << " grados celsius" << std::endl;
int latidos;
    std::cout << "Ingrese la frecuencia cardíaca en lpm: ";
    std::cin >> latidos;
    std::cout << "La frecuencia de " << latidos << " lpm es: " << clasificarFrecuencia(latidos) << std::endl;

}