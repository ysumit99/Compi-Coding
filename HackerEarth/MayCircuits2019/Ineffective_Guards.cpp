//https://www.hackerearth.com/challenges/competitive/may-circuits-19/algorithm/jewellery-8cc358bc/
//Incomplete

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int n,m, x,y;

	cin >> n >> m;

	std::vector< pair<int, int> > guard, jewelry;

	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		guard.push_back(make_pair(x,y));
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> x >> y;
		jewelry.push_back(make_pair(x,y));
	}


	/*for (int i = 0; i < n; ++i)
	{
		cout << guard[i].first << " " << guard[i].second << endl;
	}


	for (int i = 0; i < m; ++i)
	{
		cout << jewelry[i].first << " " << jewelry[i].second << endl;
	}
*/


	

	return 0;
}