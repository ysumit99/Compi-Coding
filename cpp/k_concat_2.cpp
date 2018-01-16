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
 		long long int cum_sum = 0,cum_sum2;
 		std::vector<int> v;
 		long long int largest_negative_temp, largest_negative;

 		int flag = 0;
 		for (int i = 0; i < n; ++i)
 		{
 			
 			
 			cin>>ele;
 			v.push_back(ele);
 			if(v[i] > 0)
 				flag = 1;

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
 		//cout<<"cum_sum = "<<cum_sum<<endl;

 		cum_sum2 = cum_sum * k; //possible max
 		//cout<<"cum_sum = "<<cum_sum<<endl;
 		//int start,end;
 		if(k>=2 && flag == 1)
 		{
	 		for (int i = 0; i < n; ++i)
	 		{
	 			v.push_back(v[i]);
	 		}
 		}

 	long long int max = INT_MIN, max_temp = 0,temp;
 	int start = 0, end = 0, s = 0;
    for (int i = 0; i < v.size(); i++)
    {
        max_temp = max_temp + v[i];
        //cout<<"max_temp = "<<max_temp<<endl;
        if (max < max_temp)
            {
            	max = max_temp;
            	//end = i;
            	//cout<<"max = "<<max<<endl;
            	start = s;
            	end = i;
            	temp = max;

            }
 
        if (max_temp < 0)
            {
            	max_temp = 0;
            	s = i+1;
            }
    }

    

    if(flag == 0)
    	cout<<largest_negative<<endl;
    else if(k < 2)
    	cout<<temp<<endl;
    else
    	cout<< std::max(temp,cum_sum2) <<endl;
    					



 			

 		

 	}
 	return 0;
 }