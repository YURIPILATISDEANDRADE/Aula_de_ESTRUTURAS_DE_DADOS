#include <iostream>

int main() {
    
    int inter = 21;
    float floater = 5.9f;
    double duo = 75.5;
    char chart = 'A';

    std::cout << "\nInsira um Numero Inteiro: " ;
    std::cin >> inter;

    std::cout << "\nInsira um Numero Floater: " ;
    std::cin >> floater;

    std::cout << "\nInsira um Numero: " ;
    std::cin >> duo;

    std::cout << "\nInsira um Letra: " ;
    std::cin >> chart;

    std::cout << "\nInt: " << inter << "\nfloat: " << floater 
        << "\ndouble: " << duo << "\nchar: " << chart  << "\n " ;


    return 0;
}