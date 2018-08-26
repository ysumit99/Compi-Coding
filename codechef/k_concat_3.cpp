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
 					
 				}
 			else
 			{
 				if(ele > largest_negative)
 					largest_negative = ele;
 			}

 		}
 	
    	cum_sum2 = cum_sum * k; //possible max
 		
        long long int max = INT_MIN, max_temp = 0,temp;
        if(flag == 0)
        {
            cout<<largest_negative<<"\n";
        }
        else
        {
            if( k == 1 )
            {
                //apply kadane's

                    for (int i = 0; i < v.size(); i++)
                    {
                        max_temp = max_temp + v[i];
                        //cout<<"max_temp = "<<max_temp<<endl;
                        if (max < max_temp)
                            {
                                max = max_temp;
                                temp = max;

                            }
                 
                        if (max_temp < 0)
                            {
                                max_temp = 0;
                                
                            }
                    }

                cout<<temp<<"\n";
            }
            else if(cum_sum <= 0)
            {

                int size = v.size();
                for (int i = 0; i < size; ++i)
                {
                    v.push_back(v[i]);
                }

                 
                    for (int i = 0; i < v.size(); i++)
                    {
                        max_temp = max_temp + v[i];
                        //cout<<"max_temp = "<<max_temp<<endl;
                        if (max < max_temp)
                            {
                                max = max_temp;
                                temp = max;

                            }
                 
                        if (max_temp < 0)
                            {
                                max_temp = 0;
                                
                            }
                    }
                 cout<<temp<<"\n";

            }
            else
            {
                long long int itr,result;
                itr = cum_sum2;
                result = cum_sum2;
                int check_flag = 0;

                for (int i = (v.size()-1); i >= 0; i--)
                {
                    itr -= v[i];
                    if(itr > result)
                        {
                            result = itr;
                            check_flag = 1;
                        }
                }
                if(check_flag == 0)
                   {
                        //result = cum_sum2;
                        itr = cum_sum2;
                   }
                else
                    itr = result; 


                for (int i = 0; i < v.size(); ++i)
                {
                    itr -= v[i];
                    if(itr > result)
                        result = itr;
                }
                cout<<result<<"\n";
            }
        }

  
 	}
 	return 0;
 }