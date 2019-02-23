#include<bits/stdc++.h>

using namespace std;

int main()
{

	// ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	int n,i;
	cin >> n;

	string str;

	cin >> str;

	vector<long int> v;
	vector<long int> v2;
 
	stringstream ss(str);
 
	
	while(ss >> i) {
		v.push_back(i);
 
		if(ss.peek() == ',')
			ss.ignore();
	}

	for(int i = 0; i < v.size(); i++)
	{


		int remain,  oct = 0;
	    while (v[i] != 0)
	    {
	        remain = v[i] % 8;
	        v[i] /= 8;
	        oct += remain;
	        
	        
	    }
	    v2.push_back(oct);
	}

	// for(int j=0;j < v2.size();j++)
	// 	cout<<v2.at(j)<<endl;

	int count = 0;

	for(int i = 0; i < (v2.size() - 1); i++)
	{
		for(int j = i+1 ; j < v2.size(); j++)
		{
			if(v2[i] > v2[j])
				count++;
		}
	}

	cout << count;



	return 0;
}