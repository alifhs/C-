#include <iostream>
#include <iomanip>

namespace x{
    int a = 3;
}
using namespace std;

int main()
{
//    cout << x::a << endl;
    cout << setprecision(3);
    double num3 = 10, num4 = 0;
    try {
        if(num4 == 0){
            throw "Division by Zero Error";
        } else {
            cout << num3/num4 << endl;
        }
    }catch(const char* exp){
        cout << exp << endl;
    }

    return 0;
}
