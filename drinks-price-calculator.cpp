#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Please enter a amount of Cola : ";
  cin >> number;
  int cola = number * 12;

  cout << "Please enter a amount of Lemon Soda : ";
  cin >> number;
  int lemonSoda = number * 10;

  cout << "Please enter a amount of Orange Soda : ";
  cin >> number;
  int orangeSoda = number * 14;

  cout << "Price of all drinks is " << cola + lemonSoda + orangeSoda;

  return 0;
}
