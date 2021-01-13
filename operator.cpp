#ifndef __OPERATOR_H__
#define __OPERATOR_H__
#include <iostream>
#include "shape.h"
std::ostream& operator<<(std::ostream& out, const Shape* shape){
out<< "type: ";
out<< "<" << shape->get_type() << ">" << ", ";
out<< "center: " <<"("<<"<"<<shape->x<<">, "<<"<"<<shape->y<<">, "<<"<"<<shape->z<<">"<<")"<<", ";
out<<"volume: "<<"<"<<shape->volume()<<">";
return out;
}
#endif
