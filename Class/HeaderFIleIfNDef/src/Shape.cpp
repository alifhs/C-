
#include "Shape.h"

#include <iostream>
using namespace std;

Shape::Shape(int width, int height, int depth)
{
    //ctor
    this->width = width;
    this->height = height;
    this->depth = depth;
}

Shape::~Shape()
{
    //dtor
    cout << "Destructor has been called \n";

}
int Shape::dimension()
{
    return width*height*depth;

}
