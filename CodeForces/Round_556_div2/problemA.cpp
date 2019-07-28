////https://codeforces.com/contest/1150/problem/A
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

	////cout << "hello world";

	int n,m,r;

	cin >> n >> m >> r;


	std::vector<int> buy(n);
	std::vector<int> sell(m);
	int min_buy_price = INT_MAX, max_sell_price = 0;

	for (int i = 0; i < n; ++i)
	{
		cin >> buy[i];

		if(buy[i] < min_buy_price)
			min_buy_price = buy[i];
	}

	for (int i = 0; i < m; ++i)
	{
		cin >> sell[i];

		if(sell[i] > max_sell_price)
			max_sell_price = sell[i];
	}

	int stocks_purchased = 0;

	//cout << "min_buy_price = " <<  min_buy_price << "  max_sell_price = " << max_sell_price <<  endl;
	//base case
	if(min_buy_price >= max_sell_price)
		cout << r;
	else
	{
		stocks_purchased =  (r/min_buy_price);
		//cout << "stocks_purchased = " << stocks_purchased << endl;
		r -= stocks_purchased * min_buy_price;
		//cout << "r = " << r << endl;
		r += stocks_purchased * max_sell_price;
		//cout << "r = " << r << endl;
		cout << r;
	}
	
	return 0;
}



