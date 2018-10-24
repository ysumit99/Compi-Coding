//https://www.codechef.com/COOK99B/problems/ADASTAIR
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,k,prev,ele,res;

	cin >> t;

	while(t--)
	{
		res = 0;
		cin >> n >> k;

		std::vector<int> v(n+1);
		v[0] = 0;

		for (int i = 0; i < n; ++i)
		{
			/* code */
			cin >> v[i+1];
		}

		res = 0;
		
		for (int i = 0; i < n; ++i)
		{
			if((v[i+1] - v[i]) > k)
				if((v[i+1] - v[i]) % k == 0)
					res += (v[i+1] - v[i])/k - 1;
				else
					res += (v[i+1] - v[i])/k;
			
		}

		cout << res << endl;
	}
	return 0;
}