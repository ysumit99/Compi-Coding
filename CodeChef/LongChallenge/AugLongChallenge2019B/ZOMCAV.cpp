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
        vector<ll> radiation(n+1), health(n+1);

        set<ll> s;
        set<ll>:: iterator itr;

        ll max_limit = 0;

        for(int i = 1; i <= n; i++)
            {
                cin >> radiation[i];

                 if(i - radiation[i] < 0)
                {
                max_limit = i + radiation[i] > n ? n : i + radiation[i];

                    s.insert(max_limit);
                    cout << "inserting " << max_limit << endl;
                }
                else
                {
                    max_limit = 2*radiation[i] > n ? n : 2*radiation[i];
                    s.insert(max_limit);
                    cout << "Inserting " << max_limit << endl;
                }

            }

        for(int i = 0; i < n; i++)
            cin >> health[i];

        sort(health.rbegin(), health.rend());

        // for(ll ele: health)
        //     cout << "element = " << ele << "\n";

        // for(int i = 1; i <= n; i++)
        //     cout << radiation[i] << " ";

        // cout << "\n";

        // for(int i = 0; i < n; i++)
        //     cout << health[i] << " ";

        // cout << "\nend of test case\n";

      

       
        
        // cout << "set after sorting: \n";
        // cout << "set size = " << s.size() << endl;

        // set<ll>:: iterator itr;
        cout << "start of set iteration\n";

        for(itr = s.begin(); itr != s.end(); itr++)
            cout << *itr << "\n";

        cout << "end of set iteration\n";

        itr = s.begin();
        ll expected_val = n, prev;
        int flag = 0, k = 0;

        while(itr != s.end())
        {
            //cout << *itr << endl;

            if(itr == s.begin())
            {
                for(int j = 0; j < *itr; j++)
                {
                    if(health[k] != expected_val)
                        {
                            flag = 1;
                            break;
                        }
                    k++;
                }
                if(flag == 1)
                    break;
                
                
            }
            else
            {
                for(int j = 0; j < *itr - prev; j++)
                {
                    if(health[k] != expected_val)
                        {
                            flag = 1;
                            break;
                        }
                    k++;
                }
                if(flag == 1)
                    break;
                
            }
            prev = *itr;
            expected_val--;
            itr++;
            
        }

        if(flag == 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }

    return 0;
}