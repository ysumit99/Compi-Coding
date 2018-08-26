//http://practice.geeksforgeeks.org/problems/even-and-odd-elements-at-even-and-odd-positions
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    scanf("%d",&n);
	    
	    int ele;
	    int result[n];
	    
	    
	    int j = 0, k=1;
	    for(int i = 0; i < n; i++)
	    {
	       scanf("%d",&ele);
    	      
	        if( ele%2 == 0)
	       { 
	           if(j <= n-1)
	                result[j] = ele;
	           else
	                result[--j] = ele;
	           j+=2;
	       }
	       else
	       {
	           if(k <= n-1)
    	           result[k] = ele;
    	       else
    	            result[--k] = ele;
    	       k+=2;
	       }
	       
	       
    	      
	    }
	    
	    for(int i = 0; i<n; i++)
	        printf("%d ",result[i]);
	   printf("\n");
	    
	}
	return 0;
}