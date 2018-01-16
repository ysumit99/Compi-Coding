#include <bits/stdc++.h>

 using namespace std;
 int main(int argc, char const *argv[])
 {

 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
 	int t;
 	cin>>t;

 	while(t--)
 	{
 		int n,k;
 		cin>>n>>k;
 		int ele;
 		long long int cum_sum = 0;
 		std::vector<int> v;
 		long long int largest_negative_temp, largest_negative;

 		
 		for (int i = 0; i < n; ++i)
 		{
 			

 			cin>>ele;
 			v.push_back(ele);
 			cum_sum += ele;
 			if( i == 0 )
 				{
 					largest_negative = ele;
 					//cout<<"largest_negative = "<<largest_negative<<endl;
 					//largest_negative_temp = ele;
 				}
 			else
 			{

 				if(ele > largest_negative)
 					largest_negative = ele;
 					//cout<<"largest_negative = "<<largest_negative<<endl; 
 			}



 		}

 		cum_sum*=k; //possible max
 		//cout<<"cum_sum = "<<cum_sum<<endl;

 		long long int start_sum = 0, end_sum = 0;
 		int start_flag = 0, end_flag = 0;
 		long long int sum_start_end = 0;


 		int start = v[0];
 		int end = v[n-1];
 		//cout<<"start_before_loop = "<<start<<endl;
 		//cout<<"end_before_loop = "<<end<<endl;


 		if(n>=2)
 		{
	 		if(start >= 0 )
	 		{	start_sum += start;
	 			//cout<<"start_sum = "<<start_sum<<endl;
	 			start_flag = 1;
	 			int i = 1;
	 			while(v[i] >= 0 && i<=n-1)
	 			{
	 				start_sum+= v[i];
	 				//cout<<"start_sum = "<<start_sum<<endl;
	 				i++;
	 			}
	 		}

	 		if(end >= 0)
	 		{	end_sum += end;
	 			//cout<<"end_sum = "<<end_sum<<endl;
	 			end_flag = 1;
	 			int i = n-2;
	 			while(v[i] >= 0 && i>=0)
	 			{
	 				end_sum+= v[i];
	 				//cout<<"end_sum = "<<end_sum<<endl;
	 				i--;
	 			}
	 		}


 		}

 		if(start_flag == 1 && end_flag == 1 && k>=2  )
 		{
 			sum_start_end = start_sum + end_sum; //second_possible max
 			//cout<<"sum_start_end = "<<sum_start_end<<endl;
 		}
 		

 		long long int max_sum = 0, temp_max = 0;
 		
 		for(int l = 0; l < n ; ++l)
 		{
 			if(v[l] >= 0)
 			{
 				temp_max+=v[l];
 				if(temp_max > max_sum)
 					max_sum = temp_max;
 			}
 			else
 			{
 				temp_max = 0;
 			}
 		}
 		//cout<<"max_sum = "<<max_sum<<endl;

long long int result,result2,result3;
result = (max(cum_sum,sum_start_end));

result2 = max(result,max_sum);

result3 = max(result2,largest_negative);

cout<<result3<<"\n";

 			

 		

 	}
 	return 0;
 }