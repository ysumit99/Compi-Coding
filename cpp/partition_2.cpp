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
		long long int x,n;

		cin>>x>>n;

		if(n < 4)
			cout<<"impossible\n";
		else if( n == 4)
		{
			if(x == 1 || x == 3)
				cout<<"impossible\n";
			else if( x == 2)
				cout<<"0201\n";
			else if(x == 4)
				cout<<"0012\n";
		}
		else
		{
				std::vector<int> arr;
				std::vector<int>::iterator it;
				

				//arr[x] = '2';
				//arr[0] = '5';

				unsigned long long int sum = (n*(n+1))/2;
				unsigned long long int temp,sum2 = 0;
				int skip = x;
						
				long long int special,count = 0;
				
					temp = (sum - x);
					if(temp % 2 != 0)
						cout<<"impossible\n";
					else
					{
						
						unsigned long long int pad = 4 - ((n-1) % 4 );

						if(pad == 1)
						{
							if(x == 1 || x == 2 || x == 3)
								{
									sum2 += 4;
									arr.push_back(4);
									sum2 += 5;
									arr.push_back(5);


									count = 0;
									for (int i = 6; i < n ; i++)
									{
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr.push_back(i);
										}

									}
									sum2 += n;
									arr.push_back(n);

								}
							else
								{
									sum2 += 3;
									arr.push_back(3);
									count = 0;
									special = 0;

									for (int i = 4; i < n; ++i)
									{
										if(i == x)
											{	

												continue;
											}
										else if(special == 0)
										{
											special = 1;
											sum2 += i;
											arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr.push_back(n);
									}

								}
						}
						if(pad == 2)
						{
							if(x == 1 || x == 2)
								{
									sum2 += 3;
									arr.push_back(3);
									count = 0;
									special = 0;

									for (int i = 4; i < n; ++i)
									{
										if(i == x)
											{	

												continue;
											}
										else if(special == 0)
										{
											special = 1;
											sum2 += i;
											arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr.push_back(n);
									}


								}
							else
								{
									sum2 += 2;
									arr.push_back(2);
									count = 0;
									special = 0;

									for (int i = 3; i < n; ++i)
									{
										if(i == x)
											{	

												continue;
											}
										else if(special == 0)
										{
											special = 1;
											sum2 += i;
											arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr.push_back(n);
									}

								}

						}
						else if(pad == 3)
						{
							if(x == 1)
								{
									sum2 += 2;
									arr.push_back(2);
									count = 0;
									special = 0;

									for (int i = 3; i < n; ++i)
									{
										if(i == x)
											{	

												continue;
											}
										else if(special == 0)
										{
											special = 1;
											sum2 += i;
											arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr.push_back(n);
									}

								}
							else
								{
									sum2 += 1;
									arr.push_back(1);
									count = 0;
									special = 0;

									for (int i = 2; i < n; ++i)
									{
										if(i == x)
											{	

												continue;
											}
										else if(special == 0)
										{
											special = 1;
											sum2 += i;
											arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr.push_back(n);
									}


								}
						}
						else if(pad == 0)
						{

									count = 0;
									special = 0;

									for (int i = 1; i < n; ++i)
									{
										if(i == x)
											{	

												continue;
											}
										else if(special == 0)
										{
											special = 1;
											sum2 += i;
											arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr.push_back(n);
									}

						}

						
						cout<<"test : "<<t+1<<" | sum = "<<sum2<<"  | desired sum = "<<(temp/2)<<endl;

					}


			
		}
		
		
	}
	return 0;
}