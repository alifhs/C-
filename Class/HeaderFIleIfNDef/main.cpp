#include <iostream>
#include <Shape.h>

using namespace std;

int main()
{

    Shape shape(2,3,4);
    cout << shape.dimension() << "\n";

    return 0;
}
