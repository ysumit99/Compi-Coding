/**
 *  Time Complexity: O(n * d)
 *  Space Complexity: O(1) 
 **/

#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void rotateByOne(int arr[], int n){
    int temp = arr[0], i;
    for(i = 0; i < n - 1; i++){
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}
void leftRotate(int arr[], int rotateBy, int n){

    for(int i = 0; i < rotateBy ; i++){
        rotateByOne(arr, n);
    }
}

int main(){


    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int rotateBy = 1;
    
   
    leftRotate(arr, rotateBy, n);
    printArray(arr, n);
    return 0;
}