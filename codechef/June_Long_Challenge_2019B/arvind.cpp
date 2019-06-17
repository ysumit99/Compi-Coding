

#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	//std::vector<long long int> v;
	set<long long int> s;

	//precompute all special numbers
	for(int i = 1 ; i <= 12; i++)
	{
		for (int j = 1; j <= 12 ; ++j)
		{
			//v.push_back(pow(3,i) + pow(5,j));
			s.insert(pow(3,i) + pow(5,j));
		}
	}


	for(int i = 1 ; i <= 12; i++)
	{
		for (int j = 1; j <= 12 ; ++j)
		{
			//v.push_back(pow(5,i) + pow(7,j));
			s.insert(pow(5,i) + pow(7,j));
		}
	}


	

	for(int i = 1 ; i <= 12; i++)
	{
		for (int j = 1; j <= 12 ; ++j)
		{
			//v.push_back(pow(3,i) + pow(7,j));
			s.insert(pow(3,i) + pow(7,j));
		}
	}

	//end of precomputation
	


	//sort(v.begin(), v.end());

	
	std::vector<long long int> v2;

	set <long long int> :: iterator itr; 
	//long long int prev;
	for (itr = s.begin(); itr != s.end(); ++itr) 
    { 
       //cout <<*itr << endl; 
       if(v2.size() == 380) //only 380 special numbers are possible
       	break;
       v2.push_back(*itr); //just copying set to a vector. just to simplify
        
    } 

    // for (int i = 0; i < v2.size(); ++i)
    // {
    // 	cout << v2[i] << endl;
    // }


    //test cases start here

    int t;

    cin >> t;

    while(t--)
    {
    	long long int number, increasing_cost, decreasing_cost;

    	cin >> number >> decreasing_cost >> increasing_cost;
    	long long int min_cost = 0;

    	cout << "number = " << number << " increasing_cost = " << increasing_cost << " decreasing = " << decreasing_cost << endl;

    	for (int i = 0 ; i < v2.size(); i++) 
	    { 
	       if(v2[i] == number)
	       	{
	       		cout << "0\n"; //already a special number
	       		break;
	       		//return 0;

	       	}
	       	else if(v2[i] > number)
	       	{

	       		if(i!=0) //check array out of bound
	       		{
	       			cout << "test" << endl;
	       			min_cost = (v2[i] - number) * increasing_cost; //increasing cost

	       			if( min_cost > (number - v2[i-1]) * decreasing_cost  ) //if decreasing cost is less
	       				min_cost = (number - v2[i-1]) * decreasing_cost; 
	       		}
	       		else
	       		{
	       			min_cost = (v2[i] - number) * increasing_cost; //increasing cost
	       		}
	       		cout << min_cost;
	       		break;
	       		//return 0;
	       	}
	    } 
    }

    




	return 0;
}