#include <iostream>
#include <string>
using namespace std;

int main() {
  string name = "mahmood";
  int age = 23;
  double height = 5.89653545688;
  float height1 = 5.88646856348;
  cout << "Height (double): " << height << "\n";
  cout << "Height (float): " << height1 << "\n";
  cout << "Size of Height (double): " << sizeof(height) << "\n";
  cout << "Size of Height (float): " << sizeof(height1) << "\n";
 
  cout << name << " is " << age << " years old and " << height << " feet tall." << endl;

  const int minutesPerHour = 60;
cout << "There are " << minutesPerHour << " minutes in an hour." << "\n";
  return 0;
}
