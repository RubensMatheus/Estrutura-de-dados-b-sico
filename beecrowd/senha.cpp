#include <iostream>
#include <string>
  
int main() {
 
    std::string senha;
    int contM = 0, contm = 0, contnumber = 0, contg = 0;

    while (getline(std::cin, senha)){
        //std::cout << senha.length() << "\n";
        if (6 <= senha.length() && senha.length() <= 32 ){
            for (int i = 0; i < senha.length(); i++){
                if (48 <= (int)senha[i] && (int)senha[i] <= 57 ){
                    contnumber++;
                    contg++;
                }else if (65 <= (int)senha[i] && (int)senha[i] <= 90){
                    contM++;
                    contg++;
                }else if(97 <= (int)senha[i] && (int)senha[i] <= 122){
                    contm++;
                    contg++;
                }
            }
            if (contM >= 1 && contm >= 1 && contnumber >= 1 && contg == senha.length()){
                std::cout << "Senha valida." << std::endl;
            }else{
                std::cout << "Senha invalida." << std::endl;
            }
        }else{
            std::cout << "Senha invalida." << std::endl;
        }
        contM = 0;
        contm = 0; 
        contnumber = 0;
        contg = 0;
    }

    return 0;
}