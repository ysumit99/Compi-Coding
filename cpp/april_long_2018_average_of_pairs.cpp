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
		cin>>n;

		std::vector<int> v;
		//int arr[1001] = {0};


		int ele;

		for (int i = 0; i < n; ++i)
		{
			cin>>ele;
			v.push_back(ele);

			//arr[ele] = 1;
		}
		int count = 0;
		int temp;

		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				temp = v[i] + v[j];

				if(temp % 2 != 0)
					continue;
				
				for (int k = 0; k < n; ++k)
				{
					if(v[k] == temp/2)
					{
						count++;
						break;
					}
				}
			}
		}

		cout<<count<<"\n";

	}

	return 0;
}