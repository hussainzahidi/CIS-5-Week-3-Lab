#include <iostream>
#include <string>

// Lab 3 — Hussain Zahidi
// CIS 5 Week 03 · Types & variables

int main() {
	using std::cin;
	using std::cout;
	using std::string;
	using std::endl;

  const int CURRENT_YEAR = 2026;
  string first_name = "Hussain";
  int age = 26;
  double height = 1.75; // in meters
  char first_initial = 'H';
  bool isStudent = true;


  cout << "=== About me ===" << endl;
  cout << "The year is: " << CURRENT_YEAR << endl;
  cout << "Name: " << first_name << endl;
  cout << "Age: " << age << endl;
  cout << "Height: " << height << " meters" << endl;
  cout << "First initial: " << first_initial << endl;
  cout << "Student: " << isStudent << endl;
  return 0;
}
