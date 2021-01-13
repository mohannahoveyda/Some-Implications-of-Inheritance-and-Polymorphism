#ifndef __CUBOID_H__
#define __CUBOID_H__
#include "shape.h"
using namespace std;
class Cuboid: public Shape{
private:
  int width;
  int height;
  int depth;
public:
  Cuboid(int x,int y, int z, int w, int h, int d);
  string get_type() const;
    int volume() const;
    void scale(int factor);
};
#endif
