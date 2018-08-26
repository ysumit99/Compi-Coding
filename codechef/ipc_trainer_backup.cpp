//https://www.codechef.com/JULY17/problems/IPCTRAIN

#include <bits/stdc++.h>
using namespace std;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) \
	it = (c).begin(); it != (c).end(); ++it)
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
typedef long long ll;
const int INF = ~(1<<31); // large value to bound checking

const double EPS = 1e-9;  //Never check == for floats, always compare < or > 
const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
	return (a % b + b) % b; }
/*	
bool compare(const pair<int, pair<int, pair<int, int > > >&i, const pair<int, pair<int, pair<int, int > > >&j)
{
    //return i.second < j.second;
    if(i.first < j.first)
    	return true;
    else if(i.first == j.first)
    	return i.second.first > j.second.first;
    return false;
    
}*/
int main(){
	
	ios_base :: sync_with_stdio(false);
	cin.tie (0); // faster i/o

	int t;
	cin>>t;

	int n,d;
	int di,si,ti;

	while(t--)
	{
		vector<pair<int, pair<int, pair<int, int > > > > store;
		int arr[100001] = {0};//stores the count of starting day
		cin>>n>>d;
		for (int i = 0; i < n; ++i)
		{
			cin>>di>>ti>>si;
			//update count of starting day after every trainers input so that can be used to keep track of total trainers.
			//arr[di]++;

			store.push_back(make_pair(di,make_pair(si,make_pair(i,ti))));

		}
		sort(store.begin(),store.end());

		for(int i = 0; i<n;i++)
		{
		cout<<"starting day: "<<store[i].first;
		cout<<" happiness: "<<store[i].second.first;
		cout<<" trainer no: "<<store[i].second.second.first;
		cout<<" no. of lectures: "<<store[i].second.second.second<<endl;
		}
		//std::vector<int> v;//to store days on which someone arrives
		unsigned long long int sum = 0;
		int prev_trainer = store[0].first;
		arr[prev_trainer]++;//to store cumulative days offset
		//v.push_back(prev_trainer);
		for (int i = 1; i < n; ++i)
		{
			//arr[store[i].first]++;
			sum+= (store[i].second.first * store[i].second.second.second );//stores total sadness
			if(store[i].first == prev_trainer)
				arr[prev_trainer]++;
			else
				{
					arr[store[i].first] = arr[prev_trainer]+1;
					//v.push_back(store[i].first);

				}

			prev_trainer = store[i].first;

		}

		long long int total_happiness = 0;
		int start = store[0].first;
		for (int i = start; i <= d; i++)
		{   
			if(arr[i] != 0)
				start = i;

			
				int find = std::max_element(store.begin(), store.begin()+arr[start],
					    [](const pair<int, pair<int, pair<int, int > > >& pairA, const pair<int, pair<int, pair<int, int > > >& pairB)
					    {
					        return pairA.second.first < pairB.second.first;
					    }
				)-store.begin();

				//cout<<"find = "<<find;
				total_happiness += store[find].second.first;
				cout<<"happiness alloted "<<total_happiness<<endl;

				store[find].second.second.second--;
				if(store[find].second.second.second == 0)
					store[find].second.first = 0;

				//start = i;
			
		
		}

	}

		
	return 0;
	
}
