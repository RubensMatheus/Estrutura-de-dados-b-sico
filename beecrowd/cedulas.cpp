#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int valor, cont0 = 0, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0, cont6 = 0;

    std::cin >> valor;
    std::cout << valor << endl;

    while (valor > 0){
        if (valor >= 100){
            valor -= 100;
            cont0 += 1;
        }else if (valor >= 50){
            valor -= 50;
            cont1 += 1;
        }else if (valor >= 20){
            valor -= 20;
            cont2 += 1;
        }else if (valor >= 10){
            valor -= 10;
            cont3 += 1;
        }else if (valor >= 5){
            valor -= 5;
            cont4 += 1;
        }else if (valor >= 2){
            valor -= 2;
            cont5 += 1;
        }else if (valor >= 1){
            valor -= 1;
            cont6 += 1;
        }

    }

    std::cout << cont0 << " nota(s) de R$ 100,00" << endl;
    std::cout << cont1 << " nota(s) de R$ 50,00" << endl;
    std::cout << cont2 << " nota(s) de R$ 20,00" << endl;
    std::cout << cont3 << " nota(s) de R$ 10,00" << endl;
    std::cout << cont4 << " nota(s) de R$ 5,00" << endl;
    std::cout << cont5 << " nota(s) de R$ 2,00" << endl;
    std::cout << cont6 << " nota(s) de R$ 1,00" << endl;
 
    return 0;
}