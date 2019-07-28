#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n,count_1 = 0,count_2 = 0, ele,result,temp;

	cin>>n;


	for (int i = 0; i < n; ++i)
	{
		cin>>ele;
		if(ele == 1)
			count_1++;
		else
			count_2++;
	}

	if(count_1 <= count_2)
		cout<<count_1<<"\n";
	else
	{
		cout<<count_2 + ((count_1 - count_2)/3)<<"\n";
		//temp = count_1 - count_2;


	}
	return 0;
}