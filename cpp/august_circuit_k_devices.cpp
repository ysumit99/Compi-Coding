//https://www.hackerearth.com/challenge/competitive/august-circuits-17/algorithm/k-devices-96ab1c02/
#include <bits/stdc++.h>

using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;

	scanf("%d %d",&n,&k);

	std::vector<long long> x;

	std::vector<long long> y;



	long long ele;
	//vector< pair<long long, long long> > loc;
	std::vector<long long> loc;

	for (int i = 0; i < n; ++i)
	{
		scanf("%lld",&ele);
		if(ele < 0)
			x.push_back(ele*-1);
		else
			x.push_back(ele);
	}

	for (int i = 0; i < n; ++i)
	{
		scanf("%lld",&ele);
		if(ele < 0)
			y.push_back(ele*-1);
		else
			y.push_back(ele);
	}

	float distance;
	long long temp;

	for (int i = 0; i < n; ++i)
	{
		/*if(x[i] >= y[i])
			loc.push_back(x[i]);
		else
			loc.push_back(y[i]);
			*/
		distance = sqrt(pow((float)x[i],2.0) + pow((float)y[i],2.0));
		temp = ceil(distance);
		loc.push_back(temp);

	}

	sort(loc.begin(),loc.end());


	//int count = 0;

	long long result;
	result = loc[k-1];
	printf("%lld\n",result);

	return 0;
}