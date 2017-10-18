#include<bits/stdc++.h>

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;

		int count_a = 0, count_b = 0;

		for(int i = 0; i< str.length(); i++)
		{
			if(str[i] == 'a')
				count_a++;
			else
				count_b++;
		}
		//vector<string> v;
		if(count_a > count_b)
		{
			for(int i = 0; i < 2*count_b ; i++)
			{
				
			if(i % 2 == 0)
				cout<<"a";
			else
				cout<<"b";
				
			}
			for(int i = 0; i < 2*(count_a - count_b) - 1; i++)
			{
				if(i %2 == 0)
					cout<<"a";
				else
					cout<<"*";

			}
		}
		else if(count_b > count_a)
		{
			for(int i = 0; i < 2*count_a ; i++)
			{
				
				if(i % 2 == 0)
					cout<<"b";
				else
					cout<<"a";
				
			}
			for(int i = 0; i < 2*(count_b - count_a) - 1 ; i++)
			{
				if(i %2 == 0)
				cout<<"b";
				else
				cout<<"*";

			}


		}
		else
		{
			for(int i = 0; i < 2*count_a ; i++)
			{
					
				if(i % 2 == 0)
					cout<<"a";
				else
					cout<<"b";
					
			}
		}

		cout<<"\n";
	}

		return 0;
}