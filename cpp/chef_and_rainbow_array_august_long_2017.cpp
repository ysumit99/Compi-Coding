#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,ele;

	cin>>t;

	while(t--)
	{
		std::vector<int> v;

		scanf("%d",&n);

		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&ele);
			v.push_back(ele);
		}

		int flag = 0;
		int prev = v[0];
		int count = 1;

		//int arr[100];
		std::vector< pair< int, int> > p; // no. followed by count
		int j = 0;
		/*if(v[0]!=v[1])
			p.push_back(make_pair(v[0],1));*/

		for (int i = 1; i < n; ++i)
		{
			if(flag == 1)
				break;
			else if(v[i] == prev)
			{
				count++;
				if(v[i] > 7)
					flag = 1;
				if(i == n-1)
					{
						p.push_back(make_pair(v[i],count));
					}
			}
			else
			{	
				//arr[j++] = count;
				p.push_back(make_pair(prev,count));
				count =  1;
				if(v[i] > 7)
					flag = 1;
				if(i == n-1)
					p.push_back(make_pair(v[i],count));
			}

			prev = v[i];
		}

		int flag2 = 0;
		if(flag == 1)
			printf("no\n");
		else
		{
			if(p.size()!=13)
				printf("no\n");
			else
			{
				for (int i = 0; i <= 6; ++i)
				{   if(flag2 == 1)
						break;
					else if(p[i].first != p[12-i].first || p[i].first != i+1 || p[i].second != p[12-i].second)
						flag2 = 1;
					//cout<<"iteration: "<<i<<"flag2 = "<<flag2<<endl;
				}

				if(flag2 == 1)
					printf("no\n");
				else
					printf("yes\n");
			}
		}

			/*for (int i = 0; i < p.size(); ++i)
			{
				cout<<"first-> "<<p[i].first<<" "<<"second-> "<<p[i].second<<endl;
			}
			cout<<"flag = "<<flag<<" "<<"flag2 = "<<flag2<<endl;
*/
	}
	return 0;
}