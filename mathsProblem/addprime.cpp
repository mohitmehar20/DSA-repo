#include<iostream>
using namespace std;

bool isprime(int n){
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
          
            return false;
        }
    }

    if(cnt == 2) {
        return true;
    }
    else {
        return false;
    }
}


int main() {

    int x , y ;
    cin>>x>>y;
    int cnt = 0;
    int product = 1;

    for(int i = 1; cnt<=max(x, y); i++){
        if(isprime(i)){
            cnt++;

            if(cnt == x || cnt == y){
                product = product*i;
            }
        }
    }

    cout<<endl<<product;

return 0;
}