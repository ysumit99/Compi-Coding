//https://www.codechef.com/NOV18B/problems/PRDRG
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n,temp;

	cin >> t;

	
		std::vector<int> v(26);
		std::vector<int> v2(26);

		for (int i = 1; i <= 25 ; ++i)
		{
			temp = pow(2,i);
			//cout << temp << endl;

			v[i] = temp;

			if(i == 1 || i == 2)
			{
				v2[i] = 1;
				continue;
			}

			v2[i] = (v2[i-1] + v2[i-2]*2);
			
		}

		while(t--)
		{
			cin >> n;

			cout << v2[n] << " " << v[n] << " ";
		}



		
	
	return 0;
}