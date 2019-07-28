//Incomplete
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	
	int n,m;

	cin >> n >> m;

	ll matrix1[n][m], matrix2[n][m];
	int err1[n][m] = {0}, err2[n][m] = {0};

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> matrix1[i][j];
			if(i != 0)
			{
				if(matrix1[i][j] <= matrix1[i-1][j])
					err1[i][j] = 23;
			}
			if(j != 0)
			{

				if(matrix1[i][j] <= matrix1[i][j-1])
					err1[i][j] = 23;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> matrix2[i][j];
			if(i != 0)
			{
				if(matrix2[i][j] <= matrix2[i-1][j])
					err2[i][j] = 23;
			}
			if(j != 0)
			{

				if(matrix2[i][j] <= matrix2[i][j-1])
					err1[i][j] = 23;
			}
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(err1[i][j] == 23 || err2[i][j] == 23)
			{

			}
		}
	}

	return 0;
}



