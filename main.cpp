#include "cmathstud.h"
#include "cquadratic.h"
#include <iostream>
using namespace std;

int main()
{
  CMathStud stud1(1, 2);
  CMathStud stud2(3, 4, 5);

  //evaluation
  cout << endl;
  cout << "Stud1 Eval: " << stud1.getMyValue(3.14159) << endl;
  cout << "Stud2 Eval: " << stud2.getMyValue(3.14159) << endl;

  return 0;
} //end of main
