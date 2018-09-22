//http://codeforces.com/contest/1047/problem/A
#include<bits/stdc++.h>

using namespace std;



int main()
{

	unsigned long long int n;

	cin >> n;

	if(n % 3 == 0 || n % 3 == 1)
		cout << n-2 << " 1 1";
	else 
		cout << n-3 << " 1 2";


    return 0;
}