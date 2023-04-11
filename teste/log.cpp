#include <iostream>
#include <string>
#include <fstream>

int main()
{
    // file pointer
    std::fstream fout;
  
    // opens an existing csv file or creates a new file.
    fout.open("tempos.csv", std::ios::out | std::ios::app);
  
    std::cout << "Enter the details of 5 students:"
         << " roll name maths phy chem bio";
     std::cout << std::endl;
  
    int i;
    long long quantidade;
    double tempo;
    
  
    // Read the input
	fout << "linear\n";
    for (i = 0; i < 5; i++) {
  
        std::cin >> quantidade
            >> tempo;
  
        // Insert the data to file
        fout << quantidade << ", "
             << tempo 
             << "\n";
    }
	fout << "\n";
}