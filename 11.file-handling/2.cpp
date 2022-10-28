#include <fstream>
#include <iostream>

using namespace std;
// Write a program that reads characters and strings from the file students.txt
// and prints them on screen. Follow the format of the example print.

// Every student's information is in it's individual row in the file. If the
// program fails to open the file, it prints “Failed to open file!” on screen.
// After this the program execution ends.

// For example, if the contents of students.txt is:

// Z Andy Arkinson

// Y Bob Bender

// , information is printed as follows:

// Andy Arkinson: class Z

// Bob Bender: class Y
int main() {
  char classLetter;
  string name;
  ifstream read("students.txt");
  if (read.is_open()) {
    // while (!read.eof()) {
    //   read.get(classLetter);
    //   read >> name;
    //   cout << name << " ";
    //   read >> name;

    //   cout << name << ": class " << classLetter << endl;
    // }
    while (!read.eof()) {
      read >> classLetter;
      read >> name;
      cout << name << " ";
      read >> name;
      cout << name << ": class " << classLetter << endl;
      read.get();
    }

  } else {
    cout << "Failed to open the file!";
  }
}