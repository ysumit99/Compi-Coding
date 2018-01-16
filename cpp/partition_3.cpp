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
		unsigned long long int x,n;

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
		else if( n == 5)
		{
			if(x == 1)
				cout<<"20110\n";
			else if(x == 2 || x == 4)
				cout<<"impossible\n";
			else if(x == 3)
				cout<<"10201\n";
			else if(x == 5)
				cout<<"10012\n";

		}
		else
		{
				std::vector<int> arr(n+1);
				std::vector<int>::iterator it;
				

				//arr[x] = '2';
				//arr[0] = '5';

				unsigned long long int sum = (n*(n+1))/2;
				unsigned long long int temp,sum2 = 0;
				unsigned long long int skip = x;
						
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
									arr[4] = 1;
									//arr.push_back(4);
									sum2 += 5;
									//arr.push_back(5);
									arr[5] = 1;


									count = 0;
									for (int i = 6; i < n ; i++)
									{
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											//arr.push_back(i);
											arr[i] = 1;
										}

									}
									sum2 += n;
									arr[n] = 1;
									//arr.push_back(n);

								}
							else
								{
									sum2 += 3;
									//arr.push_back(3);
									arr[3] = 1;
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
											arr[i] = 1;
											//arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr[i] = 1;
											//arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr[n] = 1;
										//arr.push_back(n);
									}

								}
						}
						if(pad == 2)
						{
							if(x == 1 || x == 2)
								{
									sum2 += 3;
									arr[3] = 1;
									//arr.push_back(3);
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
											arr[i] = 1;
											//arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr[i] = 1;
											//arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr[n] = 1;
										//arr.push_back(n);
									}


								}
							else
								{
									sum2 += 2;
									arr[2] = 1;
									//arr.push_back(2);
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
											arr[i] = 1;
											//arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr[i] = 1;
											//arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr[n] = 1;
										//arr.push_back(n);
									}

								}

						}
						else if(pad == 3)
						{
							if(x == 1)
								{
									sum2 += 2;
									arr[2] = 1;
									//arr.push_back(2);
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
											arr[i] = 1;
											//arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr[i] = 1;
											//arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr[n] = 1;
										//arr.push_back(n);
									}

								}
							else
								{
									sum2 += 1;
									arr[1] = 1;
									//arr.push_back(1);
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
											arr[i] = 1;
											//arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr[i] = 1;
											//arr.push_back(i);
										}




										//count++;

									}
									if(x != n)
									{
										sum2 += n;
										arr[n] = 1;
										//arr.push_back(n);
									}


								}
						}
						else if(pad == 4)
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
											arr[i] = 1;
											//arr.push_back(i);
											continue;
										}
										count++;
										if(count % 4 == 0 || count % 4 == 3)
										{
											sum2 += i;
											arr[i] = 1;
											//arr.push_back(i);
										}




										//count++;

									}
									if(x != n ) //added n > 5
									{
										sum2 += n;
										arr[n] = 1;
										//arr.push_back(n);
									}

						}

						int swap1,swap2,stop_swap = 0,prev,current;
						if(sum2 < (temp/2))
						{
							for (int i = n; i >= 1 ;i--)
							{
								if(i == n)
								{
									if(arr[i] == 1)
										prev = 1;
									//it = find (arr.begin(), arr.end(), i);
									
									else if(i == x)
										prev = 2;
									else
										prev = 0;

									continue;
								}


									//it = find (arr.begin(), arr.end(), i);
									//f(it != arr.end())
										//current = 1;
									if(arr[i] == 1)
										current = 1;
									else if(i == x)
										current = 2;
									else
										current = 0;

									if(current == 1 && prev == 0)
									{
										swap1 = i; //make this 0
										swap2 = i+1; //make this 1
										break;
									}

								prev = current;


							}

							for (int i = 1; i <= n; ++i)
							{
								
								//it = find (arr.begin(), arr.end(), i);
								if(i == swap1)
									cout<<0;
								else if(i == swap2)
									cout<<1;
								else if (arr[i] == 1)
									cout<<1;
								else if(i == skip)
									cout<<2;
								else
									cout<<0;

							}
						cout<<"\ncase less"<<sum2<<endl;

							
						}
					else if(sum2 > (temp/2))
					{
						for (int i = n; i >= 1 ;i--)
							{
								if(i == n)
								{
									//it = find (arr.begin(), arr.end(), i);
									
									//if(it != arr.end())
									if(arr[i] == 1)
										prev = 1;
									else if(i == x)
										prev = 2;
									else
										prev = 0;

									continue;
								}


									//it = find (arr.begin(), arr.end(), i);
									//if(it != arr.end())
									if(arr[i] == 1)
										current = 1;
									else if(i == x)
										current = 2;
									else
										current = 0;

									if(current == 0 && prev == 1)
									{
										swap1 = i; //make this 1
										swap2 = i+1; //make this 0
										break;
									}

								prev = current;


							}

							for (int i = 1; i <= n; ++i)
							{
								//it = find (arr.begin(), arr.end(), i);
								if(i == swap1)
									cout<<1;
								else if(i == swap2)
									cout<<0;
								else if(arr[i] == 1)
									cout<<1;
								else if(i == skip)
									cout<<2;
								else
									cout<<0;

							}
						cout<<"\ncase more "<<sum2<<endl;
					}
					else
					{
						for (int i = 1; i <= n; ++i)
						{
							//it = find (arr.begin(), arr.end(), i);
							if(arr[i] == 1)
								cout<<1;
							else if(i == skip)
								cout<<2;
							else
								cout<<0;

						}
						cout<<"\ncase perfect"<<sum2<<"\n";
					}
						


					}


			
		}
		
		
	}
	return 0;
}