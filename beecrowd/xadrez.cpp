#include <iostream>
 
 
int main() {
 
    int L, C;

    std::cin >> L >> C;

    if (L%2 == 0 && C%2 == 0){
        std::cout << "1" << std::endl;
    }else if(L%2 == 0 && C%2 != 0){
        std::cout << "0" << std::endl;
    }else if(L%2 != 0 && C%2 == 0){
        std::cout << "0" << std::endl;
    }else if(L%2 != 0 && C%2 != 0){
        std::cout << "1" << std::endl;
    }
    return 0;
}