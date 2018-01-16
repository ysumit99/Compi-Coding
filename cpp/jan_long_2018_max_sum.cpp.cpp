#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	cin>>t;

	// declare 2D vector
	//vector< vector<int> > myVector;
	// make new row (arbitrary example)
	//vector<int> myRow(1,5);
	//myVector.push_back(myRow);
	// add element to row
	//myVector[0].push_back(1);


	while(t--)
	{
		int n,ele;
		cin>>n;

		vector< vector<int> > myVector;


		for (int i = 0; i < n; ++i)
		{
			vector<int> myRow(0,n-1);
			//myVector.push_back(myRow);

			for (int j = 0; j < n; ++j)
			{
				cin>>ele;
				//myVector[i].push_back(ele);
				myRow.push_back(ele);

			}
			sort(myRow.begin(),myRow.end());
			myVector.push_back(myRow);

			
		}

		/*for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout<<myVector[i][j]<<" ";
			}
			cout<<"\n";
		}*/

		long long int sum = myVector[n-1][n-1];
		long long int prev = myVector[n-1][n-1];
		int flag = 0,found;

		if(n == 1)
		{
			cout<<sum<<"\n";
		}
		else
		{
			
			for (int i = n-2; i >= 0; i--)
			{
				if(myVector[i][0] >= myVector[i+1][n-1])
				{
					flag = 1;
					break;
				}
				else
				{
					found = -1;
					for (int j = 0; j <= n-1 ; ++j)
					{
						if(myVector[i][j] >= prev)
						{
							found = j;
							break;
						}
					}
					if(found == -1)
					{
						sum += myVector[i][n-1];
						prev = myVector[i][n-1];
						//cout<<"first"<<endl;
					}
					else if( found == 0)
					{
						flag = 1;
						break;
					}
					else
					{
						sum += myVector[i][found-1];
						prev = myVector[i][found-1];
						//cout<<"second"<<endl;
					}
				}
			}
			if(flag == 1)
				cout<<"-1\n";
			else
				cout<<sum<<"\n";

		}
		


	}

	return 0;
}