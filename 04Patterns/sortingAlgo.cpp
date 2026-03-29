#include<iostream>
using namespace std;

void bubbleSort(int A[], int n){
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(A[j]>A[j-1])
            swap(A[j], A[j-1]);
        }
    }
}
void selectionSort(int A[], int n){
    for(int i = 0; i<n; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(A[j]<A[minIndex])
            minIndex = j;
        }
        swap(A[i], A[minIndex]);
    }
}

void insertionSort(int A[], int n){
    for(int i = 0; i<n; i++){
        int j=i;
        while(j>0 && A[j]<A[j-1]){
            swap(A[j], A[j-1]);
            j--;
        }
    }
}

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    cout<<endl;
}
int main(){
    
    int a[] = {3, 5, 2, 6, 6, 9, 10, 1};
    bubbleSort(a, 8);
    cout<<"bubble";
    print(a, 8);

    int b[] = {19, 9, 2, 37, 90, 9, 10, 1};
    insertionSort(b, 8);
    cout<<"insertion";
    print(b, 8);

    int c[] = {3, 13, 12, 36, 41, 54, 11, 21};
    selectionSort(c, 8);
    cout<<"selection";
    print(c, 8);

    return 0;
}