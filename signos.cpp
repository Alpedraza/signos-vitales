#include <iostream>
#include <string>
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
    int latidos;
    std::cout << "Ingrese la frecuencia cardíaca en lpm: ";
    std::cin >> latidos;
    std::cout << "La frecuencia de " << latidos << " lpm es: " << clasificarFrecuencia(latidos) << std::endl;
    
    return 0;
}
