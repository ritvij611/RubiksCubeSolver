#include "Cross.hpp"
#include "Cube.hpp"
#include <iostream>
using namespace std;

void Cross::solveCross(Cube &cube) {
  while (checkCross(cube)) {
    solveEdge(cube);
  }
}

int Cross::checkCross(Cube &cube) { //must check if in correct position as well
  if (!cube.cubies[1][0] && !cube.cubies[3][0] && !cube.cubies[5][0] && !cube.cubies[7][0] && cube.cubies[7][2] == 2 && cube.cubies[7][3] == 3 && cube.cubies[7][4] == 4 && cube.cubies[7][5] == 5) {
    return 0;
  }
  else
    return 1;
}
