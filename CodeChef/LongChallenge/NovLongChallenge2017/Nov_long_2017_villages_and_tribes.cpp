#include <bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	while(t--)
	{


		string str;

		cin>>str;
		int count_a = 0, count_b = 0;

		char prev = str[0];
		if(prev == 'A')
			count_a++;
		else if(prev == 'B')
			count_b++;

		int flag = 0,count = 1;
		if(prev == 'A' || prev == 'B')
			flag = 1;


		if(str.length() == 1)
		{
			if(str[0] == 'A')
				printf("1 0\n");
			else if(str[0] == 'B')
				printf("0 1\n");
			else
				printf("0 0\n");
		}
		else
		{
			while(flag!=1 && count <= str.length())
			{
				if(str[count] == 'A' || str[count] == 'B')
				{
					flag = 1;
					if(str[count] == 'A')
						count_a++;
					else
						count_b++;
					//prev  = str[count];
					//count++;

					//break;
				}
				prev = str[count];
				count++;


			}

			int count2 = 0;
			for (int i = count; i < str.length(); ++i)
			{
				if(str[i] == 'A')
				{
					count_a++;
					if(prev == 'A')
						count_a+=(count2);
					//else if(prev == 'B')
						//count_b+=1;
					count2 = 0;
					prev = 'A';
				}
				else if(str[i] == 'B')
				{
					count_b++;
					if(prev == 'B')
						count_b+=(count2);
					//else if(prev == 'A')
						//count_a+=1;
					count2 = 0;
					prev = 'B';
				}
				else if(str[i] == '.')
				{
					count2++;
				}
			}	
			printf("%d %d\n",count_a,count_b);

		}
	
	}
	return 0;
}