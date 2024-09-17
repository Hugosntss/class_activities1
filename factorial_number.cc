#include <iostream>
using namespace std;

int main(){

int number;
int factorial = 1;

cout<<"What number would like to check the factorial? "<<endl;
cin>>number;

if (number < 0)
    cout<< "The factorial given is"<< (number == 1);
    
else{
    for(int i= 1; i<= number; i++)
    factorial *= i;
}
cout<<"The factorial of: "<< number << " is "<<factorial<<endl;

}