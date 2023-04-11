#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;
 
int main() {
 
    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

    double x1, x2, y1, y2, distancia;

    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    distancia = sqrt((pow(x2-x1, 2))+(pow(y2-y1, 2)));
    
    std::cout << std::fixed << std::setprecision(4);
    std::cout << distancia << endl;
    
    return 0;
}