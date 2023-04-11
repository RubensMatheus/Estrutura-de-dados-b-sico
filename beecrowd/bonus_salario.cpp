#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     
    std::string nome;
    double fixo, bonus;

    getline(cin, nome);
    std::cin >> fixo ;
    std::cin >> bonus;

    double pagamento = fixo + (bonus*0.15);

    std::cout << std::fixed << std::setprecision(2);

    std::cout << "TOTAL = R$ " << pagamento << endl;
     
 
    return 0;
}