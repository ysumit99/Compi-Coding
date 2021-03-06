//https://www.codechef.com/AUG19B/problems/ZOMCAV
//Accepted

#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){


    #ifdef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int t, n;

    cin >> t;

    while(t--)
    {
        cin >> n;

        vector<int> radiation(n);
        vector<int> diff(n + 1);
        vector<int> health(n);
        vector<int> updatedArray(n);


        int leftRange = 0, rightRange = 0;

        for(int i = 0; i < n; i++)
            {
                cin >> radiation[i];
                diff[i] = 0;
            }

            diff[n] = 0;

            for(int i = 0; i < n; i++)
                cin >> health[i];

            

            for(int i = 0; i < n; i++)
                {
                    leftRange = max(0, i - radiation[i]); 
                    rightRange = min(i + radiation[i], n - 1);
                    
                    diff[leftRange]++;
                    diff[rightRange + 1]--;
                }

            for(int i = 0; i < n; i++)
            {
                if(i == 0)
                    updatedArray[i] = diff[i];
                else
                    updatedArray[i] = updatedArray[i-1] + diff[i];
            }

          
           sort(updatedArray.begin(), updatedArray.end());
           sort(health.begin(), health.end());

            bool healthNotMatching = false;

            for(int i = 0; i < n; i++)
                 if(health[i] != updatedArray[i])
                    {
                        healthNotMatching = true;
                        break;
                    }
                

                if(!healthNotMatching)
                    cout << "YES\n";
                else
                    cout << "NO\n";


       
    }

    return 0;
}