//https://www.codechef.com/AUG19B/problems/ZOMCAV
//https://youtu.be/K-OXa3TRoFQ
#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        vector<int> radiation(n);

        vector<int> health(n);

        vector<int> finalRadiation(n);

        vector<int> diff(n + 1);
        int leftIndex = 0, rightIndex = 0;

        
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
                
                leftIndex = max(0, i - radiation[i]);
                rightIndex = min(n - 1, i + radiation[i]);

                diff[leftIndex]++;
                diff[rightIndex + 1]--;


            }

            for(int i = 0; i < n ; i++) 
                {
                    if(i == 0)
                        finalRadiation[i] = diff[i];
                    else
                        finalRadiation[i] = finalRadiation[i-1] + diff[i];

                }

                sort(finalRadiation.begin(), finalRadiation.end());

                sort(health.begin(), health.end());

                bool notMatching = true;

                for(int  i =0; i < n; i++)
                    {
                        if(finalRadiation[i] != health[i])
                            notMatching = false;
                            break;
                    }

                if(notMatching)
                    cout << "YES\n";
                else
                    cout << "NO\n";




        
    }


    return 0;
}