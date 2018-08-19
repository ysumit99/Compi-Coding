//https://www.hackerrank.com/contests/moodys-analytics-2018-university-codesprint/challenges/mean-normalization
#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n, m;
	double ele, sum, temp, min = 100000000000000, average;

	
	
	std::vector<double> stock;
	std::vector<double> avg;
	//std::vector<int> count;



	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		sum = 0; 
		cin>>m;
		//count.push_back(m);

		for (int j = 0; j < m; ++j)
		{
			cin>>ele;

			stock.push_back(ele);

			sum += ele;

		}

		sum /= m;
		avg.push_back(sum);

	}
	ll int size = stock.size();

	for (int i = 0; i < avg.size(); ++i)
	{
		temp = 0;
		average = avg[i];

		for (int j = 0; j < size; ++j)
		{
			temp += abs(stock[j] - average);
		}
		//cout<<"temp = "<<temp<<endl;

		if(temp < min)
			min = temp;
	}

	cout << fixed << setprecision(8) << min;
	

	return 0;
}