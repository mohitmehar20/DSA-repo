#include<iostream>
using namespace std;

void printPrimeFact(int n){
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0){
            cout<<i<<" ";
            while (n%i==0)
            {
                n = n/i;
            }
        }
    }
    if(n!=1){
        cout<<n;
    }
    
}


int main() {

    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    printPrimeFact(n);

return 0;
}