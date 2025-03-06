#include <iostream>
#include <string>

int main() {
    
    std::string Ativo[5];
    double Valor_Investido[5];
    double Valor_Atual[5];
    double LucroPrejuizo[5];
    int inter = rand() % 4;
    double MaiorNumero = 0;
    double MenorNumero = 0;
    int i = 0;  
    int a = 0;
    int d = 0;

    Ativo[0]= "AAPL" ;
    Ativo[1]= "MSFT" ;
    Ativo[2]= "AMZN" ;
    Ativo[3]= "TSLA" ;
    Ativo[4]= "GOOGL" ;

    Valor_Investido[0]= 15000 ;
    Valor_Investido[1]= 15000 ;
    Valor_Investido[2]= 33000 ;
    Valor_Investido[3]= 14000 ;
    Valor_Investido[4]= 14000 ;

    Valor_Atual[0]= 16000 ;
    Valor_Atual[1]= 15500 ;
    Valor_Atual[2]= 34000 ;
    Valor_Atual[3]= 15000 ;
    Valor_Atual[4]= 14500 ;

    LucroPrejuizo[0]= 1000 ;
    LucroPrejuizo[1]= 500 ;
    LucroPrejuizo[2]= 1000 ;
    LucroPrejuizo[3]= 1000 ;
    LucroPrejuizo[4]= 500 ;

    


        

    return 0;
}