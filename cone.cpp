#include "cone.h"
#define PI 3.14
#include <cmath>
using namespace std;
Cone::  Cone(int x,int y, int z, float r,int h): Shape(x, y,z),radius(r), height(h) {};
string Cone:: get_type() const{
string type="cone";
return type;
}
int Cone:: volume() const{
return (PI*pow(radius,2.0)*height)/3;
}
void Cone:: scale(int factor){
height*=factor;
radius*=factor;
}
