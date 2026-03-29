#include<iostream>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int candidate = 0;
    for(int i = 0 ; i<nums.size(); i++){
        if(cnt == 0){
            candidate = nums[i];                
        }
        if(nums[i] == candidate){ 
            cnt++;
        }
        else{ 
            cnt--;
        }
    }
    return candidate;
}


int main() {

    vector<int> array = {2, 3, 4, 3, 4, 3, 4, 4, 5, 4 ,3};
    cout<< majorityElement(array) ;

return 0;
}