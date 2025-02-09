#include<iostream>
using namespace std;

void checkPrime(int n){
    int cnt = 0;

    for(int i = 1 ; i*i <= n ; i++){
        if (n%i == 0)
        {
            cnt++;
            if(n/i != i){
                cnt++;
            }
        }
        if(cnt>2){
            cout<<"Not prime";
            return;
        }
    }

    if(cnt == 2) {
        cout<<"prime";
    }
    else {
        cout<<"not prime";
    }
}


int main() {

    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    checkPrime(n);

return 0;
}