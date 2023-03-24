#include <iostream>
using namespace std;

bool isprime(int num){
    for (int i = 2; i <= num/2; i++){
        if (num%i == 0)
            return false;
    }
}

class Primegenerator{
    private:
        bool prime_test = true;
        int found_prime_numbers = 0, previous_prime_number = 0;
    public:
        int nextprime(){
            for (int i = previous_prime_number; ; i++){
                prime_test = isprime(i);
                // break loop and return <iterator> if it is a prime number
                if (prime_test == true){
                    found_prime_numbers++;
                    previous_prime_number = i+1;
                    return i;
                }
            }
        }
        int number_of_primes_found(){ return found_prime_numbers; }
};

int main(){
    int nprimes = 0;

    cout<<"Input: ";
    cin>>nprimes;

    Primegenerator sequence; // object of Primegenerator class

    while (sequence.number_of_primes_found() < nprimes){
        int number = sequence.nextprime();
        cout<<"Number "<<number<<" is prime"<<endl;
    }
    return 0;
}