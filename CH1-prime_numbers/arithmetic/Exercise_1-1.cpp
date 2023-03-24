/*
Read two numbers and print out their modulus
*/

#include <iostream>
using namespace std;

int main()
{
    int num_1 = 0, num_2 = 0, mod = 0;
    
    // get in put
    cout<<"First number: ";
    cin>>num_1;
    cout<<"Second number: ";
    cin>>num_2;
    
    mod = num_1 % num_2; // modulus of both numbers
    cout<<"\nThe modulus is: "<<mod<<endl; // print out modulus
    
    return 0;
}
