#include "sphere.h"
#include <cmath>
#define PI 3.14
using namespace std;
Sphere:: Sphere(int x,int y, int z, float r): Shape(x, y,z),radius(r) {};
string Sphere:: get_type() const{
string type="sphere";
return type;
}

int Sphere:: volume() const{
return (4*PI*pow(radius,3.0))/3;

}
void Sphere:: scale(int factor){
radius*=factor;
}
