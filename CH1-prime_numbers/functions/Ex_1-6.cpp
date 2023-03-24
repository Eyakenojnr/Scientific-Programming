#include <iostream>
using namespace std;

bool test_if_prime(int);

int main()
{
    bool isprime = true;
    isprime = test_if_prime(17);
    if (isprime == true)
        cout<<"Number is prime."<<endl;
    else
        cout<<"Number is not prime."<<endl;
    return 0;
}

bool test_if_prime(int num)
{
    for (int i=2; i<=num/2; i++){
        if (num%i == 0)
            return false;
    }
}