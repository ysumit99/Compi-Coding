//https://www.codechef.com/SEPT19B/problems/FIBEASY
//Accepted

#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

    /* Print First N Fibonacci Sequence Elements */ 
    void printFibonacci(ll n){

         ll f0 = 0, f1 = 1, nextTerm = 0;
         
         if(n < 1)
            return;
        cout << f0 << endl;
        cout << f1 << endl;

        for (size_t i = 3; i <= n; i++)
        {
            
            nextTerm = f0 + f1;
            f0 = f1;
            f1 = nextTerm;

            // To check power of 2
            //if( ceil(log2(i)) == floor(log2(i)) )
                //cout << " Power of 2 => " << nextTerm  << endl;
            cout << nextTerm % 10 << endl;
            //else  
                //cout << nextTerm  % 10 << endl;   
        }
        
        
    }
    
int main(){

   #ifdef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
   #endif

   ios_base :: sync_with_stdio(false);
	cin.tie (0);

    int t;

    cin >> t;

    while(t--)
    {
        ll n;

        cin >> n;
       
        //printFibonacci(n);

        /**
         * Observartion 1: If N numbers are given the only remaining number after the given opereation will be nearest power of 2 less than or equal to N
         * Observation 2: Fibonacci Sequence Unit digits repeat after a cycle of 60 
         */

        vector<int> fibUnitPlaceCycle;

       /* 60 Repeating digits of Unit place of Fibonacci Sequence */
        fibUnitPlaceCycle.push_back(0);
        fibUnitPlaceCycle.push_back(1);
        fibUnitPlaceCycle.push_back(1);
        fibUnitPlaceCycle.push_back(2);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(8);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(1);
        fibUnitPlaceCycle.push_back(4);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(4);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(0);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(4);
        fibUnitPlaceCycle.push_back(1);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(6);
        fibUnitPlaceCycle.push_back(1);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(8);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(8);
        fibUnitPlaceCycle.push_back(1);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(0);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(8);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(2);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(6);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(1);
        fibUnitPlaceCycle.push_back(6);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(0);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(6);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(4);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(3);
        fibUnitPlaceCycle.push_back(2);
        fibUnitPlaceCycle.push_back(5);
        fibUnitPlaceCycle.push_back(7);
        fibUnitPlaceCycle.push_back(2);
        fibUnitPlaceCycle.push_back(9);
        fibUnitPlaceCycle.push_back(1);
       
       
        /* Using Observation1 
            Find Nearest Power of 2 which is <= N 
            To get this => Just keep dividing by 2 until result becomes less than or equal to 1
        */
        ll count = 0, nearestPowerOfTwo = 0;
        while(n > 1)
            {
                n/= 2;
                count++;
            }

            
        nearestPowerOfTwo = pow(2,count);
        
        /* Using Observation 2:
            we can find the unit place digit using mod 60
         */
        cout << fibUnitPlaceCycle[(nearestPowerOfTwo - 1) % 60] << "\n";

       

    }
    return 0;
}