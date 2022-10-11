#include <iostream>
#include <string>
using namespace std;

// your code
class Dog {
public:
  int age;
  string name, race, voice;
  Dog(int new_age, string new_name, string new_race, string new_voice);
  void PrintInformation();
  string Bark();
  // constructor
  // method PrintInformation()
  // method Bark()
};
Dog::Dog(int new_age, string new_name, string new_race, string new_voice) {
  age = new_age;
  name = new_name;
  race = new_race;
  voice = new_voice;
}
void Dog::PrintInformation() {
  cout << "Name: " << name << endl
       << "Age: " << age << endl
       << "Race: " << race << endl;
}
string Dog::Bark() { return voice; }
int main() {
  Dog buffy(2, "Buffy", "Bulldog", "Hau!!!");
  buffy.PrintInformation();
  cout << "Dog says: " << buffy.Bark();
}
