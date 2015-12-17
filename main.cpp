#include <math.h>
#include <iostream>
#include <stdlib.h>
#include "config.h"
#ifdef USE_MYMATH
#include "Math/StaticMath.h"
#endif

using namespace std;

int main(int argc, char* argv[])
{
    double a = 10;
    double b = 2;
    
#ifdef USE_MYMATH
    cout << "a + b = " << StaticMath::add(a, b) << endl;
    cout << "a - b = " << StaticMath::sub(a, b) << endl;
    cout << "a * b = " << StaticMath::mul(a, b) << endl;
    cout << "a / b = " << StaticMath::div(a, b) << endl;
#else
    cout << "here " << sqrt(100) << endl;
#endif


    system("read var1");
    return 0;
}
