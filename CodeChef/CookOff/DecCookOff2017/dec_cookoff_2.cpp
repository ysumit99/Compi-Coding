#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin>>t;
    long long int ele,sum;
    int count_1,count_2,count_3,count_4,result;

    while(t--)
    {
    	cin>>n;
    	sum = 0;
    	count_1 = 0;
    	count_2 = 0;
    	count_3 = 0;
    	count_4 = 0;
    	result = 0;

    	for (int i = 0; i < n; ++i)
    	{
    		cin>>ele;

    		ele %= 4;
    		
    		if(ele == 1)
    			count_1++;
    		else if(ele == 2)
    			count_2++;
    		else if(ele == 3)
    			count_3++;

    		sum+=ele;




    	}
    	if(sum % 4 != 0)
    		cout<<"-1\n";
    	else
    	{
    		
    		if(count_2 % 2 == 0)
    		{
    			result = count_2/2;
    			if(count_3 == count_1 )
    			{
    				//count_3 -= count_1;
    				result += count_1;
    				//count_1 = 0;
    				cout<<result<<"\n";

    			}
    			else if(count_3 > count_1)
    			{
    				result += count_1;
    				count_3 -= count_1;
    				if(count_3 % 4 == 0)
    					cout<<result+(3*count_3/4)<<"\n";
    				else
    					cout<<"-1\n";


    			}
    			else if(count_3 < count_1)
    			{
    				result += count_3;
    				count_1 -= count_3;
    				if(count_1 % 4 == 0)
    					cout<<result+(3*count_1/4)<<"\n";
    				else
    					cout<<"-1\n";


    			}

    			

    		}
    		else if(count_2 % 2 == 1)
    		{
    			result +=count_2/2;

    			if(count_1 == count_3)
    				cout<<"-1\n";
    			else if(count_1 > count_3)
    			{
    				result += count_3;
    				count_1 -= count_3;

    				if(count_1 == 2)
    					cout<<result+2<<"\n";
    				else if(count_1 < 2)
    					cout<<"-1\n";
    				else
    				{
    					result += 2;
    					count_1 -=2;
    					if(count_1 % 4 == 0)
    						cout<<result + (3*count_1/4)<<"\n";
    					else
    						cout<<"-1\n";

    				}

    			}
    			else
    			{
    				result += count_1;
    				count_3 -= count_1;

    				if(count_3 == 2)
    					cout<<result+2<<"\n";
    				else if(count_3 < 2)
    					cout<<"-1\n";
    				else
    				{
    					result += 2;
    					count_3 -=2;
    					if(count_3 % 4 == 0)
    						cout<<result + (3*count_3/4)<<"\n";
    					else
    						cout<<"-1\n";

    				}

    			}


    		}
    		
    	}
    	
    }


	return 0;
}