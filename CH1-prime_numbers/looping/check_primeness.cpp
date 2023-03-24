#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    bool primeness = true;

    while (true){
        cout<<"Enter number to check primenes: ";
        cin>>num;
        if (num <= 0){
            cout<<"Invalid number entered!"<<endl;
            continue;
        } else if (num >= 1)
            break;
    }
    for (int i=2; i<num/2; i++){
        if (num % i == 0){
            primeness = false;
            break;
        }
    }
}