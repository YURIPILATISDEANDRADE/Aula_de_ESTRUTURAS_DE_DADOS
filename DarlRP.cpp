#include <iostream>

int main() {
    
    double Celsius = 0;
    double Fahrenheit = 0;

    std::cout << "\nInsira a Temperatura em Celsius: " ;
    std::cin >> Celsius;
    
    Fahrenheit = Celsius * 1.8 + 32;

    std::cout << "\nCelsius: " << Celsius << "\nFahrenheit: " << Fahrenheit ;


    return 0;
}