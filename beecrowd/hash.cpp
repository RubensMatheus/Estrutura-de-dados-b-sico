#include <iostream>
#include <string>
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int N, L, soma = 0;
    std::string palavra;

    std::cin >> N;

    for (int i = 0; i < N; i++){
        std::cin >> L;
        for (int j = 0; j < L; j++){
            std::cin >> palavra;
            for (int k = 0; k < palavra.length(); k++){
                soma += int(palavra[k]) - 65;
                soma += j + k;
            }
        }
        std::cout << soma << std::endl;
        soma = 0;
    }
    return 0;
}