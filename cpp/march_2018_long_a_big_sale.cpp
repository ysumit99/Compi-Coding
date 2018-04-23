#include <bits/stdc++.h>

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
		cin>>n;
		int p,q,d;
		double discount = 0, temp = 0, temp2 = 0;

		for (int i = 0; i < n; ++i)
		{
			cin>>p>>q>>d;

			temp = p + ((p * (d / 100.0)));
			temp2 = temp -  (temp * (d / 100.0));
			temp = p - temp2;
			discount += temp*q; 
			temp = 0;temp2 = 0;
		}

		// std::cout << std::fixed;
    	 std::cout << std::setprecision(15) << discount<<"\n";
		

	}
	return 0;
}