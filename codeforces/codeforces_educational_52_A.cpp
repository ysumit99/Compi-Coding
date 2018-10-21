#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;

	cin >> t;

	long long s,a,b,c,res;


	while(t--)
	{
		cin >> s >> a >> b >> c;

		res = s/c;
		res += (s/a) * b;
		cout << res << endl;
	}
	return 0;
}