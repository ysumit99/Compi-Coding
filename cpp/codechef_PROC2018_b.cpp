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

		float temp = 0.00, sum = 0.00;

		cin>>n;

		long long int ele;

		std::vector<long long int> v;

		for (int i = 0; i < n; ++i)
		{
			cin>>ele;


			v.push_back(ele);
		}

		sort(v.rbegin(), v.rend());

		
			sum = ( ((float)v[0])/2.0000000000 + ((float)v[1])/2.0000000000  );;
			cout<<sum<<"\n";
			for (int i = 2; i < n; i++)
			{
				
					sum = ( sum/2.0 + ((float)v[i])/2.0  );
					cout<<sum<<"\n";
				//sum += t
			}

		

		printf("%.10f\n",sum);



	}

	return 0;
}