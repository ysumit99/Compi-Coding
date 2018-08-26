//https://www.codechef.com/problems/BFTT
#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	
	int t, n;

	cin >> t;

	while(t--)
	{
		cin >> n;


		int count_3 = 0;
		string str;

		while(count_3 < 3)
		{
			 n++;

			 str = to_string(n);
			 count_3 = count(str.begin(), str.end(), '3');

			 

			 if(count_3 < 3)
			 	continue;

			 cout << n <<endl;
 		}
		
	} 

	return 0;
}