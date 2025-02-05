#include<iostream>
using namespace std;

bool checkPrime(int n){
    int cnt = 0;
    for(int i = 0 ; i*i <= n ; i++){
        if (n%i == 0)
        {
            cnt++;
            if(n%(n/i) == 0){
                cnt++;
            }
        }
        if(cnt>2){
            return false;
        }
    }
    if(cnt == 2) return true;
    else return false;
}


int main() {

    int n;
    cout<<"Enter a Number : ";
    cin>>n;

    if(checkPrime(n)){
        cout<< "Prime";
    } else {
        cout<<"Not prime";
    }

return 0;
}