#include <iostream>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
 
    int x1, x2, y1, y2, saida;

    std::cin >> x1 >> y1 >> x2 >> y2;

    int v1 = x1 - x2;
    int v2 = y1 - y2;

    while (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0){
        if (x1 == x2 && y1 == y2){
            saida = 0;
        }else if (v1 == v2 || v1 == (v2*-1)){
            saida = 1;
        }else if ((x1 == x2 && y1 != y2) || (x1 != x2 && y1 == y2)){
            saida = 1;
        }else{
            saida = 2;
        }

        std::cout << saida << endl;

        std::cin >> x1 >> y1 >> x2 >> y2;
        v1 = x1 - x2;
        v2 = y1 - y2;
    }
    

    return 0;
}