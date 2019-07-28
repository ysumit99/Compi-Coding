//Author: Sumitkumar Yadav
//Contest: Byjus Hiring
//Incomplete

#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {

#ifdef DEBUG
 	freopen("input.txt", "r", stdin);
 	freopen("output.txt", "w", stdout);
 #endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t,n,m, sx, sy,q, xi, yi, temp;

	cin >> t;

	while(t--)
	{
		cin >> n >> m;

		int arr[n][m] = {0};
		int dp[n][m] = {0};

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> arr[i][j];
				dp[i][j] = 0;
			}
		}


		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				
				temp = arr[i][j];
				cout << "temp = " << temp << endl;

				/*if(i == 1 && j == 2)
					cout << "interested in this pos: " << endl;
				else
					continue;*/
				for (int k = 0; k <= temp ; ++k)
				{
					if( ((i + k) < n) && ( ( j + (temp - k)) < m) )
					{

						cout << "case1: i = " << i << " k = " << k << " i + k = " << i + k << " j = " << j << " temp - k = " << temp - k << "j + temp - k = " << j + temp - k << endl;
						dp[i+k][j+(temp - k)]++;
					}
				}

				for (int k = 0; k <= temp ; ++k)
				{
					if( ((i - k) >= 0) && ( ( j + (temp - k)) < m) )
					{
						cout << "case2: i = " << i << " k = " << k << "i - k = " << i - k  << " j = " << j << "temp - k = " << temp - k << " j + temp - k = "  << j + temp - k << endl;
						dp[i - k][j+(temp - k)]++;
					}
				}

				for (int k = 0; k <= temp ; ++k)
				{
					if( ((i + k) < n) && ( ( j - (temp - k)) >= 0) )
					{

						cout << "case3 : i = " << i << " k = " << k << " i+ k = " << i + k << " j = " << j << " temp - k = " << temp - k  << " j - temp + k =" << j - temp + k << endl;
						dp[i+k][j - (temp - k)]++;
					}
				}

				for (int k = 0; k <= temp ; ++k)
				{
					if( ((i - k) >= 0) && ( ( j - (temp - k)) >= 0) )
					{
						cout <<  "case4 : i = " << i << " k = " << k  << "i - k = "<< i - k << "  j = " << j <<  " temp - k = "<< temp - k << " j - temp + k"  <<  j - temp + k  << endl;
						dp[i-k][j-(temp - k)]++;
					}
				}

			}
		}

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << dp[i][j] << " ";
			}

			cout << "\n";
		}

		/*cin >> sx >> sy;

		cin >> q;

		for (int i = 0; i < q; ++i)
		{
			cin >> xi >> yi;


		}*/


	}




	return 0;
}