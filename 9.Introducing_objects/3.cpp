#include <iostream>
using namespace std;

class Calculator
{
  public:

  int Sum(int first, int second);
};

int Calculator::Sum(int first, int second)
{
  int sum =first + second;
  return sum;
}

class Printer{
    public:
    Printer();
    void Print();
};
 Printer::Printer(){

}
void Printer::Print(){
    int first;
    int second;
    Calculator c;
    cout<<"Give a first integer: ";
    cin>>first;
    cout<<"Give a second integer: ";
    cin>>second;
    cout<<"Sum: "<<c.Sum(first,second);
    
}


// your code

int main()
{  
  Printer object;
  object.Print();
} 