//https://www.codechef.com/DEMA2019/problems/MAXSCRAB
//Accepted
#include<bits/stdc++.h>

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);
	int t,n;
	string s;

	cin >> t;
	long long int max, sum = 0;

	while(t--)
	{
		max = 0;
		sum = 0;
		cin >> n;

		cin >> s;

		int arr[8] = {0};

		for (int i = 0; i < 8; ++i)
		{
			cin >> arr[i];
		}

		int count = 0, countD = 0, countT = 0;
		for (int i = 0; i < n - 7; ++i)
		{
			 count = i;
			 countD = 0; countT = 0;
			 sum = 0;
			for (int j = 0; j < 8; ++j)
			{
				if(s[count] == 'D')
					{
						countD++;
						sum += arr[j];
					}
				else if(s[count] == 'T')
					{
						countT++;
						sum += arr[j];
					}
				else if(s[count] == '.')
				{
					sum += arr[j];
				}
				else if(s[count] == 'd')
				{
					sum += (2*arr[j]);
				}
				else if(s[count] == 't')
				{
					sum += (3*arr[j]);
				}

				count++;
			}

			while(countD > 0)
				{
					sum *= 2;
					countD--;
				}
			while(countT > 0)
			{
				sum *= 3;
				countT--;
			}

			if(sum > max)
				max = sum;
		}

		cout << max << endl;
	}
	
	return 0;
}