//https://www.codechef.com/JUNE19B/problems/RSIGNS
//Accepted
#include<bits/stdc++.h>

using namespace std;

long long int modularExponent(long long int r, long long int n, long long int mod)
{
	//calculate r^n % 1000000007

	if(n == 0)
		return 1;
	else if(n % 2 == 0){
		long long int res = modularExponent(r, n/2, mod);
		return (res*res)%mod;
	} else {
		return ((r%mod)*modularExponent(r,n-1,mod))%mod;
	}



}

 int main(int argc, char const *argv[])
{

	#ifdef DEBUG
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	long long int t,k;


	cin >> t;


	while(t--)
	{
		cin >> k;

		long long  int res = modularExponent(2,k-1,1000000007);
		res *= 10;
		res %= 1000000007;

		cout << res << "\n";



	}
	
	return 0;
}