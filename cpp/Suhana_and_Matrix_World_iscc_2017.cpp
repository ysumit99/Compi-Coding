#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	int m;
	
	while(t--)
	{
	    cin>>m;
	    int x = 0,y = 0;
	    
	    if(m % 3 == 0)
	         x = m/3;
	    else
	        x = m/3 + 1;
	    
	       
	        
	    if(m % 3 == 2)
	        y = (m/3) + ((m + 1)/3);
	    else
	        y = (m/3)*2;
	        
	    
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}
