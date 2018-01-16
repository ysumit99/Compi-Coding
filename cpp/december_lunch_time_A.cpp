#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--)
    {
    	int w;
    	string s;
    	cin>>w>>s;

    	int arr[7] = {0};
    	for (int i = 0; i < w ; ++i)
    	{
    		arr[i%7]++;
    	}

    	if(s == "mon")
    	{
    		for (int i = 0; i < 7; ++i)
    		{
    			cout<<arr[i]<<" ";
    		}
    		cout<<"\n";

    	}
    	else if(s == "tues")
    	{
    		cout<<arr[6]<<" ";
    		for (int i = 0; i < 6; ++i)
    		{
    			cout<<arr[i]<<" ";
    		}
    		cout<<"\n";

    	}
    	else if(s == "wed")
    	{
    		cout<<arr[5]<<" "<<arr[6]<<" ";
    		for (int i = 0; i < 5; ++i)
    		{
    			cout<<arr[i]<<" ";
    		}
    		cout<<"\n";

    	}
    	else if(s == "thurs")
    	{
    		cout<<arr[4]<<" "<<arr[5]<<" "<<arr[6]<<" ";
    		for (int i = 0; i < 4; ++i)
    		{
    			cout<<arr[i]<<" ";
    		}
    		cout<<"\n";

    	}
    	else if(s == "fri")
    	{
    		cout<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<" "<<arr[6]<<" ";
    		for (int i = 0; i < 3; ++i)
    		{
    			cout<<arr[i]<<" ";
    		}
    		cout<<"\n";

    	}
    	else if(s == "sat")
    	{
    		cout<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<" "<<arr[6]<<" ";
    		for (int i = 0; i < 2; ++i)
    		{
    			cout<<arr[i]<<" ";
    		}
    		cout<<"\n";

    	}
    	else
    	{
    		cout<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<" "<<" "<<arr[6]<<" ";
    		for (int i = 0; i < 1; ++i)
    		{
    			cout<<arr[i]<<" ";
    		}
    		cout<<"\n";
    	}


    }
	return 0;
}