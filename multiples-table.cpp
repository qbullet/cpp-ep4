#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "Please enter a number : ";
  cin >> number;

  cout << "Table of " << number << endl;
  int counter = 1;
  while (counter <= 12) {
    cout << number << " x " << counter << " = " << number * counter << endl;
    counter++; 
  }

  return 0;
}

