
//https://www.codechef.com/PROC2018/problems/PROC18B
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;

	cin>>t;


	while(t--)
	{
		int n;

		double  sum;

		cin>>n;

		double ele;

		std::vector<double> v(n);

			for (int i = 0; i < n; ++i)
			{
				cin>>v[i];
				
			}

		sort(v.rbegin(), v.rend());

			
		sum = (v[0] + v[1])/2;

			
			for (int i = 2; i < n; i++)
				{
					sum = (v[i] + sum)/2;
				}
					
		cout<< setprecision(8) << fixed << sum << endl;



	}

	return 0;
}