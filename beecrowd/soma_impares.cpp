#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    int A, B, cont = 0;

    std::cin >> A >> B;

    if (A<B){
        for (int i = A+1; i < B; i++){
            if (i%2 != 0){
                cont += i;
            }
        }
    }else{
        for (int i = B+1; i < A; i++){
            if (i%2 != 0){
                cont += i;
            }
        }
    }

    std::cout << cont << endl;    
    
    return 0;
}