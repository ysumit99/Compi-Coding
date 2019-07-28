//https://www.codechef.com/MAY19B/problems/MATCHS
//incomplete
#include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long int
using namespace std;


int calculate(ull larger, ull smaller,vector<ull> v, ull steps)
{
	ull larger2;

		while(v.size() > 0)
		{
			smaller = v[0];
			larger2 = larger;
			steps = 0;
			while(true)
			{
				larger2 -= smaller;
				steps++; 
				if(larger2 == 0)
					break;


				if(smaller > larger2)
					swap(smaller, larger2);
				calculate(larger2, smaller, v, steps);

			}
			cout << " larger = " << larger2 << "| smaller =  " << smaller <<  "| steps = " << steps;
			if(steps % 2 == 1)
				cout << "| Ari Wins" << endl;
			else
				cout << " | Rich Wins" << endl;

			v.erase(v.begin());
			cout << "vector size = " << v.size() << endl;
			cout << "*************************" << endl;

		}
		
}
int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t;

	cin >> t;

	ull n,m,larger,smaller,steps,temp;
	


	while(t--)
	{
		cin >> n >> m;
		larger = (n >= m) ? (n) : (m);
		smaller = (n <= m) ? (n) : (m);
		steps = 0;

		
		vector<ull> v; //contains multiples of smaller no less than or equal to larger no.

		temp = smaller;
		while(temp <= larger)
		{
			v.push_back(temp);

			temp += smaller;
		}

		calculate(larger, smaller, v,0);


	}

	return 0;
}