//https://www.hackerearth.com/challenge/competitive/october-circuits-18/algorithm/airfares-dbef7f12/
#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
   long long int p,s,t,h,x,cost = 0;
    
    cin >> p >> s >> t >> h >> x;
    
    
    for(int i = 0; i < x; i++)
    {
        if(s <= t)
            cost += h;
        else
            cost += p;
        
        s--;
    }
    
    cout << cost;
    
    
    return 0;
}