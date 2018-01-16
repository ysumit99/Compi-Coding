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
		int x,n;

		cin>>x>>n;

		if(n < 4)
			cout<<"impossible\n";
		else
		{
				std::vector<int> arr;
				std::vector<int>::iterator it;
				

				//arr[x] = '2';
				//arr[0] = '5';

				long long int sum = (n*(n+1))/2;
				long long int temp,sum2 = 0;
				int skip = x;
						
				long long int special;
				
					temp = (sum - x);
					if(temp % 2 != 0)
						cout<<"impossible\n";
					else
					{
						//cout<<"temp/2 = "<<temp/2<<endl;
						//int i = n-1;
						for (int i = n; i >= 1 ; i--)
						{
							if((i + sum2) <= (temp/2) )
							{
								if(i != skip)
									{
										//cout<<"selected = "<<i<<endl;
										sum2 += i;
										arr.push_back(i);
										//arr[i] = '1';
									}
							}
							else
							{
								//cout<<"done"<<endl;
								{
									special = i;
									break;
								}
							}
						}

						long long int diff = (temp/2) - sum2 ;

						long long int sum3 = 0;
						
						for (int i = 1; i <= special; ++i)
						{
							
						}
						
						
						

						for (int i = 1; i <= n; ++i)
						{
							it = find (arr.begin(), arr.end(), i);
							if (it != arr.end())
								cout<<1;
							else if(i == skip)
								cout<<2;
							else
								cout<<0;

						}
						cout<<"\n";

					}
			
		}
		
		
	}
	return 0;
}