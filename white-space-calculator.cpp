#include <iostream>
using namespace std;

int main() {
  double perimeter;
  
  cout << "Please enter a perimeter : ";
  cin >> perimeter;
  
  double areaOfSquare = perimeter * perimeter;
  double areaOfCircle = 3.1415 * ((perimeter/2) * (perimeter/2));

  cout << "Area of Square is " << areaOfSquare << endl;
  cout << "Area of Circle is " << areaOfCircle << endl;
  cout << "And the area of White space is " << areaOfSquare - areaOfCircle;

  return 0;
}

