//https://www.codechef.com/APRIL19B/problems/SUBREM
//subtree removal
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
vector<ll>adj[100005];
ll a[100005];
ll dp[100005];
ll visited[100005];
ll n,x;

void dfs(ll u)
{
    visited[u]=true;
    dp[u]=a[u];
	ll sum=a[u];
	for(ll child : adj[u])
	{
	    if(!visited[child])
	    {	
	        dfs(child);
		    sum+=dp[child];
	    }
	}
	if(sum<-x)
	dp[u]=-x;
	else
	dp[u]=sum;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> x;	
		memset(a,0,sizeof(a));
		memset(dp,0,sizeof(dp));
		memset(visited,false,sizeof(visited));
		memset(adj,0,sizeof(adj));
		for(int i=1;i<=n;i++)
		cin >> a[i];
		ll u,v;
		for(int i=1;i<=n-1;i++)
		{
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		dfs(1);
		cout << dp[1] << endl;
	}
	return 0;
}