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
	unsigned long long int k,d0,d1;
	cin>>k>>d0>>d1;
	int temp = (d0 + d1)%10;
	int sum =  temp;
	sum = d0 + d1;

	if(k < 10)
	{

		for (int i = 0; i < k - 3; ++i)
		{
			sum += ((temp*2)%10);
			temp *= 2;
		}

		if(sum % 3 == 0)
			cout<<"YES\n";
		else
			cout<<"NO\n";

	}
	else
	{
		int count  = 0;
		int iterate_count = 0;
		unsigned long long int sum = 0;

		if(temp == 0)
		{
			if((d0 + d1)%3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else if(temp == 1)
		{
			count = (k - 3) / 4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-3)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (temp+ d0 + d1);

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";

			

			

		}
		else if(temp == 2)
		{
			count = (k-2)/4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-2)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (d0 + d1);

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";

		}
		else if(temp == 3)
		{
			count = (k - 4)/4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-4)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (d0 + d1 + temp + 6);

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";


		}
		else if(temp == 4)
		{
			count = (k - 5)/4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-5)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (d0 + d1 + temp + 6 + 8);

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";

		}
		else if(temp == 5)
		{
			sum = 5;
			sum += (d0 + d1);
			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";

		}
		else if( temp == 6)
		{
			count = (k - 3)/4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-3)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (d0 + d1 + temp );

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else if(temp == 7)
		{
			count = (k - 6)/4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-6)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (d0 + d1 + temp + 4 + 8 + 6 );

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else if(temp == 8)
		{

			count = (k - 4)/4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-4)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (d0 + d1 + temp + 16);

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		else if(temp == 9)
		{
			count = (k - 5)/4;
			sum += (2);
			sum += (4);
			sum += (6);
			sum += (8);

			iterate_count = (k-5)%4;

			int arr[4] = {2,4,8,6};
			if(iterate_count != 0)
			{
				for (int i = 0; i < iterate_count ; ++i)
				{
					sum += arr[i];
				}
			}
			
			sum += (d0 + d1 + temp + 8 + 6);

			if(sum % 3 == 0)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		cout<<"sum = "<<sum<<endl;

	}
	
	}
	return 0;
}	