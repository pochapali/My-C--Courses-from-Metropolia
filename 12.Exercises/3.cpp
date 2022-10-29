// bubble sort

// Make function bubbleSort using bubble sort algorithm to sort numbers given by
// user; order numbers into the ascending order. Function header and return
// clauses are given to you. Function gets unsorted table and number of elements
// as function parameters.

// Bubble Sort is the simplest sorting algorithm that works by repeatedly
// swapping the adjacent elements if they are in wrong order.

// https://en.wikipedia.org/wiki/Bubble_sort

#include <iostream>

using namespace std;

int *bubblesort(int a[], int n) {

  for (int x = 0; x <= n - 1; x++) {
    bool good = true;
    for (int i = 0; i < (n - x); i++) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
        good = false;
      }
    }
    if (good) {
      break;
    }
  }

  return a;
}

int main() {
  int number;
  cout << "Please Enter the Total Number of Elements : ";
  cin >> number;
  int list[number];
  for (int i = 0; i < number; i++) {
    int value;
    cout << "Please enter the " << i + 1 << " Element:";
    cin >> value;
    list[i] = value;
  }
  int *sorted = bubblesort(list, number);
  cout << "The Sorted List in Ascending Order: [";
  for (int i = 0; i < number - 1; i++) {
    cout << sorted[i] << ", ";
  }
  cout << sorted[number - 1] << "]" << endl;
  return 0;
}
