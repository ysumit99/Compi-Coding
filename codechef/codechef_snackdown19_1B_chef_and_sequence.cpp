//https://www.codechef.com/SNCK1B19/problems/CHFAR
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t,n,k,ele,count;

	cin >> t;

	while(t--)
	{
		count = 0;

		cin >> n >> k;

		for (int i = 0; i < n; ++i)
		{
			cin >> ele;

			if(ele > 1)
				count++;

		}

		if(count <= k)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}