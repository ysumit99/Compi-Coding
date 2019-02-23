#include<bits/stdc++.h>

using namespace std;

int main()
{

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	

	string str;

	cin >> str;

	vector<long int> v;
	
 
	stringstream ss(str);
 
	int i;
	while(ss >> i) {
		v.push_back(i);
 
		if(ss.peek() == ',')
			ss.ignore();
	}

		// for(int j=0;j < v.size();j++)
		// 	cout<<v.at(j)<<endl;

	long int res = 0;
	int size = v.size();
	res += v[size - 1];

	for (int i = 1; i < size - 1; ++i)
	{
		if((res - res/2 + v[i]) > res)
			res -= res/2, res += v[i];

		//cout << res << endl;
	}

	cout << res;
	return 0;
}