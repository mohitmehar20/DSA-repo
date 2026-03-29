#include<iostream>
using namespace std;

void printArr(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
void arrangeZeroAndOne(int *arr, int n)
{
    int left = 0;
    int right = n - 1;

    
    while (left < right)
    {
        
        if (arr[left]==0)
        {
            left++;
        }
        if (arr[right]==1)
        {
            right--;
        }    
        if (arr[left] == 1 && arr[right] == 0)
        {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {

    int arr[]={0,1,0,1,1,0,0,1,1};
    int n = 9;
    arrangeZeroAndOne(arr , n);
    printArr(arr, n);

return 0;
}