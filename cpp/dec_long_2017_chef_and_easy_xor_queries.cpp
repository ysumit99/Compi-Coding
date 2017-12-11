#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,q;

	std::vector<int> v;
	int j,k,l;

	cin>>n>>q;
	int ele;

	for (int i = 0; i < n; ++i)
	{
		cin>>ele;
		v.push_back(ele);
		
	}
	//std::vector<int> temp;
	int count,result;
	//int flag = 0;

	for (int i = 0; i < q; ++i)
	{
		cin>>j>>k>>l;
		count = 0;
		result = 0;

		if(j == 1)
		{
			v[k-1] = l;
		}
		else
		{
			for (int i = 0; i <= k-1; ++i)
			{
				
				
					result = result ^ v[i];
					if(result == l)
						count++;
				
				/*if(v[i] == 1)
				{	
					temp.push_back(i);
				}*/

			}
			cout<<count<<"\n";
			result = 0;
			/*if(temp.size() <= 1)
				cout<<count<<"\n";
			else
			{

				for (int i = 1; i < temp.size(); ++i)
				{
					for (int m = temp[i]; m <= k-1; ++m)
					{
						result = result ^ v[m];
						if(result == l)
							count++;
					}
				}
				cout<<count<<"\n";
			}*/
		}
		//temp.clear();
	}

	return 0;
}