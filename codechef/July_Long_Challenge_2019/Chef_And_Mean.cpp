//https://www.codechef.com/JULY19B/problems/CHFM/
//Accepted
#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){


    
		// TODO Auto-generated method stub
		
		//Brute force logic
		
		int t, n;
		
		//Scanner sc = new Scanner(System.in);
		
		//t = sc.nextInt();
        cin >> t;
		ll sum = 0, new_sum = 0;
		int flag = 0;
		double avg = 0.0, new_avg = 0.0;
		
		while(t--)
		{
			//n = sc.nextInt();
            cin >> n;
			sum = 0;
			new_sum = 0;
			avg = 0.0;
			new_avg = 0.0;
			flag = 0;
			
			//long arr[] = new long[n];

            ll arr[n] = {0};
			
			for(int i = 0; i < n; i++)
			{
				//arr[i] = sc.nextLong();
                cin >> arr[i];
				sum += arr[i];
			}
			
			//System.out.println("Sum = " + (double)sum + "avg = " + (double)sum/n);
			
			avg = (double)sum/n;
			
			//System.out.println("avg = " + avg);
			
			for(int i = 0; i < n; i++) {
				new_sum = sum - arr[i];
				new_avg = (double)new_sum/(n-1);
				//System.out.println("i = " + (i+1) + " | new_avg = " + new_avg);
				if(new_avg == avg)
				{
					//System.out.println("new_avg = " + new_avg + " at index = " + (i + 1));
					//System.out.println(i + 1);
                    cout << i+1 << "\n";
					flag = 1;
					break;
					
				}
			}
			
			if(flag == 1)
				continue;
			else
				{
                    //System.out.println("Impossible");
                    cout << "Impossible\n";

                }
				
			
		}
		
	
}