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
		int m,x,y,m2;
		cin>>m>>x>>y;

		int result,temp;



		
		std::vector<int> v;
		std::vector<int> v1;
		std::vector<int> v2;

		for (int i = 0; i < m; ++i)
		{
			v.push_back(i+1);
		}
		m2 = m;

		for (int i = 0; i < (m2/2) - 1 ; ++i)
		{
			
			for (int j = 0; j < m  ; ++j)
			{
				if(j %2 == 0)
					v1.push_back(v[j]);
				else
					v2.push_back(v[j]);
			}


			m/=2;
			temp = m*x/y;

			v1.erase(v1.begin() + temp );
			v2.erase(v2.begin() + temp );

			

			v.clear();
			for (int j = 0; j < m*2-2; ++j)
			{
				if(j % 2 == 0)
					v.push_back(v1[j]);
				else
					v.push_back(v2[j]);

			}
			m*=2;
			m-=2;
			v1.clear();
			v2.clear();


		}
		result = v[0] ^ v[1];
		printf("%d\n",result);
	}
	
	
	return 0;
}