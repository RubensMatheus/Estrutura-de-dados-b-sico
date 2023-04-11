#include <iostream>
 
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int vetor[20], aux, j = 19;

    for (int i = 0; i < 20; i++){
        std::cin >> vetor[i];
    }

    for (int i = 0; i < 10; i++){
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
        j--;
    }

    for (int i = 0; i < 20; i++){
        std::cout << "N[" << i << "] = " << vetor[i] << std::endl;
    }
    return 0;
}