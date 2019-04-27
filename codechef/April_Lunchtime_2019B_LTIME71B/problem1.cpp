//https://www.codechef.com/LTIME71B/problems/ATTND
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

	int t;

	cin >> t;

	while(t--)
		{

			int n;

			cin >> n;
			string first, last;

			std::vector< pair<string, string>> v;

			for (int i = 0; i < n; ++i)
			{
				cin >> first >> last;


				v.push_back(make_pair(first, last));
			}
			int found_duplicate = 0;

			for (int i = 0; i < v.size(); ++i)
			{
				found_duplicate = 0;
				for (int j = 0; j < v.size(); ++j)
				{
					if(i != j)
					{
						if(v[i].first == v[j].first)
						{
							found_duplicate = 1;
							break;
						}
					}
				}

				if(found_duplicate == 1)
					cout << v[i].first << " " << v[i].second << "\n";
				else
					cout << v[i].first << "\n";
			}
		}

	return 0;
}