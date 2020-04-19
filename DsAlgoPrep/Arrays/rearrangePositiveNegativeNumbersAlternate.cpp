/**
 * Given an array: [2, -2, 3, -5, -6, -6, 1]
 * Print rearranged array : [2, -2, 3, -5, 1, -6, -6] i.e. Alternate positives and negatives
 * 
 **/
#include<bits/stdc++.h>
using namespace std;

int separatePositivesAndNegatives(int arr[], int size){
    int negativeIndex = -1;

    for(int i = 0; i < size; i++){

        if(arr[i] < 0){
            negativeIndex++;
            swap(arr[negativeIndex], arr[i]);
        }
    }

    return negativeIndex;
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
int main(){

    int arr[] = {2, -2, 3, -5, -6, -6, 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int positiveIndex = separatePositivesAndNegatives(arr, size) + 1;
    int negativeIndex = 0;
    int i = positiveIndex;
   
    while(i < size && negativeIndex < positiveIndex && arr[negativeIndex] < 0){
        i++;
        swap(arr[negativeIndex], arr[i]);
        negativeIndex += 2;
    }
    printArray(arr, size);
    
    return 0;
}