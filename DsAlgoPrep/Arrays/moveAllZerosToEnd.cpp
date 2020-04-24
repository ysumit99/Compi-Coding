#include<bits/stdc++.h>
using namespace std;

void moveZerosToEnd(int arr[], int size){
    int zeroIndex = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] != 0){
            arr[zeroIndex++] = arr[i];
        }
    }

    for(int i = zeroIndex; i < size; i++){
        arr[i] = 0;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[] = {1, 2, 3, 0, 4, 0, 0, 5, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    moveZerosToEnd(arr, size);
    printArray(arr, size);

    return 0;
}