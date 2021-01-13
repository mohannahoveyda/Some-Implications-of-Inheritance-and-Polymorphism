#ifndef __SPHERE_H__
#define __SPHERE_H__
#include "shape.h"
using namespace std;
class Sphere : public Shape{
private:
  float radius;
public:
  Sphere(int x,int y, int z, float r);
  virtual string get_type() const;
  virtual  int volume() const;
  virtual  void scale(int factor);
};

#endif
