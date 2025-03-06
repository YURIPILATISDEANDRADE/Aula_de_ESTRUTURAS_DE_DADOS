#include <iostream>
#include <string>

int main() {
    
    std::string dados_economicos_Pais[5];
    double dados_economicos_PIB[5];
    double dados_economicos_Pyrocynical[5];
    double dados_economicos_Desemprego[5];
    int inter = 0;
    double MaiorNumero = 0;
    double Soma = 0;
    double Media = 0;
    int i = 0;
    std::string Garry = "a" ;   

    dados_economicos_Pais[0]= "Estados Unidos" ;
    dados_economicos_Pais[1]= "Brasil" ;
    dados_economicos_Pais[2]= "Alemanha" ;
    dados_economicos_Pais[3]= "Japao" ;
    dados_economicos_Pais[4]= "India" ;

    dados_economicos_PIB[0]= 25.3 ;
    dados_economicos_PIB[1]= 1.6 ;
    dados_economicos_PIB[2]= 4.2 ;
    dados_economicos_PIB[3]= 5 ;
    dados_economicos_PIB[4]= 3.1 ;

    dados_economicos_Pyrocynical[0]= 3.7 ;
    dados_economicos_Pyrocynical[1]= 5.2 ;
    dados_economicos_Pyrocynical[2]= 2.1 ;
    dados_economicos_Pyrocynical[3]= 0.5 ;
    dados_economicos_Pyrocynical[4]= 6.1 ;

    dados_economicos_Desemprego[0]= 4.2 ;
    dados_economicos_Desemprego[1]= 9.3 ;
    dados_economicos_Desemprego[2]= 3 ;
    dados_economicos_Desemprego[3]= 2.6 ;
    dados_economicos_Desemprego[4]= 7.1 ;

    
    std::cout << "\nO que deseja fazer?: " ;
    std::cout << "\nMaior Numero - 1 " ;
    std::cout << "\nMedia de Inflacao - 2\n" ;

    std::cin >> inter;

    switch(inter) {
        case 1:
            while (i < 5) {
                if (MaiorNumero < dados_economicos_PIB[i])
                {
                    MaiorNumero = dados_economicos_PIB[i];
                    Garry = dados_economicos_Pais[i];
                }
                i++;
            }
            std::cout << "\nPais com Maior PIB: " << Garry << " - " << MaiorNumero ;
            break;
                
        case 2:            
            while (i < 5) {
                Soma = Soma + dados_economicos_Pyrocynical[i];
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