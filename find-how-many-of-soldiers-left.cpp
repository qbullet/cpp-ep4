#include <iostream>
using namespace std;

int main() {
  int a1, a2, b1, b2;

  cout << "\n\n\n";
  cout << "Please enter a amount soldiers of each troops\n";
  cout << "\n";
  cout << "First troop in A team : ";
  cin >> a1;

  cout << "Second troop in A team : ";
  cin >> a2;

  cout << "First troop in B team : ";
  cin >> b1;

  cout << "Second troop in B team : ";
  cin >> b2;
  
  int aTeam = a1 + a2;
  int bTeam = b1 + b2;

  cout << "\n";
  if (aTeam > bTeam) {
    cout << "[A] team win this war and got " << aTeam - bTeam << " soldier(s) left\n";
  } else if (aTeam < bTeam) {
    cout << "[B] team win this war and got " << bTeam - aTeam << " soldier(s) left\n";
  } else {
    cout << "This is worthless no more soldiers left\n";
  }

  cout << "\n\n\n";

  return 0;
}

