//https://www.hackerrank.com/contests/moodys-analytics-2018-university-codesprint/challenges/gap-up-down
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	int count_up = 0, count_low = 0;

	cin>>n;

	std::vector<int> low(n), high(n), close(n);

	for (int i = 0; i < n; ++i)
		cin>>low[i];

	
	for (int i = 0; i < n; ++i)
		cin>>high[i];

	for (int i = 0; i < n; ++i)
		cin>>close[i];


	for (int i = 1; i < n; ++i)
	{
		if(low[i] > close[i-1])
			count_up++;

		if(high[i] < close[i-1])
			count_low++;
	}

	cout<<count_up<<" "<<count_low;


	return 0;
}