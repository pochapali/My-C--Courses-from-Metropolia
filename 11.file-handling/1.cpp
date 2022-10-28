#include <fstream>
#include <iostream>

using namespace std;

int main() {
  int sum = 0;
  int num;
  ifstream read("numbers.txt");
  if (read.is_open()) {
    while (read >> num) {
      sum += num;
    }
    cout << "Sum is " << sum;
  } else {
    cout << "Failed to open file!" << endl;
    exit(-1);
  }
}