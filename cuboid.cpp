#include "cuboid.h"
#define PI 3.14
#include <cmath>
using namespace std;
Cuboid :: Cuboid(int x,int y, int z, int w, int h, int d): Shape(x, y,z),width(w), height(h), depth(d) {};
string Cuboid:: get_type()const{
string type="cuboid";
return type;
}
int Cuboid:: volume () const{
return height*width*depth;
}
void Cuboid:: scale(int factor){
height*=factor;
width*=factor;
depth*=factor;
}
