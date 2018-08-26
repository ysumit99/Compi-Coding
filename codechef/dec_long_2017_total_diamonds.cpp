#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,count,temp,temp2,flag,result,sum1 = 0,sum2 = 0,twice_num;
	long long int sum,intm ;

	cin>>t;
	//long long int arr[2000001] = {0};
	long long int cum_sum[2000001] = {0};
	long long int num[2000001] = {0};
	//long long int twice_num[2000001] = {0};
	long long int final_result[1000001] ={0};
	
		count = 0;
		for (int i = 2; i <= 2*1000000 ; ++i)
		{
			temp = i;
			//result = 0;
			sum1 = 0;
			sum2 = 0;
			//count++;
			//count2 = 0;
			
			while(temp > 0)
			{
				
					result = temp % 10;
					if(result % 2 == 0)
						sum1+=result;
					else
						sum2+=result;
					temp /= 10;
			
				
			}
			//result = sum1 - sum2;
			result = abs(sum1 - sum2);
			//cout<<"result = "<<result<<endl;
			//intm  =  (result*count);// %1000000007;
			//sum+= (result*count);
			//arr[i] = result*count;
			num[i] = result;
			twice_num = 2*result;
			if(i == 2)
				cum_sum[i] = twice_num;
			else
				cum_sum[i] = cum_sum[i-1] + twice_num;
			//sum+=intm;

		
		}
		final_result[1] = 2;
		for (int i = 2; i <= 1000000 ; ++i)
		{
			final_result[i] = final_result[i-1] + (cum_sum[2*i] - cum_sum[i] - num[2*i]);
		}

	while(t--)
	{
		cin>>n;
		/*sum = 0;
		count = 0;
		flag = 0;

		//cout<<arr[2*n]<<"\n";
		sum = cum_sum[2*n];
		count = 2;
		for (int i = n+2; i <= 2*n ; ++i)
		{
			sum-=(num[i]*count);
			count+=2;
			
			
		}*/
		cout<<final_result[n]<<"\n";

	}
	return 0;
}