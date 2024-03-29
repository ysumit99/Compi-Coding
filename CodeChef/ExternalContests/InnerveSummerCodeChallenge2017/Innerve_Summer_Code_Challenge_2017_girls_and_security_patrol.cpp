//https://www.codechef.com/ISCC2017/problems/PATROL
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

/*
	float a = 1.0, b = 1.0;
	if (a - b) < EPS 
 	// To do When EQUAL
	else
	// To do When ~EQUAL 
*/


const double pi = acos(-1);
typedef unsigned long long ull;
typedef vector<vi> vvi;
typedef vector<vii> vvii;
template <class T> T smod(T a, T b) {
	return (a % b + b) % b; }
	
int main(){
	
	ios_base :: sync_with_stdio(false);
	cin.tie (0); // faster i/o
	
		
		int t;
		long long int u,v,x;
		float result;

		while(t--)
		{
			cin>>u>>v>>x;

			result = x/(u+v);

			cout<<result<<endl;
		}
	return 0;
}