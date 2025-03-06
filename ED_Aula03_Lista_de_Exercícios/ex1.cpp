#include <iostream>

int main() {
    
    double precos_commodities[5];
    int inter = 0;
    double Soma = 0;
    double Media = 0;
    int i = 0;

    precos_commodities[0]= 75.50 ;
    precos_commodities[1]= 1800  ;
    precos_commodities[2]= 25.30 ;
    precos_commodities[3]= 7.80  ;
    precos_commodities[4]= 2.10  ;

    
    std::cout << "\nO que deseja fazer?: " ;
    std::cout << "\nEncontra o Preco Maximo - 1 " ;
    std::cout << "\nEncontra o Preco Minimo - 2 " ;
    std::cout << "\nCalcular Media de Precos - 3\n" ;

    std::cin >> inter;

    switch(inter) {
        case 1:
            std::cout << "\nPreco Maximo: " << precos_commodities[2] ;
            break;
        
        case 2:
            std::cout << "\nPreco Minimo: " << precos_commodities[5] ;
            break;
        
        case 3:            
            while (i < 5) {
                Soma = Soma + precos_commodities[i];
                i++;
            }
            Media = Soma / 5;
            std::cout << "\nSoma: " << Soma ;
            std::cout << "\nMedia: " << Media ;
            break;
            
        default:
            std::cout << "\nOpção inválida" ;
            break;     
            
    };

    return 0;
}