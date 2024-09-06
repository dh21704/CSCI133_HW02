#include "cquadratic.h"

class CMathStud
{
  public:
  CMathStud(double num1, double num2, double num3 = 0);

  double getMyValue(double x);

  ~CMathStud();

  private:
  CQuadratic QE;
};
