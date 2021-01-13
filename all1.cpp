#include <vector>
#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;


class Shape
{
protected:
	int x;
	int y;
	int z;
public:
	Shape(int _x, int _y, int _z);
	virtual string get_type() const=0;
	void move(int dx, int dy, int dz);
	virtual void scale(int factor) = 0;
	virtual int volume() const = 0;
	friend std::ostream& operator<<(std::ostream& out, const Shape* shape);
};
Shape::Shape(int init_x, int init_y, int init_z) : x(init_x), y(init_y), z(init_z) {}


void Shape::move(int dx, int dy, int dz)
{
    x += dx;
    y += dy;
    z += dz;
}
  std::ostream& operator<<(std::ostream& out, const Shape* shape){
  out<< "type: ";
  out<< "<" << shape->get_type() << ">" << ", ";
  out<< "center: " <<"("<<"<"<<shape->x<<">, "<<"<"<<shape->y<<">, "<<"<"<<shape->z<<">"<<")"<<", ";
  out<<"volume: "<<"<"<<shape->volume()<<">";
  return out;
}

class Sphere : public Shape{
private:
  float radius;
public:
  Sphere(int x,int y, int z, float r): Shape(x, y,z),radius(r) {};
  virtual string get_type() const;
  virtual  int volume() const;
  virtual  void scale(int factor);
};

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

class Cuboid: public Shape{
private:
  int width;
  int height;
  int depth;
public:
  Cuboid(int x,int y, int z, int w, int h, int d): Shape(x, y,z),width(w), height(h), depth(d) {};
  string get_type() const;
    int volume() const;
    void scale(int factor);
};
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
class Cone : public Shape{
private:
  string type="cone";
  float radius;
  int height;
public:
  Cone(int x,int y, int z, float r,int h): Shape(x, y,z),radius(r), height(h) {};
  string get_type() const;
  int volume() const;
    void scale(int factor);
};
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



int main()
{
    vector<Shape*> shapes;
    shapes.push_back(new Sphere(10, 10, 10, 2));
    shapes.push_back(new Cuboid(10, 10, 10, 1, 2, 3));
    shapes.push_back(new Cone(10, 10, 10, 2, 5));

    for (int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;

    for (int i = 0; i < shapes.size(); ++i) {
        shapes[i]->move(-5, -10, 0);
        shapes[i]->scale(2);
    }

    for (int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;
}
