//https://www.codechef.com/LTIME75B/problems/TRIP2
//WA

#include<bits/stdc++.h>

using namespace std;

int main(){


    // #ifdef DEBUG

    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif

    // ios_base:: sync_with_stdio(false);
    // cin.tie(0);

    int t;

    cin >> t;

    while(t--)
    {
        int n,k;

        cin >> n >> k;

        vector<int> plan(n);

        for (size_t i = 0; i < n; i++)
            cin >> plan[i];

        bool isDoomed = false;

        for (size_t i = 0; i < n; i++)
        {

            /* Already planned */
            if(plan[i] != -1)
                {   
                    /* Consecutive days found with same plan so constraint violated */
                    if( i != 0  && plan[i] == plan[i-1] )
                        {
                            isDoomed = true;
                            break;
                        }

                    /* Day is planned with no violation check the next day */
                    continue;

                }

            /* if the day is unplanned */

            /* Find the nearest planned Day */

            int j = i+1;

            while(j < n)
            {
                if(plan[j] != -1)
                    break;
                j++;
            }
            cout << "j = " << j << endl;
            /*
                Now j is pointing to the nearest planned Day (if any).
                back track till 'i' making sure no 2 consecs are same.
                If not possible to satisfy break and return NO 
            */

           
           int alternatePlans = 0;

           if(j == n) //No day is planned after 'i'
           {   
               if(i == 0) //corner case to avoid runtime error
                    alternatePlans = 1;
                else
                    alternatePlans = plan[i-1] == 1 ? 2 : 1;


               for(int j = i; j < n; j++)
               {
                    plan[j] = alternatePlans;
                    alternatePlans = plan[j] == 1 ? 2 : 1;
                    
               }
           } 
           else // atleast 1 Day is planned after i
           {
               alternatePlans = plan[j] == 1 ? 2 : 1;
               j--;
                      
                while(j >= i)
                {
                    plan[j] = alternatePlans;
                    alternatePlans = plan[j] == 1 ? 2 : 1;
                    j--;
                }

                if( i != 0 && plan[i] == plan[i-1] )
                    isDoomed = true;
           }
             


        }
        

        if(isDoomed)
            cout << "NO\n";
        else
        {
            cout << "YES\n";

            for (size_t i = 0; i < n; i++)
            {
                cout << plan[i] << " ";
            }

            cout << "\n";
            
        }
        

        
        
        
    }

    return 0;
}