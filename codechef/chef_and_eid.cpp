#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin >> t;

	while(t--)
	{
		int n;

		cin >> n;

		std::vector<int> v(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}


		sort(v.begin(), v.end());


		int min = 10000000, temp;

		for (int i = 1; i < n; ++i)
		{
			temp = v[i] - v[i-1];

			if(temp < min)
				min = temp;

		}

		cout << min << endl;
	}
	return 0;
}