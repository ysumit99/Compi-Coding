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

			int count_left = 0,count_right = 0;
			int count_left_consecutive_max = 0 , count_right_consecutive_max = 0;

			char prev = str[0];
			if(prev == '<')
				{
					count_left = 1;
					count_left_consecutive_max = 1;

				}
			else if(prev == '>')
				{
					count_right = 1;
					count_right_consecutive_max = 1;

				}

			int i = 1;
			while(str[i]!='\0')
			{
				if(str[i] == prev && str[i] != '=')
				{
					if(str[i] == '<')
						{
							count_left++;
							if(count_left_consecutive_max < count_left )
								count_left_consecutive_max = count_left;


						}
				    else if(str[i] == '>')
					    {
					    	count_right++;
					    	if(count_right_consecutive_max < count_right)
					    		count_right_consecutive_max = count_right;

					    }
				}
				else if(str[i] != prev && str[i]!= '=')
				{
					if(str[i] == '<')
						{
							count_left = 1;
							count_right = 0;
							if(count_left > count_left_consecutive_max)
								count_left_consecutive_max = count_left;

						}
					else
						{
							count_right = 1;
							count_left = 0;
							if(count_right > count_right_consecutive_max)
								count_right_consecutive_max = count_right;

						}
				}
				if(str[i]!='=')
					prev = str[i];
				i++;

			}
			int result;
			(count_left_consecutive_max >= count_right_consecutive_max) ? (result = count_left_consecutive_max):(result = count_right_consecutive_max);

			cout<<result+1<<endl;
			
		}
	return 0;
}