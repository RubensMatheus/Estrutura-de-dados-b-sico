/*!
 * Binary search and lower bound test application.
 * @author: Selan
 * @date: April 4th, 2023.
 * To compile: clang++ -Wall -std=c++17 bsearch_count.cpp -o bs
 */

#include <array>
#include <iostream>
#include <iterator>
#include <sstream>
#include <string>

/// Binary search version that relies on count/step
[[nodiscard]] int *bsearch(int *first, int *last, int target) {
  // The initial count is done only once. Done with the `last` pointer.
  size_t count = last - first; // auto count = std::distance(first,last);

  // Same as before: keep going until the search spaces has at least 1 element.
  while (count != 0) {
    size_t step = count / 2; // How far should I jump to?
    int *mid = first + step; // Jump to middle.

    // Termination case #1: target located.
    if (*mid == target) {
      return mid;
    }
    if (target < *mid) {          // Go left..
      count = step;               // ... and update the count of this half.
    } else {                      // Go rigth...
      first = mid + 1;            // ... adjust the new begining on this half;
      count = count - (step + 1); // and update count of this half.
    }
  }
  return last; // Termination case #2: searching failed.
}

/// Lower bound implementation.
[[nodiscard]] int *lbound(int *first, const int *last, int target) {
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

/// Returns a string representation for the range [first,last)
std::string to_string(int *first, int *last) {
  std::ostringstream oss;
  oss << "[ ";
  while (first != last) {
    oss << *first++ << " ";
  }
  oss << "]";
  return oss.str();
}

int main(int argc, char *argv[]) {
  {
    std::array<int, 8> Arr{1, 4, 5, 6, 8, 12, 18, 23};
    std::cout << " Search array is " << to_string(Arr.begin(), Arr.end())
              << "\n";
    //std::cout << "=========>" << Arr.end() << "<=======\n";
    std::cout << " Running binary search...\n";
    for (const auto target : Arr) {
      std::cout << " Looking for target '" << target << "'\n";
      auto *result = bsearch(Arr.begin(), Arr.end(), target);
      if (result != Arr.end()) {
        std::cout << "\t>>> Found target '" << target << "' at location ["
                  << std::distance(Arr.begin(), result) << "]\n";
      } else {
        std::cout << "\t>>> Target not found!\n";
      }
    }
  }
  std::cout << "\n";

  {
    std::array<int, 8> Arr{2, 2, 4, 4, 4, 6, 6, 6};
    std::array<int, 8> targets{1, 2, 3, 4, 5, 6, 8, 10};
    std::cout << " Search array is " << to_string(Arr.begin(), Arr.end())
              << "\n";
    std::cout << " Running lower bound...\n";
    for (const auto x : targets) {
      std::cout << " Looking for lower bound of '" << x << "'\n";
      auto *result = lbound(Arr.begin(), Arr.end(), x);
      if (result != Arr.end()) {
        std::cout << "\t>>> LB is '" << *result << "' at location ["
                  << std::distance(Arr.begin(), result) << "]\n";
      } else {
        std::cout << "\t>>> LB not found!\n";
      }
    }
  }

  return 0;
}
