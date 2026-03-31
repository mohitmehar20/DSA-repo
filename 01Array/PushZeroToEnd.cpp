// #include<iostream>
// using namespace std;

// void pushZeroToEnd(int *arr, int n){
//     int index=0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != 0)
//         {
//             arr[index++] = arr[i];
//         }
//     }
//     for (int i = index; i < n; i++)
//     {
//         arr[i] = 0;
//     }
    
// }
// void printArr(int *arr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         cout<<" "<<arr[i];
//     }
//     cout<<endl;
// }

// int main() {

//      int arr[]={0,4,5,1,2,0,4,0,1};
//     int n = 9;
//     pushZeroToEnd(arr , n);
//     printArr(arr, n);

// return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int n, j = 0;
  cin >> n;
  int a[n] = { 0 };
  for (int i = 0; i < n; i++)
  {
    cin >> a[j];
    if (a[j] != 0)
    {
        j++;
    }
  }
  for (int i = 0; i < n; i++)
  {
      cout << a[i] << " ";
  }
}