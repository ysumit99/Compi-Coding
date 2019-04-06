//https://www.codechef.com/APRIL19B/problems/FENCE
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	long long int t, n,m,k,row,col, res;
	std::vector<long long int>::iterator itr;
	int ignore_upper_row_check = 0;

	cin >> t;

	while(t--)
	{
		cin >> n >> m >> k;
		std::vector<pair<long long int, long long int> > v;

		for (int i = 0; i < k; ++i)
		{
			cin >> row >> col;
			v.push_back(make_pair(row, col));
		}

		//sort
		sort(v.begin(), v.end());

		/*for (int i = 0; i < k; ++i)
		{
			//cout << " first = " << v[i].first << " second = " << v[i].second << endl;
		}*/
		/*

			1 3
			1 4
			3 2
			4 4
	
		*/
		res = 0;

		std::vector<long long int> v1;
		std::vector<long long int> v2;
		for (int i = 0; i < k; ++i)
		{
			if(i == 0)
			{
				v1.push_back(v[i].second);
				res += 4;
				continue;
			}

			if(v[i].first == v[i-1].first)//same row
			{
				//check if this is adjacent column
				itr = std::find (v1.begin(), v1.end(), v[i].second - 1); 
			    if (itr != v1.end()) 
			    	res += 2; //-1 for adjacent column and +3 for this cell
			    else
			    	res += 4;

			    //check with elements of upper row *only if ignore flag is not set
			    if(ignore_upper_row_check == 0)
			    {
			    	/*if(v2.size()) //check with upper only if size > 0
			    	{*/
			    		itr = std::find (v2.begin(), v2.end(), v[i].second); 
			    		 if (itr != v2.end()) 
			    		 	res -= 2; //-1 for previous row and -1 for this cell
			    	/*}*/
			    }
			    v1.push_back(v[i].second);

			}
			else // new row
			{
				if((v[i].first - v[i-1].first) > 1)
					ignore_upper_row_check  = 1;
				else
					{
						ignore_upper_row_check = 0;
						v2 = v1;

					}
				//copy v1 to v2
				
				//empty v1
				v1.erase(v1.begin(), v1.end());
				v1.push_back(v[i].second);
				res += 4;


				if(ignore_upper_row_check == 0) //check with upper
				{
					itr = std::find (v2.begin(), v2.end(), v[i].second); 
			    		 if (itr != v2.end()) 
			    		 	res -= 2; //-1 for previous row and -1 for this cell
				}
			}

		}

		cout << res << endl;

	}
	return 0;
}