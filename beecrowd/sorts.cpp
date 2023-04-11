#include <iostream>
 
using namespace std;

void sort(int *vetor){
    int aux;
    for (int i = 0; i < 2; i++){
        for (int j = 1; j < 3; j++){
            if (vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int A, B, C;

    std::cin >> A >> B >> C;

    int vetor1[3], vetor2[3];

    vetor1[0] = A;
    vetor1[1] = B;
    vetor1[2] = C;

    vetor2[0] = A;
    vetor2[1] = B;
    vetor2[2] = C;

    sort(vetor1);

    for (int i = 0; i < 3; i++){
        std::cout << vetor1[i] << endl;
    }

    std::cout << "\n";

    for (int i = 0; i < 3; i++){
        std::cout << vetor2[i] << endl;
    }
    return 0;
}