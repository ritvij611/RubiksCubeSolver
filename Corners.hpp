#ifndef CORNERS_H
#define CORNERS_H

#include "Cube.hpp"
#include "Cross.hpp"

class Corners {

public:
  static void solveCorners(Cube&); //solve the corners
private:
  static int checkCorners(Cube&);
  static int checkBottomLayer(Cube &cube);

};

#endif
