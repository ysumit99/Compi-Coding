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
		int n;

		cin>>n;

		std::vector<unsigned long long int> v;
		std::vector<unsigned long long int> first_car;

		unsigned long long int ele,first,c,d,s,sum = 0;
		//double time,total_time,total_time_last,result,sum = 0;
		double result;

		
		for (int i = 0; i < n; ++i)
		{
			cin>>ele;
			sum += ele;
			v.push_back(ele);
			first_car.push_back(sum);

			

		}
		cin>>c>>d>>s;
		//time = (double)d/(double)s;
		//cout<<"time = "<<time<<endl;

		/*for (int i = 0; i < n; ++i)
		{
			cout<<"first_car_before = "<<first_car[i]<<endl;
		}*/

		
		unsigned long long int second_car = 0;
		
		for (int i = 0; i < n; ++i)
		{
			//first_car[i]+= (time*double(i));
			if(i == 0)
				{
					second_car = 2 * first_car[i];
					
				}
			else if(second_car < first_car[i])
			{
				second_car = (first_car[i] + v[i]);
			}
			else
			{
				second_car += v[i] ;
			}
			//cout<<"second_car = "<<second_car<<endl;


		}

		/*for (int i = 0; i < n; ++i)
		{
			cout<<"first_car = "<<first_car[i]<<endl;
		}*/

		//double result;
		result =  (double)second_car - (double)first_car[n-1];
		result *= double(c - 1);

		std::cout << std::setprecision(8);
		cout<<result<<"\n";




		

	}
	return 0;
}