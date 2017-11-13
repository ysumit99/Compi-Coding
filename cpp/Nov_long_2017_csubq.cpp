#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n,q,temp;
	long long int L,R;

	scanf("%d %d %lld %lld",&n,&q,&L,&R);

	//long long int arr[n] = {0};
	std::vector<long long int> arr(n,0);
	long long int a,b,c,largest_ele , largest_pos , flag = 0,sum,count,count2=0;
	std::vector<int> v;
	std::vector<int> v2;
	std::vector<int> :: iterator itr;


	while(q--)
	{
		scanf("%lld %lld %lld",&a,&b,&c);

		if(a == 1)
		{
			arr[b-1] = c;

		}
		else
		{
			largest_ele = -1,flag = 0,sum = 0,count2 = 0;
			for (int i = b-1; i <= c-1 ; ++i)
			{
				if(arr[i] == largest_ele)
				{
					if(arr[i] != arr[i-1])
						v.push_back(i);
					else if(arr[i] == arr[i-1])
						count2++;
				}
				else if(arr[i] > largest_ele && arr[i] >= L && arr[i] <= R)
				{
					largest_ele = arr[i];
					//v.erase(v.begin()+count-1,v.end()-1);
					v.resize(count);
					v.push_back(i);
					flag = 1;
					count2 = 0;
				}
				else if(arr[i] > R)
				{
					v2.push_back(i);
					count = v.size();
					largest_ele = -1;
					sum+=count2;
				}


			}
			//cout<<"largest = "<<largest_ele<<endl;
			if(flag == 0)
				printf("0\n");
			else
			{
				if(v2.size() == 0)
				{
					for (int i = 0; i < v.size(); ++i)
					{
						if(i == 0)
							sum+=((c-1-v[i] + 1 ) * (v[i] - (b - 1) + 1));
						else
							sum+=((c-1 - v[i] + 1) * (v[i] - v[i-1]));
						
					}
				}
				else
				{
					//itr = v2.begin();
					for (int i = 0; i < v.size(); ++i)
						{
							itr = std::lower_bound (v2.begin(), v2.end(), v[i]);
							if(itr != v2.end() && itr - v2.begin() != 0)
								{
									temp = *itr;
									itr--;

									sum += ((temp - 1 - v[i] + 1) * (v[i] - *itr));

								}
							else if(itr != v2.end() && itr - v2.begin() == 0)
								sum+= ((*itr - 1 - v[i] + 1) * (v[i] - (b - 1) + 1));
							else if(itr == v2.end())
								sum+= ((1 + c-1 -v[i])*(v[i] - v2[v2.size() - 1] )) ;
						}	
				}
				printf("%lld\n",sum);
			}
			
			v.clear();
			v2.clear();

		}
	}

	/*for (int i = 0; i < n; ++i)
	{
		cout<<"arr["<<i<<"] = "<< arr[i]<<"\n";
	}
	*/


	return 0;
}