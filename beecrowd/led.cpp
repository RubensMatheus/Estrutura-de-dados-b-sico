#include <iostream>
#include <string>

 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    int N, leds = 0;
    std::string V;

    std::cin >> N ;

    for (int i = 0; i < N; i++){
        std::cin >> V;
        for (int i = 0; i < V.length(); i++){
            if (V[i] == '0'){
                leds += 6;
            }else if(V[i] == '1'){
                leds += 2;
            }else if(V[i] == '2' || V[i] == '3' || V[i] == '5' ){
                leds += 5;
            }else if(V[i] == '4'){
                leds += 4;
            }else if(V[i] == '6' || V[i] == '9'){
                leds += 6;
            }else if(V[i] == '7'){
                leds += 3;
            }else if(V[i] =='8'){
                leds += 7;
            }
        }
        
        std::cout << leds << " leds" << std::endl;
        leds = 0;
    } 
    return 0;
}