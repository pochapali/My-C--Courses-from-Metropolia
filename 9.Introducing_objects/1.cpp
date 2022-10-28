#include <iostream>

#include <string>

using namespace std;

class PrintClass {
public:
  PrintClass();
  void print(string input);
};
void PrintClass::print(string input) { cout << input; }
PrintClass::PrintClass() {}

int main()

{

  char charstring[50];

  cout << "Input a character string for printing:";

  cin.get(charstring, 50);

  PrintClass printer;

  printer.print(charstring);
}