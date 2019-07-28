//https://www.hackerearth.com/practice/data-structures/disjoint-data-strutures/basics-of-disjoint-data-structures/practice-problems/algorithm/teachers-dilemma-3/
//Partially Accepted

#include<bits/stdc++.h>
#define ll long long int

using namespace std;

ll find(ll u, ll n, ll *parent)
{
    //cout << "u = " << u  << " n = " << n << endl;
    while(true)
    {
        if(parent[u] > 0)
            u = parent[u];
        else
            break;
    }
    return u;
}

void union1(ll u, ll v, ll n, ll *parent)
{
    parent[u] += parent[v];
    parent[v] = u;
    
    return;
    
}
int main()
{

	#ifdef DEBUG
	 	freopen("input.txt", "r", stdin);
	 	freopen("output.txt", "w", stdout);
 	#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

    
    ll n, m, u, v;
    
    
    cin >> n >> m;
   ll parent[n + 1];
   std::fill_n(parent, n + 1, -1);
    
  
    
    for(ll i = 0 ; i < m; i++)
    {
        cin >> u >> v;
        
        u = find(u, n, parent);
        v = find(v, n, parent);
        
        if(u != v)
        {
            union1(u, v, n, parent);
        }

        /*cout << "*********" << endl;
         for(ll j = 1 ; j <= n ; j++)
	    {
	        if(parent[i] < 0)
	        {
	            res *= abs(parent[i]);
	        }
	        cout << parent[j] << " ";
	    }
    	cout << endl << "*********" << endl;
        */
        
    } 
    
    ll res = 1;
    /*cout << "***************" << endl;*/
    for(ll i = 1 ; i <= n ; i++)
    {
        if(parent[i] < 0)
        {
            res *=  parent[i] * -1;
            res %= 1000000007;
        }
        /*cout << parent[i] << " ";*/
    }
    /*cout << endl <<"***************" << endl;*/
    cout << res << endl;
    
    return 0;
}