#include <stdio.h>
#include <iostream>
 
int *binaria_recursiva(int target, int *first, int *last) {
  int *mid = first + (last-first)/2;
  int *count = last+1;
  if(first > last ){
    //return (last+1);
    return count;
  }
  if(*mid == target){
    return mid;
  } 
  if (*mid < target){
    return binaria_recursiva(target, mid+1, last);
  }else if (*mid > target){
    return binaria_recursiva(target, first, mid-1);
  }
}

int main() {
 
  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44,45,46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

  int target = 0;
  std::cin >> target;
  std::cout << "\n";
  
  int last {sizeof(A)/sizeof(A[0]) };
  int* teste = binaria_recursiva(target, &A[0], &A[last]);
  std::cout << "Teste: " << *teste << std::endl;
  std::cout << "Last+1: " << last+1 << std::endl;
  if(*teste == -1 || *teste == last+1){
    std::cout << "Elemento nao encontrado no vetor" << std::endl;
  } else{
    std::cout << "Elemento encontrado na posicaoo: " << teste - &A[0] << std::endl;
  }
}