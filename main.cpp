#include "Math/StaticMath.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{
    double a = 10;
    double b = 2;

    cout << "a + b = " << StaticMath::add(a, b) << endl;
    cout << "a - b = " << StaticMath::sub(a, b) << endl;
    cout << "a * b = " << StaticMath::mul(a, b) << endl;
    cout << "a / b = " << StaticMath::div(a, b) << endl;

    StaticMath sm;
    sm.print();

    system("read var1");
    return 0;
}
