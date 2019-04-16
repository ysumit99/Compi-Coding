//https://www.codechef.com/APRIL19B/problems/MAXREM
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, flag = 0;
	long long int second = 0;
	
	cin >> n;
	std::vector<long long int> v(n);

	for (int i = 0; i < n; ++i)
		cin >> v[i];
	

	sort(v.begin(), v.end());

	for(int i = n-2; i >= 0; i--)
	{
	    if(v[i] != v[n-1])
	    {
	        second = v[i];
	        flag = 1;
	        break;
	    }
	}
	
	if(flag == 0)
	   second = v[n-1];
    
	    cout << second % v[n-1];
	


	return 0;
}