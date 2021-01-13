#ifndef __CONE_H__
#define __CONE_H__
#include "shape.h"
using namespace std;
class Cone : public Shape{
private:
  string type="cone";
  float radius;
  int height;
public:
  Cone(int x,int y, int z, float r,int h);
  string get_type() const;
  int volume() const;
    void scale(int factor);
};
#endif
