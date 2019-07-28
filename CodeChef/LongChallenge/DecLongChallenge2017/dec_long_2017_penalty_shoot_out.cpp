#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

		std::string line;
		int count_a,count_b,flag,remain_a,remain_b;
	while (std::getline(std::cin, line))
	{
		count_a = 0;
		count_b = 0;
		remain_a = 5;
		remain_b = 5;
		flag = 0;
	   for (int i = 0; i < 20; ++i)
	   {


		   	if(i % 2 == 0)
		   		{	
		   			if(line[i] == '1')
		   				count_a++;
		   			remain_a--;
		   		}
		   	else if(i % 2 == 1)
		   		{	
		   			if(line[i] == '1')
		   				count_b++;
		   			remain_b--;
		   		}


		   	if(i >= 5 && i<=9)
		   	{
		   		if(count_a > count_b)
		   		{
		   			if(count_a - count_b > remain_b)
		   			{
		   				flag = 1;
			   			cout<<"TEAM-A "<<i+1<<"\n";
			   			//printf("TEAM-A %d\n",i);

			   			break;
		   			}

		   		}
		   		else if(count_b > count_a)
		   		{

		   			if(count_b - count_a > remain_a)
		   			{
		   				flag = 1;
			   			cout<<"TEAM-B "<<i+1<<"\n";
			   			//printf("TEAM-A %d\n",i);

			   			break;
		   			}
		   		}

		   	}
		   	if(i == 9)
		   	{
		   		if(count_a > count_b)
		   		{
		   			flag = 1;
		   			cout<<"TEAM-A "<<i+1<<"\n";
		   			//printf("TEAM-A %d\n",i);

		   			break;
		   		}
		   		else if(count_b > count_a)
		   		{
		   			flag = 1;
		   			cout<<"TEAM-B "<<i+1<<"\n";
		   			//printf("TEAM-B %d\n",i);

		   			break;
		   		}
		   	}
		   	else if(i > 9)
		   	{
		   		if(i % 2 == 1)
		   		{
		   			if(count_a > count_b )
		   			{
		   				flag = 1;
		   				cout<<"TEAM-A "<<i+1<<"\n";
			   			//printf("TEAM-A %d\n",i);

			   			break;
		   			}
		   			else if(count_b > count_a)
		   			{
		   				flag = 1;
		   				cout<<"TEAM-B "<<i+1<<"\n";
			   			//printf("TEAM-B %d\n",i);

			   			break;
		   			}
		   		}

		   	}


	   }
	   if(flag == 0)
	   		cout<<"TIE\n";
	   		//printf("TIE\n");


	}



	return 0;
}