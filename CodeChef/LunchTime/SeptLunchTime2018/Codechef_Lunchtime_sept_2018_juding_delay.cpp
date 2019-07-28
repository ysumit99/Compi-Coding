//https://www.codechef.com/LTIME64B/problems/JDELAY#
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin >>t;

	while(t--)
	{
		int n;
		cin >> n;

		int s,j,count = 0;

		for (int i = 0; i < n; ++i)
		{
			cin >> s >> j;

			if(j-s > 5)
				count++;


		}

		cout << count << endl;
	}
	return 0;
}