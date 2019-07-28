#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;

	int n,m,x,k;
	string str;

	while(t--)
	{

			

			

			cin>>n>>m>>x>>k;
			cin>>str;

			int even_count = 0, odd_count = 0;

			for (int i = 0; i < str.length(); ++i)
			{
				if(str[i] == 'E')
					even_count++;
				else
					odd_count++;
			}

			int flag = 0, flag2 = 0,count = 0;
			for (int i = 1; i <= m ; ++i)
			{
				if(i % 2 == 0 && flag == 0)
				{
					if(even_count >= x)
					{
						count += x;
						even_count -= x;
					}
					else
					{
						count += even_count;
						even_count = 0;
						flag = 1;
					}
				}
				else if(i % 2 == 1 && flag2 == 0)
				{

					if(odd_count >= x)
					{
						count += x;
						odd_count -= x;
					}
					else
					{
						count += odd_count;
						odd_count = 0;
						flag2 = 1;
					}
				}
			}

			if(count >= n)
				cout<<"yes\n";
			else
				cout<<"no\n";



	}
	return 0;
}