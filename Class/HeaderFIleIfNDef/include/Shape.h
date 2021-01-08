#ifndef SHAPE_H
#define SHAPE_H


class Shape
{

    public:
        Shape(int , int , int );
        ~Shape();

    protected:

    public:
        int width;
        int height;
        int depth;

        int dimension();
};

#endif // SHAPE_H
