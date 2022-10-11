#include <iostream>
#include <numeric> 
#include <vector>
using namespace std;
int main(){
	int days;
	cout<<"The program calculates the total amount of\nwork hours during a given time frame and the average work day length.\nHow many days:\n";
	cin>>days;
	double hours[days];
	for(int i=0;i<days;i++){
		cout<<"Input hours of workday "<<i+1<<": ";
		cin>>hours[i];
	}
	vector<double> hoursD ( hours, hours + days ) ;
	cout<<"Total work hours: "<<accumulate(hoursD.begin(),hoursD.end(),0.0)<<"\n";
	cout<<"Average work day length: "<<accumulate(hoursD.begin(),hoursD.end(),0.0)/days<<"\n";
	cout<<"Inputted hours: ";
	for(int i=0;i<days;i++){
		cout<<hours[i]<<" ";
	}
	cout<<"\n";

}