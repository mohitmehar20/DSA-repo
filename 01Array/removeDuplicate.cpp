#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int> &nums){
    int index = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if(nums[i] != nums[index-1]){
            nums[index++] = nums[i];
        }
    }
    return index;
    
}


int main() {

    vector<int> array = {1, 1, 1, 1, 1, 2, 2, 3, 3, 4, 5, 6};
    int n = removeDuplicate(array);
    for(int i = 0; i < n; i++){
        cout<<array[i]<<" ";
    }

return 0;
}