#include <iostream>
using namespace std;

int main() {
  int index;

  cout << "Please enter a index of sequence : ";
  cin >> index;

  int counter = index;
  int result = 0;

  while (counter > 0) {
    result += counter;
    counter--;
  }
  
  cout << "the number of sequence is " << result;
  return 0;
}
