#include <iostream>

int *lbound(int *first, const int *last, int target) {
  size_t count = last - first; // last - first

  while (count != 0) {
    size_t step = count / 2;
    int *mid = first + step; // Salta para o meio!

    if (target <= *mid) { // Go left.
      count = step;
    } else { // Go right
      first = mid + 1;
      count = count - (step + 1);
    }
  }
  return first; // Always points to the solution.
}

int main(){

    int A[] = {1, 2, 3, 4, 5, 6, 8, 10};
    
    size_t A_sz { sizeof(A)/sizeof(A[0]) };

    int *a = lbound(&A[0], &A[A_sz], 5);

    if (a != &A[A_sz]){
        std::cout << *a << std::endl;
    }
    

    return 0;
}