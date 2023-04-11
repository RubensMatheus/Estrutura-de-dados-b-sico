// #include <iostream>
 
// int main() {
 
//     /**
//      * Escreva a sua solução aqui
//      * Code your solution here
//      * Escriba su solución aquí
//      */
     
//     int T, N, aux1 = 0, aux2 = 1, F = 0;
//     std::cin >> T;

//     for (int i = 0; i < T; i++){
//         std::cin >> N;
//         if (N == 0){
//             std::cout << "Fib(" << N << ") = " << "0" << std::endl ;
//             continue;
//         }else if (N == 1){
//             std::cout << "Fib(" << N << ") = " << "1" << std::endl ;
//             continue;
//         }else{
//             for (int j = 2; j < N+1; j++){
//                 F = aux1 + aux2;
//                 aux1 = aux2;
//                 aux2 = F;
//             }
//         }
//         std::cout << "Fib(" << N << ") = " << F << std::endl ;
//         aux1 = 0;
//         aux2 = 1;
//     }

//     return 0;
// }

#include <iostream>
 
int main() {
     
    int T, N;
    long long int vetor[61];
    vetor[0] = 0;
    vetor[1] = 1;
    std::cin >> T;

    for (int i = 0; i < T; i++){
        std::cin >> N;
        if (N == 0){
            std::cout << "Fib(" << N << ") = " << vetor[0] << std::endl ;
            continue;
        }else if (N == 1){
            std::cout << "Fib(" << N << ") = " << vetor[1] << std::endl ;
            continue;
        }else{
            for (int j = 2; j < N+1; j++){
                vetor[j] = vetor[j-2] + vetor[j-1];
            }
            
            std::cout << "Fib(" << N << ") = " << vetor[N] << std::endl ;
        }
    }

    return 0;
}