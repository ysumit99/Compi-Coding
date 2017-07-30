//https://www.codechef.com/problems/LOSTMAX
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	while(t--)
	{

		int ele;
		std::vector<int> v;

		char space;
		if(t!=0)
			{
				do{
			scanf("%d%c",&ele,&space);

			v.push_back(ele);
		}while(space != '\n');

	}
	else
	{
		while (std::cin >> ele)
		{
		    v.push_back(ele);
		}

		
	}

		int count  = v.size();
		count--;

		sort(v.rbegin(),v.rend());

		if(v[0] != count)
			cout<<v[0]<<endl;
		else
		{
			cout<<v[1]<<endl;
		}

		

	}
	return 0;
}