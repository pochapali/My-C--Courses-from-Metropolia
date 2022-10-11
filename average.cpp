#include <iostream>
using namespace std;

int main(){
	int grade;
	double average=0;
	int count=0;
	cout<<"Program calculates the test grade average."<<endl<<
	"Finish inputting with a negative number."<<endl;
	do{
		cout<<"Input grade (4-10) "; //
		cin>>grade; //5 4 1
		if(grade>=4 && grade<=10){
			count+=1; //5 4 2
			average=(average*(count-1)+grade)/count; 
		}
	}while(grade>0);
	cout<<"You inputted "<<count<<" grades."<<endl<<
	"Grade average: "<<average<<endl;
    cin>>grade;
}