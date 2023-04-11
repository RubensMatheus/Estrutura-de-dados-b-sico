/*!
 * This is a template code to demonstrate how to measure runtime of part of your
 * code. I'm using the chrono C++ library.
 * @date September 8th, 2020.
 * @author Selan
 */

#include <chrono>   // timing
#include <cstring>  // memset()
#include <iomanip>  // setw, setfixed
#include <iostream> // cout
#include <vector>   // vector

#include "searching.h"

/// This is the max size for our array.
constexpr int max_sz{10000000}; // 10^7

int main() {
  // Allocate the array that will become the storage area.
  int *vec = new int[max_sz];
  // Initialize the whole array with 1's.
  memset(vec, 1, max_sz);

  // The list (table) below stores the times we measure in the experiments.
  // Each entry in the list has: the sample size + the running time.
  // Sizes goes from `initial_sz` until `max_sz`.
  std::vector<std::pair<size_t, std::chrono::duration<double>>> times;

  // These variables control the sample size progression.
  constexpr size_t sample_step{20000}; // 20k
  constexpr size_t initial_sz{1000};   // 10^3
  size_t sample_sz{initial_sz};

  // Keep measuring time until we reach the maximum sample size required.
  while (sample_sz < max_sz) {
    auto start = std::chrono::steady_clock::now();
    //================================================================================
    sa::bsearch(vec, vec + sample_sz, 2); // Increase array each time we run.
    //================================================================================
    auto end = std::chrono::steady_clock::now();
    // Store current < sample size , running time >.
    times.emplace_back(sample_sz, (end - start));
    // Increase sample size as needed by the experiment.
    sample_sz += sample_step;
  }

  // Send the results (a table) to the stdout.
  // We may redirect the output to a file with the linux '>'.
  for (const auto &[sz, diff] : times) {
    std::cout << std::setw(7) << sz << " " << std::setw(5) << std::fixed
              << std::chrono::duration<double, std::milli>(diff).count()
              << '\n';
  }

  // Free the memory
  delete [] vec;


  return EXIT_SUCCESS;
}