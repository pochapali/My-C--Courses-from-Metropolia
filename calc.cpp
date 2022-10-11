#include <iostream>
using namespace std;

int main(){

int short choice, a,b;
cout<<"Choose desired calculation:"<<endl<<"1: subtraction"<<endl<<"2: addition"<<endl<<"3: multiplication"<<endl<<"4: division"<<endl<<"5: Remainder"<<endl;
cout<<"Choose a calculation:";
cin>>choice;
cout<<"Input first number:";
cin>>a;
cout<<"Input second number:";
cin>>b;
switch(choice){
    case 1:
        cout<<a<<"-"<<b<<" = "<<a-b<<endl;
    break;
    case 2:
        cout<<a<<"+"<<b<<" = "<<a+b<<endl;
    break;
    case 3:
        cout<<a<<"*"<<b<<" = "<<a*b<<endl;
    break;
    case 4:
        cout<<a<<"/"<<b<<" = "<<a/b<<endl;
    break;
    case 5:
        cout<<a<<"%"<<b<<" = "<<a%b<<endl;
    break;
}
cin.ignore();
}