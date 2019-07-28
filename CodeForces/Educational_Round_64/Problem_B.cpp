//https://codeforces.com/contest/1156/problem/B
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

	int t, size = 0;
	int clash = 0;

	cin >> t;
	string str;

	while(t--)
	{
		clash = 0;
		cin >> str;

		size = str.length();


		for (int i = 0; i < size; ++i)
		{
			for (int j = 0; j < size; ++j)
			{
				if(i != j)
				{
					cout << "abs = " << abs(str[i] - str[j]) << endl;
					if(abs(str[i] - str[j]) == 1)
						clash++;

				}
			}
		}
		cout << clash << endl;
		if(clash > (size * (size - 1))/2)
			cout << "No answer\n";

	}
	
	return 0;
}



