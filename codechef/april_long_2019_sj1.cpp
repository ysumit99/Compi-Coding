//https://www.codechef.com/APRIL19B/problems/SJ1

#include<bits/stdc++.h>
#define ll long long int
#define LOOP(i,n) for (ll i = 1; i <= n; i++)

using namespace std;

vector<int>adj[100001];
ll value[100001];
ll parameter[100001];
ll gcdArr[100001];
bool visited[100001];
vector<int> leaf;


void dfs(int u)
{
    visited[u]=true;
    bool isLeaf = true;
   
	
	for(auto child : adj[u])
	{
		
	    if(!visited[child])
	    {	
	    	isLeaf = false;
	    	gcdArr[child] = __gcd(gcdArr[child] , gcdArr[u]);
	        dfs(child);
		    
	    }

	}

	
	 if(isLeaf)
		leaf.push_back(u);
	
}


int main(int argc, char const *argv[])
{

	ios_base :: sync_with_stdio(false);
	cin.tie (0);
	cout.tie (0);
	int t;

	int n, u, v;
	ll gcdPar;

	cin >> t;

	while(t--)
	{

		//Reset memory 
		memset(adj,0,sizeof(adj));
		memset(value,0,sizeof(value));
		memset(parameter,0,sizeof(parameter));
		memset(gcdArr,0,sizeof(gcdArr));
		memset(visited,false,sizeof(visited));
		memset(&leaf,0,sizeof(leaf));


		cin >> n;


		for (int i = 0; i < n - 1; ++i)
		{
			cin >> u >> v;

			adj[u].push_back(v);
			adj[v].push_back(u);

		}

		for (int i = 1; i <= n ; ++i)
			cin >> value[i], gcdArr[i] = value[i];

		for (int i = 1; i <= n ; ++i)
			cin >> parameter[i];


		dfs(1);

		/*LOOP(i, n) cout << "for i = " << i << "; gcd = " <<  gcdArr[i] << endl;

		cout << endl;

		for (int i = 0; i < leaf.size(); ++i)
			cout << "Leaf = " << leaf[i] << ", ";
*/
		sort(leaf.begin(), leaf.end());

		for (auto itr : leaf)
		{
			gcdPar = __gcd(gcdArr[itr], parameter[itr]);

			cout << gcdPar * (parameter[itr] / gcdPar - 1) << " ";
		}

		cout << endl;
	}
	return 0;
}