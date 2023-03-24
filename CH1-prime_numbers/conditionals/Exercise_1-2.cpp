#include <iostream>
using namespace std;

int main()
{
    int number, divisor;
    bool is_a_divisor;

    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter a trial divisor: ";
    cin>>divisor;
    if (number % divisor == 0){
        cout<<"Indeed, "<<divisor<<" is a divisor of "
            <<number<<endl;
    } else {
        cout<<"No, "<<divisor<<" is not a divisor of "
            <<number<<endl;
    }
}