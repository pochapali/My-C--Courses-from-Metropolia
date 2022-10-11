#include <iostream>
using namespace std;

int main(){
	char a1;
	int a2;
	cout<<"Do you drink coffee or tea? (k/t) ";
	cin>>a1;
	cout<<"With how many cubes of sugar? ";
	cin>>a2;
	switch(a1){
		case 'c':if(a2>=0 && a2<=2){
		    cout<<"Coffee certainly is invigorating!";
		}else{
		    if(a2>=3){
		        cout<<"Well, coffee can taste pretty intense...";
		    }else cout<< "An error occurred in the program!";}
		
        break;
        case 't':if(a2>=0 && a2<=2){
			cout<<"Tea can have a soothing effect!";
		}else{
			if(a2>=3){
				cout<<"Guess you enjoy your tea overly sweet?";
			}
			else cout<< "An error occurred in the program!";
		}
        break;
		default:cout<< "An error occurred in the program!";
	break;
	}
}