#include "Cube.hpp"
#include "Cross.hpp"
#include "Corners.hpp"
#include "Edges.hpp"
#include "OLL.hpp"
#include "PLL.hpp"
#include <iostream>
using namespace std;

std::string format(std::string);

int main(int argc, char **argv) {
    int** arr = new int*[9];
    for(int i=0; i<9; i++){
      arr[i] = new int[6];
    }
    for(int j=0; j<6; j++){
      for(int i=0; i<9; i++){
        cin >> arr[i][j];
      }
    }

    Cube myCube(arr);
    Cross::solveCross(myCube);
    std::cout << "Cross solved" << std::endl;
    Corners::solveCorners(myCube);
    std::cout << "Corners solved" << std::endl;
    Edges::solveEdges(myCube);
    std::cout << "Edges solved" << std::endl;;
    OLL::solveOLL(myCube);
    std::cout << "OLL solved" << std::endl;
    PLL::solvePLL(myCube);
    std::cout << "PLL solved" << std::endl;
  
  return 0;
}

std::string format(std::string s) {
  std::string formatted;

  for (int i=0; i<s.length(); ++i) {
    if (s[i] == '\'') {
      formatted += s[i-1];
      formatted += s[i-1];
    }
    else if (s[i] == '2') {
      formatted += s[i-1];
    }
    else if (s[i] == ' ') {

    }
    else {
      formatted += s[i];
    }
  }

  return formatted;

}
