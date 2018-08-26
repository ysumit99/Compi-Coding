#include <bits/stdc++.h>

int main(int argc, char const *argv[])
{
	long int n;

	scanf("%ld",&n);

	int flag = 0;
	int flag2 = 0;
	int flag3;
	long int temp,temp2,prev,count;
	long int large,small,once;
	


	while(n!=102)
	{
		flag2 = 0;
		temp = n;
		if(temp % 2 == 0)
			flag2 = 1;
		flag3 = 0;
		count = 0;
		
		temp2 = temp % 10;
		prev = temp2;
		temp /= 10;

		once = 0;
		while(temp > 0)
		{
			count++;
			temp2 = temp % 10;
			temp /= 10;
			if(prev == temp2)
			{
				flag3 = 1;
				break;
			}


			if(temp2 > prev &&  once == 0)
			{
				large = 1;
				//small = 0;
				once = 1;
				//count = 1;
			}
			else if(temp2 < prev &&  once == 0)
			{
				small = 1;
				//large = 0;
				once = 1;
				//count = 1;
			}

			if(once == 1 && large == 1)
			{
				if(count % 2 == 1 && temp2 < prev)
				{
					flag3 = 1;
					break;
				}
				else if(count % 2 == 1 && temp2 > prev)
				{
					flag3 = 1;
					break;
				}

			}
			else if(once == 1 && small == 1)
			{
				if(count % 2 == 1 && temp2 > prev)
				{
					flag3 = 1;
					break;
				}
				else if(count % 2 == 1 && temp2 < prev)
				{
					flag3 = 1;
					break;
				}
			}


			prev = temp2;

			//count++;

		}
		if(flag3 == 0 && flag2 == 1)
			break;
		else
			n--;


	}
	printf("%ld",n);
	return 0;
}