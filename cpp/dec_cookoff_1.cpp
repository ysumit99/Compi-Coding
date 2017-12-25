#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		string str,str2,temp;
		int count_a = 0, count_b = 0;

		cin>>n;

		

		if(n == 0)
		{

			cout<<"Draw\n";
		}
		else if(n == 1)
		{
			cin>>str;
			cout<<str<<"\n";

		}
		else
		{
			cin>>temp;
			count_a++;

			str = temp;

			for (int i = 1; i < n ; ++i)
			{
				cin>>temp;

				if(temp == str)
					count_a++;
				else
				{	
					str2 = temp;
					count_b++;
				}
			}
			if(count_a > count_b)
				cout<<str<<"\n";
			else if(count_a < count_b)
				cout<<str2<<"\n";
			else
				cout<<"Draw\n";

		}



	}
	


	return 0;
}