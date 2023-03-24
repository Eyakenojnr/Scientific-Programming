#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int r = 0;
    bool isPrime = true;

    // Get input and ensure it's a positive number
    while (true){
        cout<<"Enter number to check primenes: ";
        cin>>r;
        if (r <= 0){
            cout<<"Invalid number entered!"<<endl;
            continue;
        } else if (r >= 1)
            break;
    }

    // test for primeness
    for (int i=2; i*i<=r; ++i){
        if (r%i == 0){
            isPrime = false;
            break;
        }
    }

    if (isPrime == true)
        cout<<"Number is prime."<<endl;
    else {
        int x = 0, y = 0;

        cout<<"Number is not prime."<<endl;
        for (int i=2; i<=sqrt(r); ++i){
            x = i;
            if (x*(i+1) == r){
                y = (i+1);
                break;
            }
        }
        cout<<r<<" = "<<x<<" x "<<y<<endl;
    }
    return 0;
}