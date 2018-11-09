//https://www.codechef.com/NOV18B/problems/HMAPPY1
#include<bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,q,k,max,curr_max,prev,is_one = 0;
	string str;


	cin >> n >> q >> k;

	std::vector<int> v(n);

	for (int i = 0; i < n; ++i)
	{
		/* code */

		cin >> v[i];
		if(v[i] == 1)
			is_one = 1;
	}

	cin >> str;

	if(n == 1)
	{


		for (int i = 0; i < str.length(); ++i)
			{
				/* code */

				if(str[i] == '?')
				{
					if(v[0] == 0)
						cout << "0\n";
					else
						cout << "1\n";

				}	
			}

	}
	else
	{

	for (int i = 0; i < str.length(); ++i)
	{
		/* code */

		if(str[i] == '!')
			std::rotate(v.begin(), v.begin()+n-1, v.end()); 
		else
		{

			//cout << "testing" << endl;

				// for (int l = 0; l <  n; ++l)
				// {
				// 	cout << v[l] << " " ;
				// }
				// cout << endl;

			//cout << "end of testing" << endl;
			max = 1;
			curr_max = 1;
			prev = v[0];

			for (int j = 1; j < n; ++j)
			{
				if(v[j] == prev && prev == 1)
				{
					curr_max++;
					if(curr_max > max)
					{
						if(curr_max <= k)
							max = curr_max;
						else
							max = k;
					}
				}
				else
					curr_max = 1;
				//cout << "curr_max = " << curr_max << endl;

				prev = v[j];
			}
			if(is_one == 1)
				cout << max << endl;
			else
				cout << "0\n";
		}
	}

	}

	return 0;
}