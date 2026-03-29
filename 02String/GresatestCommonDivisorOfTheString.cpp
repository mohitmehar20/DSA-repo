#include<iostream>
using namespace std;

int lengthOfGCD(int small, int large){
    for(int i = small; i > 0; i--){
        if(small%i == 0 && large%i == 0){
            return i;
        }
    }
    return 0;
}

string gcdOfStrings(string str1, string str2) {
    if (str1 + str2 != str2 + str1) {
    return ""; 
    }
    int gcdLength;

    if(str1.size() < str2.size()){
        gcdLength = lengthOfGCD(str1.size(), str2.size());
    } else {
        gcdLength = lengthOfGCD(str2.size(), str1.size());
    }

    return str1.substr(0, gcdLength);
}


int main() {

    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    
    string result = gcdOfStrings(str1, str2);
    
    if (result.empty()) {
        cout << "No common divisor string found." << endl;
    } else {
        cout << "Greatest Common Divisor of strings: " << result << endl;
    }     

return 0;
}