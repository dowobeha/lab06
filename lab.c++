#include "GameBoard.h"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>


int main(int argc, char** argv) {
  
  // Store command line arguments as C++ vector of C++ strings
  auto args = std::vector<std::string>{argv, argc + argv};
  
  // Create input file stream to read data from text file
  auto in = std::ifstream(args.at(1));
  
  // Create an empty game board object
  auto data = GameBoard();

  // Attempt to read the data
  if (in >> data) {

    // Print the game board
    std::cout << data;

  } else {

    // Something went wrong
    std::cerr << "Failed to read data from " << args.at(1) << "\n";

  }

  std::cerr << "\nGame over\n";
  
  return 0;
}

