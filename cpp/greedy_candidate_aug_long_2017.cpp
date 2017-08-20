#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	int n,m;

	cin>>t;

	while(t--)
	{

		scanf("%d %d",&n,&m);

		int minSal[n];
		int company[m][2];
		//int placement[n][m];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&minSal[i]);
		}

		for (int i = 0; i < m; ++i)
		{
			scanf("%d %d",&company[i][0],&company[i][1]);
		}

		string str;
		int hired[m]={0};
		long int total_sal = 0;
		int get_job = 0;

		int min;
		int first_flag;
		int temp_total_sal;
		int temp_hired,temp_company;


		for (int i = 0; i < n; ++i)
		{
			cin>>str;
			min = minSal[i];
			first_flag = 0;
			for (int j = 0; j < m; ++j)
			{
				 
				if(str[j] == '1' && first_flag == 0)
					{
						if(company[j][0] >= min && company[j][1] > 0)
						{	
							first_flag = 1;
							min = company[j][0];
							company[j][1]--;
							temp_company = j;
							get_job++;
							total_sal += company[j][0];
							temp_total_sal = j;
							hired[j]++;
							temp_hired = j;
						}
					}
				else if(str[j] == '1' && first_flag == 1)
				{
					if(company[j][0] > min && company[j][1] > 0)
						{	
							min = company[j][0];
							company[j][1]--;
							company[temp_company][1]++;
							temp_company = j;
							//get_job++;

							total_sal-= company[temp_total_sal][0];
							total_sal+=company[j][0];
							temp_total_sal = j;
							hired[temp_hired]--;
							temp_hired = j;
							hired[j]++;
						}
				}
				
			}
		}
		int count = 0;

		for (int i = 0; i < m; ++i)
		{
			if(hired[i] == 0)
				count++;
		}

		printf("%d %ld %d\n",get_job,total_sal,count);



		
		

		



	}
	return 0;
}