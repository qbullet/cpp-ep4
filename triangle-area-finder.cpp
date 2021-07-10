#include <iostream>
using namespace std;

int main() {
  double base, height;

  cout << "Please enter a base of triangle : ";
  cin >> base;
  cout << "Please enter a height of triangle : ";
  cin >> height;
  cout << "This area of triangle is " << (base * height) / 2;

  return 0;
}

