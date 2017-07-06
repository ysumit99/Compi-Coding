//https://www.codechef.com/problems/TACHEMIS
//medium
#include <bits/stdc++.h>
using namespace std;
template <class T> int size(const T &x) { return x.size(); }
#define rep(i,a,b) for (__typeof(a) i=(a); i<(b); ++i)
#define iter(it,c) for (__typeof((c).begin()) \
	it = (c).begin(); it != (c).end(); ++it)
typedef pair<char,int> ii;
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
	int k;
	cin>>t;
	int ele;//stores the number of occurences of a  char
	char ch;//stores the char

	while(t--)
	{
		vii compress;//vector of pairs to stores compressed string
		vi length;
		
		cin>>k;


		for (int i = 0; i < k; ++i)
		{
			cin>>ch>>ele;
			compress.push_back(make_pair(ch,ele));

		}
		int result = 0;//stores the final count
		//if k = 1 0r k = 2 , final answer will be the sum of each blocks palindromes,no other possibility
		//Each block's(i.e. for every k) palindromes can be calcuated using (n*n+1)/2 )
		if(k<3)
			{
				for (int i = 0; i < k ; ++i)
				{
					result += (compress[i].second*(compress[i].second+1))/2;
				}
			}
		else//if k >= 3 there is a possibility of palindromes due to overlap of blocks(foreg: AABBAA here k = 3)
			{
			//every iteration calculates no. of palindromes in the given block and also the palindrome due to overlap
			for (int i = 0; i < k ; ++i)
				{	//for first and last block there is no palindrome possible due to overlap of >two blocks
					if(i == 0 || i == k - 1)
						result += (compress[i].second*(compress[i].second+1))/2;
					else
						{
							result += (compress[i].second*(compress[i].second+1))/2;
							int flag = 0;
							int j = i;
							int p = 1;
							while(flag == 0)
							{
								if(j-p < 0 || j+p >=k )
								{
									flag = 1;
									break;
								}
								else
								{
									if(compress[j-p].first == compress[j+p].first)
									{
										result +=min(compress[j-p].second,compress[j+p].second);
									}
									else
										flag = 1;
								}
								p++;
							}

						} 
				}
			}
			cout<<result<<endl;
	}
	

	return 0;
}