#include "cmathstud.h"
#include <iostream>
using namespace std;

CMathStud::CMathStud(double num1, double num2, double num3)
: QE(num1, num2, num3)
{
    std::cout << "\nCMathStud constructor!!!\n";
}

double CMathStud::getMyValue(double x)
{
    return QE.Evaluate(x);
}

CMathStud::~CMathStud()
{
    std::cout << "\nCMathStud destructor!!!\n";
}
