https://ideone.com/4rmLfG
#include<bits/stdc++.h>
#define REP(i,n) for (lli i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define endl '\n'
using namespace std;
vi ar[100001] , leaf;
lli m[100001] , val[100001] , gcd[100001];
bool vis[100001];


void init(lli n)
{
	REP(i , n) ar[i].clear() , vis[i] = 0;
	leaf.clear();
}

void dfs(int n)
{
	vis[n] = 1;
	bool isChild = true;
	
	for(int i=0;i<ar[n].size();i++)
	if(!vis[ar[n][i]])
	{
		isChild = false;
		int child = ar[n][i];
		
		gcd[child] = __gcd(gcd[child] , gcd[n]);
		dfs(child);
	}
	
	if(isChild)
	leaf.pb(n);
}
int main()
{
	lli n , x , y , v , mi , t;
	cin>>t;
	cin.tie(0);
	cout.tie(0);
	while(t--)
	{
		cin>>n;
		init(n);
		REP(i , n-1) cin>>x>>y , ar[x].pb(y) , ar[y].pb(x);
		
		REP(i , n) cin>>val[i] , gcd[i] = val[i];
		REP(i , n) cin>>m[i];
		
		dfs(1);
		sort(leaf.begin() , leaf.end());
		for(auto it : leaf)
		{
			mi = m[it];
			v = __gcd(gcd[it] , mi);
			
			cout<<v *  (mi / v - 1)<<' ';
		}
		
		cout<<endl;
	}
	
}
