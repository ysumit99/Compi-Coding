#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;

	cin>>n;

	std::vector<int> coins;
	std::vector<int> type;

	int ele, min_auth = 100001 , min_trans = 100001, min_combined = 100001;

	for (int i = 0; i < n; ++i)
	{
		cin>>ele;
		coins.push_back(ele);
	}


	for (int i = 0; i < n; ++i)
	{
		cin>>ele;
		type.push_back(ele);
	}

	for (int i = 0; i < n; ++i)
	{
		if(type[i] == 1)
		{
			if(coins[i] < min_auth)
				min_auth = coins[i];
		}
		else if(type[i] == 2)
		{
			if(coins[i] < min_trans)
				min_trans = coins[i];
		}
		else if(type[i] == 3)
		{
			if(coins[i] < min_combined)
				min_combined = coins[i];
		}
	}

	if(min_combined <= min_trans + min_auth )
		cout<<min_combined;
	else
		cout<< min_auth + min_trans;


	return 0;
}