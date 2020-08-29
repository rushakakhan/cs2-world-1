#include <iostream>
#include <cmath>
using namespace std;

/*
 * Calculates monthly payment required to pay off debt
 * in specified number of years with specified interst
 * rate.
 * 
 * PV = Present value owing
 * i = interest rate (yearly)
 * y = number of years to pay off debt
 */
double monthlyPayment(double PV, float i, float y)  
{
  float r = i / 12 / 100; // interest rate per period
  float n = y * 12; // number of periods

  return (r * PV) / (1 - pow(1 + r, -n));
}

int main() 
{
  float i;
  float y;
  double PV;

  cout << "How much are you borrowing?" << endl;
  cin >> PV;
  cout << "What is the interest rate?" << endl;
  cin >> i;
  cout << "What is the amoritization in years?" << endl;
  cin >> y;

  cout << "Your monthly payment is: $";
  cout.precision(2);
  cout << fixed << monthlyPayment(PV, i, y)
       << " to pay it off in " << (int)y << " years.";
}
