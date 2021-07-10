#include <iostream>
using namespace std;

int main() {
  char menu;
  do {
    cout << "\n---- Calculator ----\n";
    cout << "(1) Addition(+)\n(2) Subtraction(-)\n(3) Multiple(*)\n(4) Divide(/)\n(0) Exit\n";
    cout << "--------------------\n";
    cout << "Enter menu : ";
    cin >> menu;

    int number1, number2, summary = 0;
    
    if (menu == '1') {
      cout << "Enter first number : ";
      cin >> number1;
      cout << "Enter second number : ";
      cin >> number2;
      summary = number1 + number2;
      cout << "summary of " << number1 << " + " << number2 << " is " << summary << endl;
    } else if (menu == '2') {
      cout << "Enter first number : ";
      cin >> number1;
      cout << "Enter second number : ";
      cin >> number2;
      summary = number1 - number2;
      cout << "summary of " << number1 << " - " << number2 << " is " << summary << endl;
    } else if (menu == '3') {
      cout << "Enter first number : ";
      cin >> number1;
      cout << "Enter second number : ";
      cin >> number2;
      summary = number1 * number2;
      cout << "summary of " << number1 << " * " << number2 << " is " << summary << endl;
    } else if (menu == '4') {
      cout << "Enter first number : ";
      cin >> number1;
      cout << "Enter second number : ";
      cin >> number2;
      summary = number1 / number2;
      cout << "summary of " << number1 << " / " << number2 << " is " << summary << endl;
    } else if (menu == '0') {
      cout << "Exitting...";
    } else {
      cout << "Wrong menu please try again!\n";
    }
  } while (menu != '0');

  return 0;
}

