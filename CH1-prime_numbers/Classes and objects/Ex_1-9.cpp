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
    int bound = 0;

    while (true){
        cout<<"Bound (must be greater than 3): ";
        cin>>bound;
        if (bound >= 4)
            break;
    }

    Primegenerator sequence; // object of Primegenerator class

    // outer loop to get even numbers up to <bound>
    for (int i = 4; i <= bound; i+=2){
        cout<<"For even number "<<i<<":"<<endl;
        // get all prime numbers from 4 to <i>
        while (sequence.number_of_primes_found() < i){
            int number = sequence.nextprime();
            cout<<number<<" ";
        }
        cout<<endl;
    }
    return 0;
}