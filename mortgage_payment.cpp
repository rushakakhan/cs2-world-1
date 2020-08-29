#include <iostream>
#include <cmath>
using namespace std;

/*
 * Calculates payment to pay off debt
 * 
 * PV = Present value of borrowed amount
 * i = interest rate (yearly)
 * n = number of periods
 */
double calculatePayment(double PV, float i, float n)  
{
  float r = i / 12 / 100;

  return (r * PV) / (1 - pow(1 + r, -n));
}

int main() 
{
  float i;
  int n, y;
  double PV;

  cout << "How much are you borrowing?" << endl;
  cin >> PV;
  cout << "What is the interest rate?" << endl;
  cin >> i;
  cout << "What is the amoritization in years?" << endl;
  cin >> y;

  n = y * 12;

  cout << "Your payment is: $";
  cout.precision(2);
  cout << fixed << calculatePayment(PV, i, n)
       << " per month, to pay it off in " << y << " years.";
}
