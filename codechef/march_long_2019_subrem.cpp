//https://www.codechef.com/APRIL19B/problems/SUBREM
#include<bits/stdc++.h>

using namespace std;



int main(int argc, char const *argv[])
{
	
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t,u,v;
	long long int n,x,cost, res;
	std::vector<long long int>::iterator itr;
/*	std::vector< pair <int, int> >::iterator itr2;*/
	int pos;

	cin >> t;

	while(t--)
	{
		
		cost = 0;
		cin >> n >> x;
		std::vector<long long int> value(n);
		std::vector<pair<int, int> > edge;
		int parent[n] = {0}; //contains parent of each node

		for (int i = 0; i < n; ++i)
			cin >> value[i];
			
		std::vector<std::vector<int>> mapping(n, std::vector<int>());
			
    	for (int i = 0; i < n -1; ++i)
		{
			cin >> u >> v;
			edge.push_back(make_pair(u, v));
			mapping[u-1].push_back(v);
			parent[v-1] = u-1;
			
		} 

		sort(edge.rbegin(), edge.rend());

		
		/*for (int i = 0; i < edge.size() ; ++i)
		{
			cout << edge[i].first << " " << edge[i].second << endl;
		}
		
*/  
       /* cout << "****************************" << endl;
		 for(int i = 0; i < n; i++)
	      {
	        
	          for(int j = 0; j < mapping[i].size(); j++)
	          {
	              cout << mapping[i][j] <<  " ";
	          }
	          cout << endl;
	      }

		 cout << "****************************" << endl;*/



		for (int i = 0; i < n - 1; ++i)
		{
			value[edge[i].first - 1] += value[edge[i].second - 1];
		}

		/*for (int i = 0; i < n ; ++i)
		{
			cout << value[i] << " ";
		}*/

		res = value[0];
		while(true)
		{
			itr = std::min_element(std::begin(value), std::end(value));
    		//cout << "min = " << *itr << endl;
    		if(*itr >= 0)
    			break;
    		//position of smallest value;
    		pos = distance(std::begin(value), itr);
    		//cout << "pos = " << pos << endl;
    		cost += x;
    		//cout << "cost = " << cost << endl;
    		if((*itr * -1) - cost <= 0)
    			break;
    		res += (*itr * -1) - cost;
    		//cout << "res = " << res << endl;
    		//cout << "parent =  " << parent[pos] << endl;
    		value[parent[pos]] -= *itr;
    		//cout << "value[parent[" <<pos << "]] = " << value[parent[pos]] << endl;
    		
    		value[pos] = 0;

    		if(pos == 0)
    			break;
    		//make values = 0 for all children of vertex ""
    		for(int i = 0 ; i < mapping[pos].size(); i++)
    		{
    			value[mapping[pos][i] - 1] = 0;
    			//cout << "value zero for " << 	value[mapping[pos][i] - 1] << endl;
    		}


    	}

		//cout << "res = " << res;
    	cout << res << endl;
	

	}
	

	
	return 0;
}