#include <bits/stdc++.h>

using namespace std;

//function to be written
int cal(int n, int a, int b )
{
  int store[n+1];
  //int i;
  store[0] = a;   store[1] = b; 
  for (int i = 2; i <= n; i++)
      store[i] = store[i-1] + store[i-2];
 
  return store[n];
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;
	int n,q;
	int x,y;
	int v,k,a,b,type,flag,count;



	cin>>t;

	while(t--)
	{

		cin>>n>>q;

		int arr[n+1]={0};
		int tree[n+1][n+1]={-1};
		int result;

		for (int i = 0; i < n-1; ++i)
		{
			cin>>x>>y;
			tree[x][y] = 1;
			tree[y][x] = 1;
		}


		for (int i = 0; i < q; ++i)
		{
			cin>>type;
			if(type == 1)
			{
				cin>>v>>k>>a>>b;

				for (int j = 1; j <= n; ++j)
				{
					if(tree[v][j]!=-1)
					{

					}
					else
					{
						flag = 0;count = n;
						while(count > 0)
						{
							
						}
					}
				}


			}
			else
			{
				cin>>v;
				cout<<arr[v] % 1000000007<<"\n";
			}
		}



	}
	return 0;
}