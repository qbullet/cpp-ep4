#include <iostream>
using namespace std;

int main() {
  int number;

  cout << "\n\n\n";
  cout << "Please enter a day : ";
  cin >> number;

  int counter = 1, total = 0, collect = 1;
  while (counter <= number) {
    total += collect;
    collect *= 2;
    counter++; 
  }
  cout << "Your total money is " << total;
  cout << "\n\n\n";

  return 0;
}

