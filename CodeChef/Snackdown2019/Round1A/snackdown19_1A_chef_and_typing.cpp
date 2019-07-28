//https://www.codechef.com/SNCK1A19/problems/TYPING
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);



	int t, n, takes_half, time ,group, new_group;
	cin >> t;

	string str;



	while(t--)
	{
		
		time = 0;
		cin >> n;

		std::vector<string> v;

		for (int i = 0; i < n; ++i)
		{
			takes_half = 0;
				
				cin >> str;

			if (std::find(v.begin(), v.end(), str) != v.end())
				takes_half = 1;
			v.push_back(str);

			if(takes_half == 1)
				time += 1;
			else
				time += 2;

			if(str[0] == 'd' || str[0] == 'f')
				group = 0;
			else
				group = 1;

			//group = 0 for d,f and group = 1 for j, k
			for (int j = 1; j < str.length(); ++j)
			{
				if(str[j] == 'd' || str[j] == 'f')
					new_group = 0;
				else
					new_group = 1;

				if(takes_half == 1)
				{
					if(new_group == group)
						time += 2;
					else
						time += 1;
				}
				else
				{
					if(new_group == group)
						time += 4;
					else
						time += 2;
				}

				group = new_group;
				
			}
		}
		

		cout << time << endl; 

	}
	return 0;
}