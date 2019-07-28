//http://codeforces.com/contest/1047/problem/B
#include<bits/stdc++.h>

using namespace std;



int main()
{

	int n;
	unsigned long long int x,y;
	unsigned long long int max = 0;

	cin >> n;

for (int i = 0; i < n; ++i)
{
	cin >> x >> y;
	if(x + y > max)
		max = x + y;
	


}

cout << max;


    return 0;
}