#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;

	cin>>t;

	while(t--)
	{
		long long int a,b;

		scanf("%lld %lld",&a,&b);

		long long int max, temp,count = 0,count2 = 0,temp2,small,diff;

		(a >= b) ? max = a : max = b;

		std::vector<int> v1;
		std::vector<int> v2;
		std::vector<int> v3;



		temp = max;
		if(temp == a)
			small = b;
		else
			small = a;

		while(temp!= 0)
		{
			temp2 = temp % 10;
			v1.push_back(temp2);
			temp/=10;

			count++;
		}
//count = 0;
		while(small!= 0)
		{
			temp2 = small % 10;
			v2.push_back(temp2);
			small/=10;

			count2++;
		}

		for (int i = 0; i < count - count2; ++i)
		{
			v2.push_back(0);
		}

		for (int i = count - 1; i >= 0 ; i--)
		{
			diff = v1[i] +  v2[i];

			if(diff >= 10)
				diff-=10;
			v3.push_back(diff);
		}
count2 = 0;
		for (int i = 0; i < count; ++i)
		{
			if(v3[i] != 0)
				break;

			count2++;
		}
		if(count2 == count)
			printf("0");
		else
		{
			for (int i = count2; i < count; ++i)
			{
				printf("%d",v3[i]);
			}
		}

		
		printf("\n");


	}
	return 0;
}