//https://www.codechef.com/LTIME71B/problems/MINARRS
//Accepted
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t;

	cin >> t;
	int n;

	
	while(t--)
		{
			cin >> n;
			std::vector<int> v(n);

			for (int i = 0; i < n; ++i)
			{
				cin >> v[i];

			}


			

			ll sum = 0, x = 1;
			int  set_count, notset_count;

			
			for (int i = 0; i <= 30; ++i)
			{
				set_count = 0;
				notset_count = 0;

				for (int j = 0; j < n; ++j)
				{
					if((v[j] & (x << i)) == 0)
						notset_count++;
					else
						set_count++;
				}

				if(set_count > notset_count)
					sum += notset_count * (x << i);
				else
					sum += set_count * (x << i);
				
			}

			cout << sum << endl;

		}

	return 0;
}


//Partially Accepted (Brute Force)
/*#include<bits/stdc++.h>

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

	int t;

	cin >> t;
	int n;

	
	while(t--)
		{
			cin >> n;

			std::vector<long long int> v(n);
			//std::vector<long long int> v2(n);

			for (int i = 0; i < n; ++i)
			{
				cin >> v[i];

			}
			long long int min,sum = 0,ele,max = 0;
			for (int i = 0; i < n; ++i)
			{
				long long int temp = v[i];
				for (int j = 0; j < n; ++j)
				{
					v2[j] = v[j];
					
				}
				sum = 0;
				for (int j = 0; j < n; ++j)
				{
					ele = v[j];
					ele ^= temp; 
					cout << "v[" << j + 1 << "] = " << ele << " | diff = " <<  ele - v[j] << endl;
					sum += ele;
				}
				cout << "sum = " << sum << endl;
				if(i == 0)
					min = sum;
				if(sum < min)
					min = sum;
				if(sum > max)
					max = sum;
			}

			cout << "min = " <<  min << endl;
			cout << "max = " <<  max << endl;

		}

	return 0;
}*/

