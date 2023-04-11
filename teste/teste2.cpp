#include <iostream>

int *ubound(int *first, const int *last, int target) {
  size_t count = last - first; 

  while (count != 0) {
    size_t step = count / 2;
    int *mid = first + step;

    if (target >= *mid) { 
      first = mid + 1;
      count = count - (step + 1);
    } else {
      count = step;
    }
  }
  return first;
}

int main(){

    int A[] = { 1, 1, 2, 3, 3, 7 , 7, 8, 8, 8, 9, 9, 9};

    int last {sizeof(A)/sizeof(A[0]) };

    int *a = ubound(&A[0], &A[last], 4);

    if (a != &A[last]){
        std::cout << a - &A[0] << std::endl;
    }else{
        std::cout << "target não encontrado" << std::endl;
    }

    return 0;
}