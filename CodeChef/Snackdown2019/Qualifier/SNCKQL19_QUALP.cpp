//https://www.codechef.com/SNCKQL19/problems/CHEFPRMS

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{


	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t,n,temp,temp2;
	int n1,n2;

	cin >> t;

	std::vector<int> primes = { 2, 3, 5, 7 , 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199};




	int p;
	int q;
	while(t--)
	{
		cin >> n;
		

		//Get factors of this n

		
		int flag1 = 0, flag2 = 0;


	    for (int i = 1; i <= n-1 ; ++i)
	    {
	    	n1 = i;
	    	n2 = n-i;

		    temp = 1;
		    temp2 = 1;

		    // std::vector<int> factors1;
		    // std::vector<int> factors2;


		    //for first num
			while (temp <= n1)
		    {
		        if (not(n1 % temp))
		        {	
		        	//p = std::find (primes, primes + 46, temp);

		        	//q = std::find (primes, primes+46, n1/temp);
		            // factors1.push_back(temp);

				    //  if(p != primes+46 && q != primes+46)
				    // {

				    // 	if(*p != *q)
				    // 		flag1 = 1;
				    // 	temp2 = 1;
					// 	while (temp2 <= n2)
					//     {
					//         if (not(n2 % temp2))
					//             {
					//             	p = std::find (primes, primes+46, temp2);

		        	// 				q = std::find (primes, primes+46, n2/temp2);


		        	// 				if(*p != *q)
		        	// 					{
		        	// 						flag2 = 1;
		        	// 						break;
		        	// 					}
		        	// 				else
		        	// 				{
		        	// 					flag1 = 0; 
		        	// 				}
					//             }
					 
					//         temp2++;
					//     }

				    	
				    // }
		        }
		 
		        temp++;


		    if(flag2 == 1 && flag1 == 1)
		    	break;
		    }

		    if(flag2 == 1 && flag1 == 1)
		    	break;

		   





	    }


		    if(flag2 == 1 && flag1 == 1)
		    	cout << "YES" << endl;
		    else
		    	cout << "NO" << endl;


 	}
	return 0;
}