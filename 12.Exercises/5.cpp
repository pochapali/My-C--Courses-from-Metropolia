//
//  main.cpp
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> mysplit(string sentence, char sep);
string myjoin(vector<string> lst, char sep);

int main() {
  string sentence;
  cout << "Please enter sentence: ";
  getline(cin, sentence);
  cout << myjoin(mysplit(sentence, ' '), ',') << endl;
  cout << myjoin(mysplit(sentence, ' '), '\n') << endl;
  return 0;
}

vector<string> mysplit(string sentence, char sep) {
  string tempsent = "";
  vector<string> result;
  for (int i = 0; i < sentence.length(); i++) {
    if (sentence[i] != sep) {

      tempsent += sentence[i];
    } else {
      result.insert(result.end(), tempsent);
      tempsent = "";
    }
  }
  if (tempsent != "") {
    result.insert(result.end(), tempsent);
  }
  return result;
}

string myjoin(vector<string> lst, char sep) {
  string result = "";
  for (auto word : lst) {
    if (result != "") {
      result += sep;
    }
    result += word;
  }

  return result;
}
