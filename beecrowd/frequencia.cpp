#include <iostream>
#include <string>

struct frequencia
{
    int qtd;
    char carac;
    int status;
} typedef freq;


int main()
{
    std::string caracteres;
    int cont = 1;
    freq aux;
    freq vetor[1000];

    while (getline(std::cin, caracteres)){
        
        for (int i = 0; i < caracteres.length(); i++){
            for (int j = 0; j < caracteres.length(); j++) {
                if (i != j && caracteres[i] == caracteres[j]) {
                    cont += 1;
                }
            }
            vetor[i].carac = caracteres[i];
            vetor[i].qtd = cont;
            vetor[i].status = 0;
            cont = 1;
        }

        for (int i = 0; i < caracteres.length(); i++){
            for (int j = 0; j < caracteres.length()-1-i; j++){
                if (vetor[j].qtd > vetor[j+1].qtd){
                    aux = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = aux;
                }else if(vetor[j].qtd == vetor[j+1].qtd && (int)vetor[j].carac < (int)vetor[j+1].carac){
                    aux = vetor[j];
                    vetor[j] = vetor[j+1];
                    vetor[j+1] = aux;
                }
            }
        }
        

        for (int i = 0; i < caracteres.length(); i++){
            if (vetor[i].status == 0){
                std::cout << (int)vetor[i].carac << " " << vetor[i].qtd << std::endl;
                for (int j = 0; j < caracteres.length(); j++){
                    if (vetor[i].carac == vetor[j].carac){
                        vetor[j].status = 1;
                    }
                }
            }
        }

        std::cout << "\n";
    }

    return 0;
}