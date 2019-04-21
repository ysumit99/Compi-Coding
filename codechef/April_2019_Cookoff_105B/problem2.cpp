//https://www.codechef.com/COOK105B/problems/HUNGALGO
//Accepted
#include<bits/stdc++.h>

using namespace std;

int main()
{

	ios_base :: sync_with_stdio(false);
	cin.tie (0);
	
	int t, n, ele, res;

	cin >> t;

	while(t--)
	{
		cin >> n;
		res = 0;


		int row[n + 1] = {0};
		int col[n + 1] = {0};

		for (int i = 1; i <= n; ++i)
		{
			for (int j = 1; j <= n; ++j)
			{
				cin >> ele;
				if(ele == 0)
				{
					if(row[i] == 0)
					{
						row[i] = 1;
						res++;
					}

					if(col[j] == 0)
					{
						col[j] = 1;
						res++;
					}
				}
			}
		}

		if(res == 2*n)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
	