//https://www.codechef.com/NOV18B/problems/CHHAPPY
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t,n,flag,prev1,prev2;

	cin >> t;

	while(t--)
	{
		cin >> n;

		std::vector<int> v(n+1);
		std::vector< pair<int, int> > p(n+1);


		for (int i = 1; i <= n; ++i)
		{
			cin >> v[i];
		}

		p[0].first = 0;
		p[0].second = 0;

		for (int i = 1; i <= n; ++i)
		{
			p[i].first = v[v[i]];
			p[i].second = v[i];
		}

		sort(p.begin(), p.end() );

		// for (int i = 1; i <= n ; ++i)
		// {
		// 	cout << p[i].first << " " << p[i].second << endl;
		// }
		flag = 0;

		for (int i = 1; i <= n ; ++i)
		{
		
			if(i == 1)
			{
				prev1 = p[i].first;
				prev2 = p[i].second;

				continue;

			}

			if(p[i].first == prev1)
			{
				if(p[i].second != prev2)
				{
					flag = 1;
					break;
				}
			}

			prev1 = p[i].first;
			prev2 = p[i].second;


		}

		if(flag == 1)
			cout << "Truly Happy" << endl;
		else
			cout << "Poor Chef" << endl;


	}
	
		
	
	return 0;
}