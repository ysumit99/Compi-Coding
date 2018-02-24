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
		string str,sub_str;
		int count_chef = 0;
		cin>>str;

		if(str.length() < 4)
			{
				cout<<"normal"<<"\n";
				continue;;
			}

		for (int i = 0; i < str.length(); ++i)
		{
			sub_str = str.substr (i,4);

			sort(sub_str.begin(),sub_str.end());
			if(sub_str == "cefh")
				count_chef++;

			
		}

		if(count_chef == 0)
			cout<<"normal"<<"\n";
		else
			cout<<"lovely "<<count_chef<<"\n";



	}
	return 0;
}