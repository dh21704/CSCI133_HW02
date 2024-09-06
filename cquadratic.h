#ifndef CQUADRATIC_H
#define CQUADRATIC_H

class CQuadratic
{
  public:
  //type constructor
  CQuadratic(double num1, double num2, double num3);

  ~CQuadratic();

  double Evaluate(double x);

  private:
  int c1;
  int c2;
  int c3;
};

#endif // CQUADRATIC_H
