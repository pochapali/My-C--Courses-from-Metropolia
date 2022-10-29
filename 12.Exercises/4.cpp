

// Define first classes

//     PayrollSystem, having method CalculatePayroll and getting a list of
//     employees as a parameter. Method should calculate and print payroll for
//     employees. SalaryEmployee, a subclass of Employee. SalaryEmployee has its
//     own attribute MonthlySalary and method CalculateSalary, which will return
//     the monthly salary of an employee.

// Finally make then program,

//     asking employee name as in previous Employee-exercise and also asking
//     monthly salary for SalaryEmployee-class object. creating
//     SalaryEmployee-objects and store them into a vector. ending when user
//     gives '0' instead of a name. using at the end PayrollSystem to print
//     Payroll for Employees in a format shown in the example below.

// Define first classes

//     PayrollSystem, having method CalculatePayroll and getting a list of
//     employees as a parameter. Method should calculate and print payroll for
//     employees. SalaryEmployee, a subclass of Employee. SalaryEmployee has its
//     own attribute MonthlySalary and method CalculateSalary, which will return
//     the monthly salary of an employee.

// Finally make then program,

//     asking employee name as in previous Employee-exercise and also asking
//     monthly salary for SalaryEmployee-class object. creating
//     SalaryEmployee-objects and store them into a vector. ending when user
//     gives '0' instead of a name. using at the end PayrollSystem to print
//     Payroll for Employees in a format shown in the example below.

#include <iostream>
#include <stdlib.h>
#include <vector>
using namespace std;
class Employee {

  int id;
  string name;

public:
  Employee(int new_id, string new_name) {
    id = new_id;
    name = new_name;
  };
  Employee() {}
  void getEmployee() { cout << "Id: " << id << " Name: " << name << endl; };
};
class SalaryEmployee : public Employee {
public:
  int id;
  int salary;
  string name;
  int getId() { return id; };
  int getSalary() { return salary; };
  string getName() { return name; };
  void setSalary(int new_salary) { salary = new_salary; }
  SalaryEmployee(int new_id, string new_name) {
    id = new_id;
    name = new_name;
  };
};

class PayrollSystem {

public:
  static void CalculatePayroll(vector<SalaryEmployee> employee) {
    for (auto empl : employee) {
      // cout << "hello";
      // empl.getEmployee();
      cout << "Employee Payroll" << endl
           << "================" << endl
           << "Payroll for: " << empl.getId() << " - " << empl.getName() << endl
           << "- Check amount: " << empl.getSalary() << endl
           << endl;
    }
  }
};

int main() {
  vector<SalaryEmployee> empl;
  string name;
  int id = 1;
  do {

    cout << "Please enter employee name (0 to quit): ";
    getline(cin, name);

    if (name != "0") {
      int temp = 500;
      SalaryEmployee employee(id, name);
      id += 1;
      cout << "Please enter salary: ";
      cin >> temp;
      cin.ignore();
      employee.setSalary(temp);
      empl.insert(empl.end(), employee);
    }
  } while (name != "0");
  PayrollSystem::CalculatePayroll(empl);
};