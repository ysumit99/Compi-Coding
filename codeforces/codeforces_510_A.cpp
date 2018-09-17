//Not Accepted Yet
//http://codeforces.com/contest/1042/problem/A
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;


	int m;

	cin >> m;

	

	std::vector<int> v(n);

	for(int i = 0; i < n; i++)
	{
		cin >> v[i];
	}

	sort(v.rbegin(), v.rend()); //Sort in descending
	int max = v[0];
	int temp = m;

	for (int i = 1; i < v.size(); ++i)
	{
		if(temp == 0)
			break;
		if(temp - v[0] + v[i] >= 0)
			{
				temp -= v[0] - v[i];
				v[i] = v[0];
			}
		else
			{
				temp = 0;
				v[i] = v[0];

			}
	}

	if(temp == 0)
		cout << v[n-1];
	else
		cout << v[0] + temp;

	cout << " " << max + m;




	return 0;
}