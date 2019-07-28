//https://codeforces.com/contest/1150/problem/B
//Accepted
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

	////cout << "hello world";

	
	int n;
	string str;

	cin >> n;

	int arr[n][n],count_empty = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> str;


		for (int j = 0; j < str.length(); ++j)
		{
			if(str[j] == '#')
				arr[i][j] = 1;//occupied
			else
				arr[i][j] = 0, count_empty++;//unoccupied
		}
	}

	if(count_empty % 5 != 0)
		{
			cout << "NO";
			return 0;
		}
	int flag = 0,count = 0;


	for (int i = 0; i < n; ++i)
	{
		flag = 0;
		for (int j = 0; j < n; ++j)
		{
			if(arr[i][j] != 1)
			{
				if(i + 1 > n-1)
					continue;
				else if(i - 1 < 0)
					continue;
				else if(j + 1 > n-1)
					continue;
				else if(j - 1  < 0)
					continue;

				if(arr[i+1][j] == 0 && arr[i-1][j] == 0 && arr[i][j-1] == 0 && arr[i][j+1] == 0)
				{
					count++;
					arr[i][j] = 1;
					arr[i+1][j] = 1;
					arr[i-1][j] = 1;
					arr[i][j-1] = 1;
					arr[i][j+1] = 1;
				}
			}
		}
	}

	if(count == count_empty/5)
		cout << "YES";
	else
		cout << "NO";
	
	return 0;
}



