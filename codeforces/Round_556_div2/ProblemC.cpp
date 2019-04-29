//https://codeforces.com/contest/1150/problem/C
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

	int n, ele;

	cin >> n;
	int count_1 = 0, count_2 = 0;



	for (int i = 0; i < n; ++i)
	{
		cin >> ele;
		if(ele == 1)
			count_1++;
		else
			count_2++;
	}

		if(count_1 == 0)
		{
			for (int j = 0; j < count_2; ++j)
			{
				cout << "2 ";
			}
		}
		else if(count_1 == 1)
		{
			if(count_2 > 0)
				{
					cout << "2 1 ";

					for (int j = 0; j < count_2 - 1; ++j)
					{
						cout << "2 ";
					}
				}
			else
				cout << "1 ";

			
		}
		else if(count_1 == 2)
		{
			if(count_2 == 0)
			{
				cout << "1 1";
			}
			else if(count_2 == 1)
			{
				cout << "2 1 1";
			}
			else if(count_2 == 2)
			{
				cout << "2 1 2 1";
			}
			else if(count_2 > 2)
			{
				cout << "2 1 2 ";

				for (int j = 0; j < count_2 - 2; ++j)
				{
					cout << "2 ";
				}
				cout << "1";
			}
		}

		else if(count_1 == 3)
		{
			cout << "1 1 1 ";

			for (int j = 0; j < count_2; ++j)
			{
				cout << "2 ";
			}
		}
		else if(count_1 > 3)
		{
			cout << "1 1 1 ";

			for (int j = 0; j < count_2; ++j)
			{
				cout << "2 ";
			}

			for (int j = 0; j < count_1 - 3; ++j)
			{
				cout << "1 "; 
			}
		}
	
	
	return 0;
}



