//23-02-2019
#include<bits/stdc++.h>

using namespace std;


int BinarySearch(int A[], int low, int high, int target)
{
	

		if(low > high)
			return -1;



	
		int mid = (low + high)/2;

		if(target == A[mid])
			return mid;

		else if(target < A[mid])
			return BinarySearch(A, low, mid-1, target)
		else
			return BinarySearch(A, mid + 1, high, target)
	


 

	
}

int main()
{
	int A[] = { 2, 5, 6, 89, 891};
	int target = 5;

	int n = sizeof(A)/sizeof(A[0]);
	int index = BinarySearch(A, n, target);

	if(index != -1)
		cout << "Element found at index " << index;
	else
		cout << "Element not found in the array";

	return 0;
}