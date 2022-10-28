#include <iostream>

using namespace std;

int main() {
  int prodnbr = 1;
  int total = 0;
  int payment;
  int prodprices[] = {10, 14, 22, 33, 44, 13, 22, 55, 66, 77};
  cout << "Supermarket" << endl << "===========" << endl;
  while (prodnbr != 0) {
    cout << "Please select product (1-10) 0 to Quit:";
    cin >> prodnbr;

    if (prodnbr < 11 && prodnbr > 0) {

      total += prodprices[prodnbr - 1];
      cout << "Product: " << prodnbr << " Price: " << prodprices[prodnbr - 1]
           << endl;
    }
    if (prodnbr > 10) {
      cout << "Please select correct product (1-10)" << endl;
    }
  }
  cout << "Total: " << total << endl;
  cout << "Payment: ";
  cin >> payment;
  cout << "Change: " << payment - total << endl;
}