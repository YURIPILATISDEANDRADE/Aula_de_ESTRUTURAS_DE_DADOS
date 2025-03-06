#include <iostream>
#include <string>

int main() {
    
    std::string dados_economicos_Pais[5];
    double dados_economicos_PIB[5];
    double dados_economicos_Pyrocynical[5];
    double dados_economicos_Desemprego[5];
    int Usado[5];
    int inter = 0;
    double MenorNumeroDefinido = 0;
    double MenorNumero = 0 ;
    double MaiorNumero = 0 ;
    int d = 0;
    int a = 0;

    dados_economicos_Pais[0]= "Apple Inc" ;
    dados_economicos_Pais[1]= "Microsoft" ;
    dados_economicos_Pais[2]= "Amazon" ;
    dados_economicos_Pais[3]= "Tesla e para idiotas" ;
    dados_economicos_Pais[4]= "Google" ;

    dados_economicos_PIB[0]= 150 ;
    dados_economicos_PIB[1]= 1.6 ;
    dados_economicos_PIB[2]= 4.2 ;
    dados_economicos_PIB[3]= 5 ;
    dados_economicos_PIB[4]= 3.1 ;

    dados_economicos_Pyrocynical[0]= 1000 ;
    dados_economicos_Pyrocynical[1]= 800 ;
    dados_economicos_Pyrocynical[2]= 500 ;
    dados_economicos_Pyrocynical[3]= 1200 ;
    dados_economicos_Pyrocynical[4]= 600 ;

    dados_economicos_Desemprego[0]= 2500 ;
    dados_economicos_Desemprego[1]= 2200 ;
    dados_economicos_Desemprego[2]= 1700 ;
    dados_economicos_Desemprego[3]= 700 ;
    dados_economicos_Desemprego[4]= 1800 ;



    std::cout << "\nDefina o valor rando: [X]00,00\n";
    std::cin >> inter;
    std::cout << "\n";

    MenorNumeroDefinido = inter * 100;

    
    while (d < 5)
    {
        Usado[d] = 0;
        d++;
    }

    d = 0;

    
    while (a < 5) { 

        d = 0;

        while (d < 5) {

            if (dados_economicos_Pyrocynical[d] > MaiorNumero)
            {
                MaiorNumero = dados_economicos_Pyrocynical[d];
            }        
            d++;
        }

	    d = 0;
        MenorNumero = MaiorNumero;

        while (d < 5) {
    
            if (dados_economicos_Pyrocynical[d] < MenorNumero && dados_economicos_Pyrocynical[d] >= MenorNumeroDefinido )
            {
                if (Usado[d] == 0)
                {
                    MenorNumero = dados_economicos_Pyrocynical[d];
                }    
                
            }        
            d++;
        }
    
        d = 0;

        while (d < 5) {
    
            if (dados_economicos_Pyrocynical[d] == MenorNumeroDefinido || MenorNumero )
            {
                if ( Usado[d] == 0 )
                {
                std::cout << "\nEmpresa: " << dados_economicos_Pais[d];
                std::cout << " | Preco da acao: " << dados_economicos_PIB[d];
                std::cout << " | Volume Negociado: " << dados_economicos_Pyrocynical[d];
                std::cout << " | Capitalizacao de Mercado: " << dados_economicos_Desemprego[d];
                Usado[d] = 1 ;
                }            
            }
        }
        a++;
    }


    return 0;
}