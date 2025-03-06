#include <iostream>

int main() {
    
    double Celsius = 0;
    double Fahrenheit = 0;

    std::cout << "\nInsira o comprimento: " ;
    std::cin >> Celsius;
    
    Fahrenheit = 2 * 3.14159265359 * Celsius;

    std::cout << "\nCircunferencia do circulo: " << Fahrenheit;


    return 0;
}