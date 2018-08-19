
#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	
	int t;

	cin>>t;

	ll int n, temp, temp2;

	while(t--)
	{
		int count_3 = 0;


		
		cin>>n;

		temp = n;

		std::vector<int> v;
		int flag;


		while(temp)
		{
			temp2 = temp % 10;
			v.push_back(temp2);
			if(temp2 == 3)
				count_3++;

			temp /= 10;
		}

		if(count_3 > 3)
			cout << n+1 <<endl;
		else if(count_3 == 3)
		{
			if(v.size() == 3)
				{
					cout<<"1"<<n<<endl;
					
				}
			else
			{
				for (int i = 0; i < v.size(); i++)
				{
					if(v[i] != 3)
					{
						if(v[i] != 9)
							{


								v[i]++;

								for (int j = v.size() - 1; j >= 0; j--)
								{
									cout<<v[j];
								}
								cout<<endl;



							}
						else
						{
							v[i] = 0;
							flag = i+1;
							while(flag < v.size())
							{
								if(v[flag] == 3)
									continue;
								if(v[flag] == 9)
									v[flag] = 0;
								else 
								{
									v[flag]++;
									break;
								}

								flag++;

							}

							if(flag == v.size())
							{
								cout<<"1";

								for (int j = v.size() - 1; j >= 0; j--)
								{
									cout<<v[j];
								}
								cout<<endl;
							}
							else
							{
								for (int j = v.size() - 1; j >= 0; j--)
								{
									cout<<v[j];
								}
								cout<<endl;
							}
						}
					}
				}
			}
		}
		




	}	

	return 0;
}