#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

void reverseArray(int arr[], int n){

    int mid = n % 2 == 1 ? n/2 : n/2 - 1; 
    for(int start = 0, end = n - 1; start <= mid; start++ , end--){
        swap(arr[start], arr[end]);
    }
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr, size);
    printArray(arr, size);

    return 0;
}