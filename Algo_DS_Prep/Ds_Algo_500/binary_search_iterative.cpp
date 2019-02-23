#include<bits/stdc++.h>

using namespace std;


int BinarySearch(int A[], int n, int target)
{
	int index = 0, low = 0, high = n-1, mid;

	while(low <= high)
	{
		mid = (low + high)/2;

		if(target == A[mid])
			return mid;

		else if(target < A[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}


 

	return -1;
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