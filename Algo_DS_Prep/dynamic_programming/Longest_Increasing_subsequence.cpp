//https://practice.geeksforgeeks.org/problems/longest-increasing-subsequence/0
#include <bits/stdc++.h>

using namespace std;

int main()
 {
	int t,n;
	
	cin >> t;
	
	while(t--){
	    cin >> n;
	    
	    
	    
	    vector<int> v(n);
	    std::vector<int> length(n,1);
	    std::vector<int> sub(n);

	    
	    for(int i = 0; i < n; i++)
	    	cin >> v[i];

	    

	    for (int i = 1; i < n; ++i)
	    {
	    	for (int j = 0; j < i; ++j)
	    	{
	    		if(v[i] > v[j])
	    			{
	    				length[i] = max(length[i], length[j] + 1);
	    				sub[i] = j;

	    			}

	    	}
	    }
	    
	    int max = 0;

	    for (int i = 0; i < n; ++i)
	    {
	    	if(length[i] > max)
	    		max = length[i];
	    }

	    cout << max << endl;
	    
	    
	    
	}
	return 0;
}