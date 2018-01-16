#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string first,last;
    cin>>first>>last;
    int pos1,pos2;
    int flag = 0;
    int prev;

    prev = int(last[0]);
    //result = 0;
    
    	pos1 = 0;


    for (int i = 1; i < first.size(); ++i)
    {
    	if(int(first[i]) >= prev)
    	{
    		flag = 1;
    		//prev = int(first[i]);
    		pos1 = i-1;
    		break;
    	}
    	//prev = int(first[i]);
    }

    if(flag == 0)
    	pos1 = first.size()-1;

    


    /*flag = 0;
     prev = int(last[0]);
     if(last.size() == 1)
    	pos2 = 0;

    for (int i = 1; i < last.size(); ++i)
    {
    	if(int(last[i])<= prev)
    	{
    		flag = 1;
    		pos2 = i-1;
    		break;
    	}
    	prev = int(last[i]);
    }

    if(flag == 0)
    	pos2 = last.size()-1;*/


    for (int i = 0; i <= pos1; ++i)
    {
    	cout<<first[i];
    }
    
    	cout<<last[0];
    




	return 0;
}