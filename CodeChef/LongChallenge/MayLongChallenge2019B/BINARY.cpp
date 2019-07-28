//https://www.codechef.com/MAY19B/problems/BINARY
//bruteforce
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t,n,z;
	bool swap = false;

	cin >> t;

	while(t--)
	{
		cin >> n >> z;

		std::vector<int> v(n);
		std::vector<int> v2(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> v[i];
			v2[i] = v[i];
		}


		for (int i = 0; i < z; ++i)
		{
			v = v2;
			//cout << "start of iteration i = " << i + 1 << endl;
			for (int j = 0; j < n - 1; j++)
			{
				if(v[j] == 0 && v[j+1] == 1)
					{
						v2[j] = 1;
						v2[j + 1] = 0;
						swap= true;
					}
				else
				{
					if(!swap)
						v2[j] = v[j];
					v2[j+1] = v[j+1];
					swap = false;
				}
			}
/*
			cout << endl;
			for (int j = 0; j < n; ++j)
			{
				cout << v2[j] << " ";
			}
			cout  << endl; */
		}

		for (int i = 0; i < n; ++i)
		{
			cout << v2[i] << " ";
		}

		//cout << "end of after changing 01 to 10 for z = " <<  i + 1 << endl; 
		cout << "\n";
	}




	return 0;
}