#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t,n;
	cin>>t;

	while(t--)
	{
		cin>>n;

		int a[n],b[n],occur_consec[n]={-1},count = 0,temp,temp2,temp3,temp4,mark_consec[n],normal[n],prev;
		int count_normal = 0;


		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
			if(i!=0 && a[i] == a[i-1])
			{
				occur_consec[count] = i-1;
				//occur_consec[i] = 1;
				mark_consec[i] = 1;
				mark_consec[i-1] = 1;
				count++;
			}

			/*if(mark_consec[i] != 1)
			{
				normal[count_normal++] = i-1;

			}*/
		}

		for (int i = 0; i < n; ++i)
		{
			if(mark_consec[i] != 1)
				normal[count_normal] = i;
			count_normal++;
		}
		

		if(count == 0)
		{
			if(n != 1)
			{
				for (int i = 0; i < n; ++i)
				{
					if(i % 2 == 0 && i!=n-1)
						b[i+1] = a[i];
					else if(i % 2 == 1)
						b[i-1] = a[i];
					if(i == n-1 && i%2 == 0)
						b[i] = a[i];
				}
			}
			else if(n == 1)
				b[0] = a[0];
			if(n%2 == 1 && n!=1)
				{
					
					temp = b[n-1];
					b[n-1] = b[n-2];
					b[n-2] = temp;
				}

			if(n == 1)
				cout<<0<<"\n"<<b[0]<<"\n";
			else
			{
				cout<<n<<"\n";
				for (int i = 0; i < n; ++i)
				{
					cout<<b[i]<<" ";
				}
				cout<<"\n";
			}

		}
		else
		{
			for (int i = 0; i < n; ++i)
			{
				b[i] = a[i];
			}

			if(count % 2 == 0)
			{
				for (int i = 0; i < count; i+=2)
				{
					temp = occur_consec[i];
					temp2 = occur_consec[i+1];
					b[temp] = a[temp2];
					b[temp + 1] = a[temp2 + 1];
					b[temp2] = a[temp];
					b[temp2 + 1] = a[temp + 1];
				}

				if(count_normal % 2 == 0 )
				{
					for(int i = 0; i < count_normal; i+=2)
					{
						if(b[normal[i]] != b[normal[i+1]])
						{	
							b[normal[i]] = a[normal[i+1]];
							b[normal[i+1]] = a[normal[i]];
						}
						else
						{
							temp = b[normal[i]];
							temp2 = b[normal[i+1]];
							b[normal[i]] = b[occur_consec[0]];
							b[normal[i+1]] = b[occur_consec[0]+1];
							b[occur_consec[0]] = temp;
							b[occur_consec[0]+1] = temp2;

						}
					}
				}
				else
				{
					for(int i = 0; i < count_normal - 1; i+=2)
					{
						if(b[normal[i]] != b[normal[i+1]])
						{	
							b[normal[i]] = a[normal[i+1]];
							b[normal[i+1]] = a[normal[i]];
						}
						else
						{
							temp = b[normal[i]];
							temp2 = b[normal[i+1]];
							b[normal[i]] = b[occur_consec[0]];
							b[normal[i+1]] = b[occur_consec[0]+1];
							b[occur_consec[0]] = temp;
							b[occur_consec[0]+1] = temp2;

						}
					}

					temp = b[normal[count_normal-1]];
					b[normal[count_normal-1]] = b[occur_consec[0]];
					b[occur_consec[0]] = temp;
				}


			} //end of ifcount%2==0
			else if(count % 2 == 1 && count!=1)
			{
				for (int i = 0; i < count - 1; i+=2)
				{
					temp = occur_consec[i];
					temp2 = occur_consec[i+1];
					b[temp] = a[temp2];
					b[temp + 1] = a[temp2 + 1];
					b[temp2] = a[temp];
					b[temp2 + 1] = a[temp + 1];
				}
				
				temp = occur_consec[count - 1]; //index of last double element
				temp2 = occur_consec[count - 1]+1; //same as above
				temp3 = occur_consec[count - 2];
				temp4 = occur_consec[count - 2]+1;

				b[temp] = b[temp3];
				b[temp2] = b[temp4];
				b[temp3] = a[temp];
				b[temp4] = a[temp2];

				/*


				*/
				if(count_normal % 2 == 0 )
				{
					for(int i = 0; i < count_normal; i+=2)
					{
						if(b[normal[i]] != b[normal[i+1]])
						{	
							b[normal[i]] = a[normal[i+1]];
							b[normal[i+1]] = a[normal[i]];
						}
						else
						{
							temp = b[normal[i]];
							temp2 = b[normal[i+1]];
							b[normal[i]] = b[occur_consec[0]];
							b[normal[i+1]] = b[occur_consec[0]+1];
							b[occur_consec[0]] = temp;
							b[occur_consec[0]+1] = temp2;

						}
					}
				}
				else
				{
					for(int i = 0; i < count_normal - 1; i+=2)
					{
						if(b[normal[i]] != b[normal[i+1]])
						{	
							b[normal[i]] = a[normal[i+1]];
							b[normal[i+1]] = a[normal[i]];
						}
						else
						{
							temp = b[normal[i]];
							temp2 = b[normal[i+1]];
							b[normal[i]] = b[occur_consec[0]];
							b[normal[i+1]] = b[occur_consec[0]+1];
							b[occur_consec[0]] = temp;
							b[occur_consec[0]+1] = temp2;

						}
					}

					temp = b[normal[count_normal-1]];
					b[normal[count_normal-1]] = b[occur_consec[0]];
					b[occur_consec[0]] = temp;
				}


				/*


				*/
			}
			else if(count == 1)
			{
				if(n == 2)
				{
					cout<<0<<"\n"<<b[0]<<" "<<b[1]<<"\n";
				}
				else if(n == 3)
				{
					if(b[0] == b[1])
					{
						cout<<2<<"\n"<<b[0]<<" "<<b[2]<<" "<<b[1]<<"\n";
					}
					else
					{
						cout<<2<<"\n"<<b[1]<<" "<<b[0]<<" "<<b[2]<<"\n";
					}
				}
				continue;
			}
			
			cout<<"normal = "<<count_normal<<endl;
			for (int i = 0; i < n; ++i)
			{
				cout<<b[i]<<" ";
			}
			cout<<"\n";


		} //end of else
		


} //end of while loop
	
	return 0;
}//end of first loop