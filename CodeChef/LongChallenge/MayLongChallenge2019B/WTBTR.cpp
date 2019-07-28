//https://www.codechef.com/MAY19B/problems/WTBTR

#include<bits/stdc++.h>
#define ll long long int
#define PI 3.14159265
using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t,n,pos1, pos2;
	ll min = INT_MAX, temp;

	cin >> t;
	int flag = 0;

	//cout << "t = " << t << endl;
	
	while(t--)
	{

		//cout << "*****************testcase: " << t + 1 << "********\n";
		float res = 0;
		min = INT_MAX;
		cin >> n;
		flag = 0;
		//cout << "n = " << n << endl;
		vector<ll> x(n);
		vector<ll> y(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> x[i] >> y[i];
		}

/*
		for (int i = 0; i < n; ++i)
		{
			cout << x[i] << " " << y[i] << endl;
		}
*/


		for (int i = 0; i < n - 1; ++i)
		{
			for (int j = i + 1; j < n; ++j)
			{
				
					
					if(x[i] - x[j] != 0)
					{
						temp = (y[i] - y[j]) / (x[i] - x[j]);
						if(temp == 1 || temp == -1)
							{
								flag = 1;
								break;

							}
					}

					if(min > ( sqrt( pow(x[i] - x[j], 2) + (pow( y[i] - y[j], 2)) ) ) )
						{
							//cout << "min = " << min << " trt = " << trt << endl;
							min = ( sqrt( pow(x[i] - x[j], 2) + (pow( y[i] - y[j], 2)) ) );
							//cout << "min  after swap = " << min << " i = " << i << " j = " << j << endl;
							
							pos1 = i;
							pos2 = j;
						}

					
				
			}
			if(flag == 1)
				break;
		}

		
		

		if(flag == 1)
			cout << "0\n";
		else
		{
			if(x[pos1] - x[pos2] != 0)
				res = sin( atan(temp ) ) * (sqrt((pow(y[pos2] - y[pos1], 2) + (pow(x[pos2] - x[pos1], 2))) / 2));
			else
			{
				res = abs(y[pos1] - y[pos2])/2.00;
			}
			std::cout << std::setprecision(9) << res << '\n';
		} 
	
		//cout << "*****************testcase: " << t + 1 << "********\n";

	}

	return 0;
}