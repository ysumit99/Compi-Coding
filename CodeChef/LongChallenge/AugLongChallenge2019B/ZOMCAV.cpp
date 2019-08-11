//https://www.codechef.com/AUG19B/problems/ZOMCAV
//Wrong Answer

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

        //vector<int> radiation(n);
        vector<int> health(n);
        int radiation; 
        vector<int> finalRadiation(n,0);

        for (size_t i = 0; i < n; i++)
        {
            cin >> radiation;
            int minLimit = i + 1 - radiation <= 0 ? 1 : i + 1 - radiation;
            int maxLimit = i + 1 + radiation > n ? n : i + 1 + radiation;

            for (size_t j = minLimit ; j <= maxLimit; j++)
                finalRadiation[j-1]++;
            
        }

        for (size_t i = 0; i < n; i++)
            cin >> health[i];
        
        sort(health.begin(), health.end());
        sort(finalRadiation.begin(), finalRadiation.end());

        bool allDead = true;

        for(int i = 0; i < n; i++)
            if(health[i] != finalRadiation[i])
                allDead = false;
        
        if(allDead)
            cout << "YES\n";
        else
            cout << "NO\n";

        
        
        

      
    }

    return 0;
}