//https://www.codechef.com/OCT18B/problems/BITOBYT

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main(int argc, char const *argv[])
{
		

		ios_base::sync_with_stdio(false);
	    cin.tie(NULL);


		int i = 1, count = 0, t;

		ll n; //input variable 'n'

		ll arr[1611][3] = {0}; // This is the minimum size of array required to get accepted or else RE (SIGSEGV) error !!

		ll factor = pow(2,count); //powers of 2

		
		
		
		

		cin >> t;


		while(i <= 1600)
		{
			
			

			//***************************************//

			// Start of bit //

			for (int j = 0; j <  2; ++j)
			{
				arr[i][0] = factor; // bit 
				arr[i][1] = 0; // nibble
				arr[i][2] = 0; // byte

				i++; //  1 to 2 (2 numbers)
			}

			
			// End of bit //

			//***************************************//




			// Now bit becomes Nibble

			for (int j = 0; j <  8; ++j)
			{
				arr[i][0] = 0; // bit 
				arr[i][1] = factor; // nibble
				arr[i][2] = 0; // byte

				i++; // 3 to 10 (next 8 numbers)
			}

			

			
			// End of Nibble //

			//***************************************//
			
			



			// Now Nibble becomes Byte


			for (int j = 0; j <  16; ++j)
			{
				arr[i][0] = 0; // bit 
				arr[i][1] = 0; // nibble
				arr[i][2] = factor; // byte

				i++; // 11 to 26 (next 16 numbers)
			}

			
			// End of Byte //

			//***************************************//
			

			count++;
			factor = pow(2,count); // for next iteration



		}

			// Testing

					// for(int i = 1; i <= 100; i++)
					// 	cout << arr[i][0] << " , " << arr[i][1] << " , " << arr[i][2] << endl;

			// End of Testing



		while(t--) //test case counter
		{
			cin >> n;

			cout << arr[n][0] << " " << arr[n][1] << " " << arr[n][2] << endl;
		}

	return 0;
}