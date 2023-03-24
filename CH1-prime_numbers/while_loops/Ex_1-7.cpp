#include <iostream>
using namespace std;

bool test_if_prime(int);    // function prototype

int main()
{
    bool isprime = true;
    int how_many = 0, number_of_primes_found = 0;

    cout<<"Number of (successive) prime numbers to print: ";
    cin>>how_many;

    cout<<1<<endl;
    for (int i=3;;i++){
        isprime = test_if_prime(i);
        if (isprime == true){
            cout<<i<<endl;
            number_of_primes_found++;
        }
        // break loop if number of requested prime numbers is reached
        if (number_of_primes_found == (how_many-1))
            break;
    }
    return 0;
}

// function that returns False if integer passed is not a prime number
bool test_if_prime(int num)
{
    for (int i=2; i<=num/2; i++){
        if (num%i == 0)
            return false;
    }
}