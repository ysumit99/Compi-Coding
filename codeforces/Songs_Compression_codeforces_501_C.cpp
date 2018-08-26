#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	long long int n,m, sum = 0, a,b;
	std::vector<long long int> v;
	cin>>n>>m;


	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		sum += a;
		cin>>b;
		//store the difference between compressed and uncompressed
		v.push_back(a-b);
	}

	//if total size doesn't exceed the limit without compressing
	if(sum <= m)
	{
		printf("0");
		return 0;
	}

	//sort in descending order
	sort(v.rbegin(), v.rend());

	//stores minimum memory that needs to be compressed
	long long int diff = sum - m;

	for (int i = 0; i < n; ++i)
	{
	

		diff -= v[i];
		if(diff <= 0)
		{
			printf("%d",i+1);
			return 0;
		}

	}

	//if not possible even after compressing every song.
	printf("-1");

	return 0;
}