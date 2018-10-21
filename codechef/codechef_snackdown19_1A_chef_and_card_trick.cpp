//https://www.codechef.com/SNCK1A19/problems/CARDMGK
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);



	int flag, count;
	long long t,n;

	cin >> t;

	while(t--) {


		cin >> n;
		std::vector<long long> v(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
		}

		flag = 0,count = 0;

		for (int i = 1; i < n ; ++i)
		{
				if(v[i] < v[i-1])
				{

					if(flag == 0){
						flag = 1;
						count++;
					}

				}
				else
				{
					flag = 0;
				}
			
		}

		//cout << "count = " << count << endl;
		if(count > 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;


	}
	return 0;
}