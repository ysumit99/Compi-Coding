#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
 
	while(t--)
	{
		int n,a,sum = 0,count = 0,temp=1,temp2,flag = 0;
		scanf("%d %d",&n,&a);
 
		if(a == 1)
		{
			printf("%d ",n);
			for (int i = 0; i < n; ++i)
			{
				printf("a");
			}
		}
		else if(a >= 3)
		{
			printf("1 ");
			for (int i = 0; i < n; ++i)
			{
				if(i % 3 == 0)
					printf("a");
				else if(i % 3 == 1)
					printf("b");
				else if(i % 3 == 2)
					printf("c");
			}
		}
		else if( a == 2)
		{
 
			if(n == 1)
				printf("1 a");
			else if(n == 2)
				printf("1 ab");
			else if(n == 3)
				printf("2 aab");
			else if(n == 4)
				printf("2 aabb");
			else if(n == 5)
				printf("3 aaabb");
			else if(n == 6)
				printf("3 aaabbb");
			else if(n == 7)
				printf("3 aaababb");
			else if(n == 8)
				printf("3 aaababbb");
			else if(n == 9)
				printf("4 aaaabbaba");
			else if(n == 10)
				printf("4 aaaabbabaa");
			else if(n > 10)
			{
				printf("4 ");
				while(count <= n && flag == 0)
				{
					for (int i = 0; i < 6 ; ++i)
					{
						if(i == 0)
							{
								printf("a");
								count++;
								if(count == n)
								{
									flag = 1;
									break;
								}

							}
						else if(i == 1)
							{
								printf("b");
								count++;
								if(count == n)
								{
									flag = 1;
									break;
								}

							}
						else if(i == 2)
							{
								printf("a");
								count++;
								if(count == n)
								{
									flag = 1;
									break;
								}
							}
						else if(i == 3)
							{
								printf("a");
								count++;
								if(count == n)
								{
									flag = 1;
									break;
								}

							}
						else if( i == 4)
							{
								printf("b");
								count++;
								if(count == n)
								{
									flag = 1;
									break;
								}

							}
						else if(i == 5)
							{
								printf("b");
								count++;
								if(count == n)
								{
									flag = 1;
									break;
								}

							}

					}
				}

				/*sum = n/2 + n % 2;
				temp2 = sum;
			while(sum>=temp)
			{
			   sum--;
			   temp+=2;
			   count++;
			
			}
			sum -= ((sum - 1)/3);
			count = (temp2 - 1)/3;
				
			//sum++;
			//count--;
			if(n%2 ==0){
				printf("%d ",sum);
		    for(int i = 0; i < temp2-count ; i++)
				{
				
				
				printf("a");
				}
			for(int i =0; i < count; i++)
			{
			  printf("ba");
			
			}
			
				for(int i = 0; i < temp2-count ; i++)
				{
				
				
				printf("b");
				}
			}
			
			else if(n%2 == 1){
				printf("%d ",sum);
		    for(int i = 0; i < temp2-count ; i++)
				{
				
				
				printf("a");
				}
			for(int i =0; i < count; i++)
			{
			  printf("ba");
			
			}
			
				for(int i = 0; i < temp2-count -1 ; i++)
				{
				
				
				printf("b");
				}
			}
 	     //end here */
			
			
 
		}
	}
		if(t !=0)
			printf("\n");


	}
	return 0;
} 