#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char const *argv[])
{
 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
	int t,n,m,ele,count = 0,sum;
	cin>>t;
 
	while(t--)
	{
		cin>>n>>m;
 
		std::vector<int> v;
 
		for (int i = 0; i < n; ++i)
		{
			cin>>ele;
			v.push_back(ele);
 
		}
 
		count = 0,sum = 0;
 		int flag;
		for (int i = 1; i < pow(2,n); i++)
	    {
	    	sum = 0;
	    	flag = 0;
	        for (int j = 0; j < n; j++)
	        {
	            
	            if (i & (1<<j))
	                sum += v[j];
	        }
	        //printf("sum = %d\n",sum);
	        if(sum % m == 0)
	        	count++;
	       
	    }
 		
 		if(count == 0)
	    	printf("%d\n",count);
	   	else
	   		printf("0\n");
 
 
	}
 
	return 0;
} 