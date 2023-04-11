#include <iostream>

int *lbound(int *first, const int *last, int target) {
  size_t count = last - first;

  while (count != 0) {
    size_t step = count / 2;
    int *mid = first + step;

    if (target <= *mid) { 
      count = step;
    } else {
      first = mid + 1;
      count = count - (step + 1);
    }
  }
  return first;
}

int main(){

    //int A[] = {1, 1, 2, 3, 3, 5 , 5, 6, 6, 6, 7, 7, 8};
    int A[] = {1, 1, 2, 3, 3, 3, 3, 4 , 4 , 4, 5, 5, 6};

    int last {sizeof(A)/sizeof(A[0]) };

    int *a = lbound(&A[0], &A[last], 4);

    if (a != &A[last]){
        std::cout << a - &A[0] << std::endl;
    }else{
        std::cout << "target não encontrado" << std::endl;
    }

    return 0;
}