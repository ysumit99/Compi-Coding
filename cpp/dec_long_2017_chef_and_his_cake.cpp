#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	int n,m;

	while(t--)
	{
		scanf("%d %d",&n,&m);
		char matrix[n][m];
		string ele;

		for (int i = 0; i < n; ++i)
		{
			cin>>ele;

			for (int j = 0; j < m; ++j)
			{
				matrix[i][j] = ele[j];
			}
		}

		if(m%2 == 1)
		{
				int count = 0,count_r = 0, count_g = 0;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m ; ++j)
					{
						if(matrix[i][j] != 'R' && count % 2 == 0)
							count_r++;
						else if(matrix[i][j] != 'G' && count % 2 == 1)
							count_g++;

						count++;
					}
				}

				int cost1,cost2;

				cost1 = count_r*3 + count_g*5;

				count = 0;
				count_r = 0;
				count_g = 0;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m ; ++j)
					{
						if(matrix[i][j] != 'G' && count % 2 == 0)
							count_g++;
						else if(matrix[i][j] != 'R' && count % 2 == 1)
							count_r++;

						count++;
					}
				}
				cost2 = count_r*3 + count_g*5;

				if(cost1 <= cost2)
					printf("%d\n",cost1);
				else
					printf("%d\n",cost2);
		}
		else
		{
			int count = 0,count_r = 0, count_g = 0;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m ; ++j)
					{
						if(matrix[i][j] != 'R' && count % 2 == 0 && i%2 == 0)
							count_r++;
						else if(matrix[i][j] != 'G' && count % 2 == 1 && i%2 == 0)
							count_g++;
						else if(matrix[i][j] != 'G' && count % 2 == 0 && i%2 == 1)
							count_g++;
						else if(matrix[i][j] != 'R' && count % 2 == 1 && i%2 == 1)
							count_r++;

						count++;
					}
				}

				int cost1,cost2;

				cost1 = count_r*3 + count_g*5;

				count = 0;
				count_r = 0;
				count_g = 0;
				for (int i = 0; i < n; ++i)
				{
					for (int j = 0; j < m ; ++j)
					{
						if(matrix[i][j] != 'G' && count % 2 == 0 && i%2 == 0)
							count_g++;
						else if(matrix[i][j] != 'R' && count % 2 == 1 && i%2 == 0)
							count_r++;
						else if(matrix[i][j] != 'R' && count % 2 == 0 && i%2 == 1)
							count_r++;
						else if(matrix[i][j] != 'G' && count % 2 == 1 && i%2 == 1)
							count_g++;


						count++;
					}
				}
				cost2 = count_r*3 + count_g*5;

				if(cost1 <= cost2)
					printf("%d\n",cost1);
				else
					printf("%d\n",cost2);
		}


	}
	return 0;
}
