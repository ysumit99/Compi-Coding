#include<bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{

	ios_base :: sync_with_stdio(false);
	cin.tie (0); // faster i/o*/

	int t;

	cin >> t;
	int n,res;
	long long int X,temp;
	string str;


	while(t--)
	{

		cin >> n >> X;
		temp = X;
		cin >> str;
		std::vector<long long int> v;
		 std::vector<long long int>::iterator itr;
		v.push_back(X);
		//int arr[1000101] = {0};
		//arr[X] = 1;
		res = 1;

		for (int i = 0; i < n; ++i)
		{
				if(str[i] == 'L')
					temp--;
				else
					temp++;
			itr = std::find (v.begin(), v.end(), temp); 
		    if (itr == v.end()) 
		    { 
		        res++;
		        v.push_back(temp);

		    } 
		    
   
		}

		cout << res << endl;

	}
	return 0;
}