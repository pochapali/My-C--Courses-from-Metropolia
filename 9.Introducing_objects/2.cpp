#include <iostream>

#include <string>

using namespace std;

 
class AskAndPrint{
    public:
    string text;
    AskAndPrint();
    void DoYourThing(string charstring);
};
AskAndPrint::AskAndPrint(){

}
void AskAndPrint::DoYourThing(string charstring){
    cout << charstring;
    getline(cin,text);
	cout<<text;
   
}


 
int main (void)

{  

   char charstring[] = "Write the text for printing:";

   AskAndPrint thing;

   thing.DoYourThing(charstring);

}