#include <iostream>
#include <vector>

using namespace std;
class Employee {
private:
  int id;
  string name;

public:
  Employee(int new_id, string new_name);
  void getEmployee();
};
Employee::Employee(int new_id, string new_name) {
  id = new_id;
  name = new_name;
};
void Employee::getEmployee() {
  cout << "Id: " << id << " Name: " << name << endl;
};

int main() {
  vector<Employee> empl;
  string name;
  int id = 1;
  do {

    cout << "Please enter employee name (0 to quit):";
    getline(cin, name);
    if (name != "0") {
      Employee employee(id, name);
      empl.insert(empl.end(), employee);
      id += 1;
    }
  } while (name != "0");
  for (auto employed : empl) {
    // cout << "hello";
    employed.getEmployee();
  }
}
