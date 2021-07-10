#include <iostream>
using namespace std;

int main() {
  int number1, number2, number3;

  cout << "Please enter a first number : ";
  cin >> number1;

  cout << "Please enter a second number : ";
  cin >> number2;

  cout << "Please enter a third number : ";
  cin >> number3;
  
  int count = 0;
  if (number1 == number2) {
    count++;
  }
  if (number1 == number3) {
    count++;
  }
  if (number2 == number3) {
    count++;
  }

  if (count > 0 && count != 3) {
    count++;
  }

  cout << "got " << count << " numbers is equal";

  return 0;
}

