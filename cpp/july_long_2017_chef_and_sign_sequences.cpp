//https://www.codechef.com/JULY17/problems/CHEFSIGN
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
	
int main(){
	
	ios_base :: sync_with_stdio(false);
	cin.tie (0); // faster i/o
		int t;
		cin>>t;

		string str;
		while(t--)
		{
			cin>>str;

			int i = 0;
			int temp = 0;
			int count = 0;
			while(str[i]!='\0')
			{
				if(i == 0)
				{
					if(str[i] == '=')
					{
						
						count = 1;
						temp = 1;
					}
					else if(str[i] == '<')
					{
						count = 2;
						temp = 2;
					}
					else
					{
						count = 1;
						temp = 2;
					}

				}
				else
				{

					if(str[i] == '<')
					{
						count++;
						if(count > temp)
							temp = count;

					}
					else if(str[i] == '>')
					{
						count--;
						if(count == 0)
						{
							count++;
							temp++;
							
						}
					}
				}
				i++;
			}
			cout<<temp<<endl;
		}
	return 0;
}