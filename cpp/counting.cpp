#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	long int n;

	scanf("%ld",&n);

	long int result;

	//due to straight rectangles
	long int temp;

	temp = (n+1)*(n+1);

	temp *= (n*n);

	temp /= 4;
	 





	//due to obligue rectangles


	long int temp2;

	temp2 = pow(n-1,3);

	result = temp + temp2;

	printf("%ld",result);

	return 0;
}