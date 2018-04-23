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

		std::vector<long int> fingers(n);
		std::vector<long int> gloves(n);
		int flag_front = 0, flag_back = 0;


		for (int i = 0; i < n; ++i)
		{
			cin>>fingers[i];
		}

		for (int i = 0; i < n; ++i)
		{
			cin>>gloves[i];
			if(gloves[i] < fingers[i])
				flag_front = 1;
			if(gloves[i] < fingers[n-1-i])
				flag_back = 1;
		}

		if(flag_front == 0 && flag_back == 0)
			cout<<"both\n";
		else if(flag_back == 0)
			cout<<"back\n";
		else if(flag_front == 0)
			cout<<"front\n";
		else
			cout<<"none\n";

		

	}
	return 0;
}