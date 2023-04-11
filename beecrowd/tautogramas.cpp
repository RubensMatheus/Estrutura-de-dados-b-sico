#include <iostream>
#include <string>
#include <sstream>
 

int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    std::string frase;
    std::stringstream aux ;
    std::string palavra;
    char letra[50];
    int cont = 0;
    int cont2 = 0;
    
    while(std::getline(std::cin, frase) && frase!="*"){
        aux << frase ;

        while (aux >> palavra){
            letra[cont] = tolower(palavra[0]);
            cont += 1;
        }

        for (int i = 0; i < cont; i++){
            if (letra[0] != letra[i]){
                cont2 += 1;
            } 
        }

        if (cont2 == 0){
            std::cout << "Y" << std::endl;
        }else{
            std::cout << "N" << std::endl;
        }

        cont = 0;
        cont2 = 0;
        aux.clear();
        aux.str("");
                
    }
 
    return 0;
}