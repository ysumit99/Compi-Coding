//https://www.codechef.com/NOV18B/problems/CHHAPPY
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	int t,n,temp1,temp2,flag ;



	cin >> t;

	while(t--)
	{
		cin >> n;

		std::vector<int> v(n+1);

		flag = 0;

		for (int i = 1; i <= n; ++i)
		{
			cin >> v[i];
		}


		for (int i = 1; i <= n; ++i)
		{
			if(flag == 1)
				break;
			for (int j = 1; j <= n; ++j)
			{
				if(i == j)
					continue;

				temp1 = v[v[i]];
				temp2 = v[v[j]];

				if(temp1 == temp2 )
				{
					if(v[i] != v[j])
					{
						flag = 1;
						break;
					}
				}
			}
		}

		if(flag == 1)
			cout << "Truly Happy" << endl;
		else
			cout << "Poor Chef" << endl;
	}


	return 0;
}