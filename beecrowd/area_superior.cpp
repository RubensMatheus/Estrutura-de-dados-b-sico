#include <iostream>
#include <iomanip>

 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    double mmatriz[12][12];
    double soma = 0;
    char operacao;

    std::cin >> operacao;

    for (int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            std::cin >> mmatriz[i][j];
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = i+1; j < 11-i; j++){
            soma += mmatriz[i][j];
        }
    }
    
    std::cout << std::fixed << std::setprecision(1);

    if (operacao == 'S'){
        std::cout << soma << std::endl;
    }else{
        double media = soma/30;
        std::cout << media << std::endl;
    }
    return 0;
}