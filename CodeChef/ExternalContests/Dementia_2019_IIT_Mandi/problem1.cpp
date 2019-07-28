//https://www.codechef.com/DEMA2019/problems/MEDIC
//Accepted
#include<bits/stdc++.h>

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

	while(t--)
	{



	string date;

	cin >> date;

	int month = (date[5] - '0') * 10;
	month += date[6] - '0';
	//cout << month << endl;

	int day = (date[8] - '0') * 10;
	day += date[9] - '0';
	//cout << day << endl;
	int res = 0;

	//check if leap year
	bool isLeap = 0;

	int year = (date[0] - '0')*1000;
	year += (date[1] - '0')*100;
	year += (date[2] - '0')*10;
	year += (date[3] - '0');

	//cout << year << endl;

	if(year % 4 == 0)
	{
		if(year % 100 != 0)
			isLeap = 1;
		if(year % 400 == 0)
			isLeap = 1;
	}

	//cout << isLeap << endl;



	if(month == 1 || month == 3 || month ==  5 || month == 8 || month == 7 || month == 10 || month == 12)
	{
		res = (31 - day)/2 + 1;
		//cout << res << endl;
	}
	else if(month == 2 && isLeap == 1)
	{
		res = (29 - day)/2 + 1;
		//cout << res << endl;
	}
	else if(month == 2)
	{
		res = (28 - day)/2 + 1;
		if(day % 2 == 0)
			res += 15;
		else
			res += 16;
	}
	else
	{

		res = (30 - day)/2 + 1;
		if(day % 2 == 0)
			res += 15;
		else
			res += 16;
	}

	cout << res << endl;


}
	
	return 0;
}