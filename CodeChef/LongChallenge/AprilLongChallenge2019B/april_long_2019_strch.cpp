//https://www.codechef.com/APRIL19B/problems/STRCH
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n, last_occur = -1;
	long long int res;
	char ch;
	string str;
	cin >> t;
	while(t--)
	{	last_occur = -1;
		res = 0;
		cin >> n;
		cin >> str;
		cin >> ch;

		for(int i = 0; i < n; i++)
		{

			if(str[i] == ch)
				{
					res += i + 1; last_occur = i + 1;

				}
			else
				{ 
					if(last_occur != -1)
						res += last_occur;
				}
			
				
				

		}

		cout << res << endl;
		
		
	}

	return 0;
}