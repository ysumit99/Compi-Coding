#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,flag,prev;

	cin >> t;

	while(t--)
	{
		flag = 0;
		cin >> n;

		int count[100001] = {0};
		int index[100001][20] = {0};

		std::vector<int> v(n+1);

		for (int i = 1; i <= n; ++i)
		{
			cin >> v[i];

			
			index[v[i]][count[v[i]]] = i;
			count[v[i]]++;
		}

		for (int i = 1; i <= n ; ++i)
		{
			if(flag == 1)
				break;
			if(count[v[i]] < 2)
				continue;
			//temp = 0;
			prev = 0;
			for (int j = 0; j < 20 ; ++j)
			{
				if(index[i][j] == 0)
					break;
				if(count[index[i][j]] >= 1)
				{
					if(j == 0)
					{
						prev = v[index[i][j]];
					}

					if(v[index[i][j]] != prev)
					{
						flag = 1;
						break;
					}

					prev = v[index[i][j]];
					cout << "prev = " << prev << endl;
					
				}
			}

		}

		// for (int i = 1; i < n; ++i)
		// {
		// 	cout << "count " << i << " = " << count[i] << endl; 
		// }

		// for (int i = 1; i <= n; ++i)
		// {
		// 	for (int j = 0; j < 20; ++j)
		// 	{
		// 		cout << "index[" << i <<"][" << j << "] = " << index[i][j];
		// 	}
		// 	cout << endl;
		// }

		if(flag == 1)
			cout << "Truly Happy" << endl;
		else
			cout << "Poor Chef" << endl;
	}
	return 0;
}