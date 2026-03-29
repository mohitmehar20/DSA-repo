#include<iostream>
#include<vector>
#include<map>
using namespace std;

//code here


int main() {

    int l, r, n;
    vector<int> arr = {1 , 2 , 3 , 3 , 3 , 5 , 5, 6, 7, 7};
    // cout<<"enter size : ";
    // cin>>n;
    // cout<<"enter array of size"<<n<<" : ";
    // for (int i = 0; i < n; i++)
    // {
    //     int num;
    //     cin>>num;
    //     arr.push_back(num);
    // }
    cout<<"enter L : ";
    cin>>l;
    cout<<"enter R : ";
    cin>>r;
    
    map<int, int> mp;
    vector<int> fre;

    for (int i = l; i <= r; i++)
    {
        mp[arr[i]]++;
    }
    for(auto it: mp){
        cout<<it.second<<" ";
    }
    
    return 0;
}