#include<bits/stdc++.h>
using namespace std;

long long int make_zero(int &root_index, std::vector<std::vector<int>> &mapping,	std::vector<long long int> &value )
{
    if(mapping[root_index].size() == 0)
       {
           //cout << "Inside make_zero & if root = " << root_index <<  " mapping[root_index].size() = " << mapping[root_index].size() << endl; 
           value[root_index] = 0;
           //cout << "value[root_index] = " << value[root_index] << endl;
           return 0;
           
       }
    else
        {
             //cout << "Inside make_zero & else root= " << root_index <<  " mapping[root_index].size() = " << mapping[root_index].size() << endl; 
            for(int i = 0 ; i < mapping[root_index].size(); i++)
            {
                //cout << "mapping[root_index][i] = " << mapping[root_index][i] << endl;
                 value[root_index] = 0;
                 value[mapping[root_index][i]] = 0;
                //cout << " value[mapping[root_index][i]] = " <<  value[mapping[root_index][i]] <<  endl;
               
                 make_zero(mapping[root_index][i], mapping, value);
                 
            }
            //return 0;
            
        }
}

int main(int argc, char const *argv[])
{
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t,u,v, prev;
	long long int n,x,cost, res;
	std::vector<long long int>::iterator itr;
/*	std::vector< pair <int, int> >::iterator itr2;*/
	int pos, count;

	cin >> t;

	while(t--)
	{
		count = 1; //stores count of nodes whose parent have been finalized
		cost = 0;
		cin >> n >> x;
		std::vector<long long int> value(n + 1); //stores value of single node
		//std::vector<long long int> subtree_value(n + 1); //stores value of subtree
		std::vector<pair<int, int> > edge;
		std::vector<int> order;
		int parent[n + 1] = {0}; //contains parent of each node
		value[0] = 0;
		for (int i = 1; i <= n; ++i)
			{
				cin >> value[i];
				//subtree_value[i] = value[i];

			}
			
		std::vector<std::vector<int>> mapping(n + 1, std::vector<int>());
		std::vector<std::vector<int>> mapp(n + 1, std::vector<int>()); //temporary mapping
			
    	for (int i = 0; i < n -1; ++i)
		{
			cin >> u >> v;
			edge.push_back(make_pair(u, v));
			//Not Sure which one is parent and child so store both in each other
			mapp[u].push_back(v);
			mapp[v].push_back(u);
			
		} 

		parent[1] = -1; //No Parent of Root Node
		//Nodes having direct link with root
		order.push_back(1);
		for(int i = 0; i < mapp[1].size(); i++)
		{
			parent[mapp[1][i]] = 1; //Parent finalized !
			order.push_back(mapp[1][i]);
			count++;
		}
	

		while(count < n)
		{
			for (int i = 2; i <= n; ++i)
			{
				if(count == n)
					break;
				if(parent[i] != 0) //if parent finalized
				{
					for (int j = 0; j < mapp[i].size(); ++j)
					{
						if(parent[mapp[i][j]] == 0)
						{
							parent[mapp[i][j]] = i;
							order.push_back(mapp[i][j]);
							count++;
						}

						if(count == n)
							break;
					}
				}
				else 
				{
					for (int j = 0; j < mapp[i].size(); ++j)
					{
						if(parent[mapp[i][j] != 0])
						{
							parent[i] = mapp[i][j];
							order.push_back(i);
							count++;
							break;
						}
					}
				}
			}
		}

		/*for (int i = 1; i <= n; ++i)
		{
			cout << "parent[" << i << "] = " << parent[i] << endl; 
		}*/

		for (int i = 2; i <= n ; ++i)
			{
				mapping[parent[i]].push_back(i);
				//subtree_value[parent[i]] += value[i];

			}
		

		/*for(int i = 0; i < n; i++)
	      {
	        
	          for(int j = 0; j < mapping[i].size(); j++)
	          {
	              cout << mapping[i][j] <<  " ";
	          }
	          cout << endl;
	      }
		*/
/*
			for (int i = 0; i < n ; ++i)
			{
				cout << "order = " << order[i] << endl;
			}*/

		for (int i = n - 1; i > 0; i--)
		{
			
				value[parent[order[i]]] += value[order[i]];
		}

		// for (int i = 1; i <= n ; ++i)
		// {
		// 	cout << "value[" << i << "] = " << value[i] << endl;
		// }


		res = value[1];
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
    		//value[parent[pos]] -= *itr;
		prev = parent[pos];
		while(prev != -1)
		{
			value[prev] -= *itr;
			
			prev = parent[prev];


		}
    		//cout << "value[parent[" <<pos << "]] = " << value[parent[pos]] << endl;
    		
    		//value[pos] = 0;
           // cout << "pos = " << pos << endl;
    	/*	if(pos == 0)
    			break;*/
    		//make values = 0 for all children of vertex ""
    	/*	for(int i = 0 ; i < mapping[pos].size(); i++)
    		{
    			value[mapping[pos][i] - 1] = 0;
    			//cout << "value zero for " << 	value[mapping[pos][i] - 1] << endl;
    		}*/
    		make_zero(pos, mapping, value);


    	}
        
       /* for(int i = 0; i < n; i++)
        {
            cout << "value[" << i <<"] = " << value[i] << " ";
        }
        cout << endl;*/
		//cout << "res = " << res;
    	cout << res << endl;

	}
	return 0;
}