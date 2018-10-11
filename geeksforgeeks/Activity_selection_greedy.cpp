//https://practice.geeksforgeeks.org/problems/activity-selection/0
#include <bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	
	cin >> t;
	
	
	while(t--)
	{
	   
	    cin >> n;
	    
	    vector<int> start(n);
	    vector<int> end(n);
	    vector< pair<int,int> > c;
	    
	    //input start times
	    for(int i = 0; i < n; i++)
	    {
	        cin >> start[i];
	    }
	    
	    //input finish times
	    for(int i = 0; i < n; i++)
	    {
	        cin >> end[i];
	    }
	    
	    
	   //  //testing start & end arrays
	   //  for(int i = 0; i < n; i++)
	   // {
	   //     cout << start[i] << " " << end[i] << endl;
	   // }
	    
	    //store start-finish pairs
	    for(int i = 0; i < n; i++)
	    {
	        c.push_back(make_pair(end[i],start[i]));
	    }
	    
	    
	    
	    
	    //sort the pairs by finish time
	    sort(c.begin(), c.end());
	    
	   // //testing
	   //  for(int i = 0; i < n; i++)
	   // {
	   //     cout << c[i].first << " " << c[i].second << endl;
	   // }
	    
	    
	    int count = 1; //stores result
	    int prev = c[0].first;
	    
	    for(int i = 1; i < n; i++)
	    {
	        if(c[i].second >= prev)
	            {
	                count++;
	                prev = c[i].first;
	                
	            }
	    }
	    
	    cout << count << endl;
	    
	    
	    
	    
	    
	}
	return 0;
}