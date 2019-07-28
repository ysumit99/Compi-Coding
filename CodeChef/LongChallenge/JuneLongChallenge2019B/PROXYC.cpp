//https://www.codechef.com/JUNE19B/problems/PROXYC
//Accepted

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

	int t;

	cin >> t;

	int n, expected_present, present_count, possible_proxy;
	string str;


	while(t--)
	{
		possible_proxy = 0;
		present_count = 0;
		cin >> n >> str;

		cout << "n = " << n << "str = " << str << endl;

		

		if(n*3 % 4 == 0)
			expected_present = n*3/4;
		else
			expected_present = n*3/4 + 1;
		cout << "expected_present = " << expected_present << " ";


		for (int i = 0; i < n; ++i)
		{
			if(str[i] == 'P')
				present_count++;

			if(i == 0 || i == n-1)
				continue;
			else if(i == 1) 
			{
				if(str[i-1] == 'P' && (str[i+1] == 'P' || str[i+2] == 'P'))
					{
						if(str[i] != 'P')
							possible_proxy++;

					}
			}
			else if(i == n-2)
			{
				if((str[i-1] == 'P' || str[i-2] == 'P') && str[i+1] == 'P')
					{
						if(str[i] != 'P')
							possible_proxy++;

					}
			}
			else
			{
				if((str[i-1] == 'P' || str[i-2] == 'P') && (str[i+1] == 'P' || str[i+2] == 'P'))
					{
						if(str[i] != 'P')
							possible_proxy++;

					}
			}



		}

		cout << "present_count = " << present_count << " possible_proxy = " << possible_proxy << endl; 

		if(present_count + possible_proxy >= expected_present)
			cout << expected_present - present_count << "\n";
		else
			cout << "-1\n";




	}

	return 0;
}