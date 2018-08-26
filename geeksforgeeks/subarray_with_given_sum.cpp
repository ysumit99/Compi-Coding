//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	int s = 0,ele,start;
	int flag = 0,flag2 = 0;
	int result_1,result_2;
	
	while(t--)
	{
	    
	    int n,sum;
	    
	    cin>>n>>sum;
	    
	    int arr[n]={0};
	   
	    
	    start = 0;
	    flag = 0;
	    flag2 = 0;
	    s = 0;
	    
	    
	    for(int i = 0; i < n; i++)
	    {
	        
	        cin>>ele;
	        arr[i] = ele;
	        
	        
	        s+=ele;
	        //cout<<"s="<<s<<"t="<<t<<endl;
	        if(s == sum)
	        {
	            //cout<<start+1<<" "<<i+1<<"\n";
	            
	            flag = 1;
	            if(flag2 == 0)
	            {
    	            result_1 = start + 1;
    	            result_2 = i + 1;
	            }
	            flag2 = 1;
	            //break;
	            
	        }
	        else if(s > sum)
	        {
	            while(s > sum)
	            {
	                s-=arr[start];
	                start++;
	            }
	            
	            if(s == sum)
	            {
	                //cout<<start+1<<" "<<i+1<<"\n";
    	            flag = 1;
    	        if(flag2 == 0)
	            {
    	            result_1 = start + 1;
    	            result_2 = i + 1;
	            }
	            flag2 = 1;
    	            //break;
	            
	            }
	        }
	    }
	    
	    if(flag == 0)
	        cout<<"-1\n";
	    else
	        {
	            cout<<result_1<<" "<<result_2<<"\n";
	        }
	    
	    
	    
	    
	}
	return 0;
}