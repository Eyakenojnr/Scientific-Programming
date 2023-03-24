#include <iostream>
using namespace std;

int main()
{
    int num = 0, divisor = 0;
    bool primeness = true;

    while (true){
        cout<<"Enter number to check primenes: ";
        cin>>num;
        if (num <= 0){
            cout<<"Invalid number!"<<endl;
            continue;
        } else if (num >= 1)
            break;
    }
    for (int i=2; i<num; i++){
        if (num % i == 0){
            primeness = false;
            divisor = i;
            break;
        }
    }
    if (primeness == true)
        cout<<"Your number is prime"<<endl;
    else if (primeness == false)
        cout<<"Your number is not prime, it is divisible by "
            <<divisor<<endl;
}