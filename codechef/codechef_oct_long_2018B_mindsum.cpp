//https://www.codechef.com/OCT18B/problems/MINDSUM
#include<bits/stdc++.h>

using  namespace std;

//typedef long long int ll;



long long get_digit_sum(long long n)
{
	long long  sum = 0;
	while(n > 0)
	{
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

long long  digit_sum(long long n)
{
	long long sum = 0;
	while(n > 0)
		{
			sum += n % 10;
			n /= 10;
		}

	if(sum >= 10)
		digit_sum(sum);
	else
		return sum;
}

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	

	long long t, flag, sum, min_pos, temp2;
	long long n,d, temp;

	cin >> t;

	while(t--)
	{
		cin >> n >> d;

		std::vector<long long> ele;
		ele.push_back(n);
		std::vector<long long> v;
		std::vector<long long>::iterator it;

		 flag = 0;

		 while(flag == 0)
		 {
		 	temp = n;
		 	sum = 0;

		 	//call function digit sum

		 	temp2 = digit_sum(temp); 

		 	

		 	it = find (v.begin(), v.end(), temp2);
			if (it != v.end())
				flag = 1;
			else
				v.push_back(temp2);

			n += d;
			ele.push_back(n);

		 }

		 min_pos =  distance(v.begin(),min_element(v.begin(),v.end())) ;



		 // cout << ".....testing elements....." << endl;

		 // 	for (int i = 0; i < ele.size(); ++i)
		 // 	{
		 // 		cout << ele[i] << endl;
		 // 	}

		 // 	cout << "min = " << min_pos << endl;
		 // cout << "..... end of testing elements....." << endl;

		 // cout << ".....testing sum....." << endl;

		 // 	for (int i = 0; i < v.size(); ++i)
		 // 	{
		 // 		cout << v[i] << endl;
		 // 	}

		 // 	cout << "min = " << min_pos << endl;
		 // cout << "..... end of testing sum....." << endl;

		 //ll test = v[min_pos];
		 long long count = 0;

		 long long t_res = ele[min_pos];
		 //cout << "t_res = " << t_res << endl;

		 while(t_res >= 10)
		 {
		 	t_res = get_digit_sum(t_res);
		 	//cout << "t_res = " << t_res << endl;
		 	count++;
		 }


		 
			cout << v[min_pos] << " " << min_pos + count << endl;

		 // if(count > 1)
		 // 	cout << v[min_pos] << " " << min_pos+1+count << "case1" << endl;
		 // else
		 // 	cout << v[min_pos] << " " << min_pos+1 << "case2" << endl;






	}



	return 0;
}