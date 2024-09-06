#include "cquadratic.h"
#include <iostream>
#include <cmath>
using namespace std;

CQuadratic::CQuadratic(double num1, double num2, double num3)
{
  c1 = num1;
  c2 = num2;
  c3 = num3;

  std::cout << "\nCQuadratic constructor!!!\n";
};

double CQuadratic::Evaluate(double x)
{
  return (c1 * std::pow(x, 2)) + (c2 * x) + c3;
}

CQuadratic::~CQuadratic()
{
  std::cout << "\nCQuadratic destructor!!!\n";
}
