//https://www.codechef.com/DEC21C/problems/VANDH

#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int t;
    int n, m;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;

        if(n == m){
            cout << (n+1)*2 << endl;
            for(int i = 0; i < n+1; i++){
                cout << "10";
            }
            cout << endl;
        }else if(n > m){
            cout << 1+2*n + (n-m-1) << endl;

            cout << "0";
            int count = 0;
            for(int i = 0; i < n; i++){
                cout << "10";
                if(count < n-m-1)
                {
                cout << "0";
                count++;
                }
                
                
            }
            cout << endl;
        }else if(m > n){
            cout << 1+2*m + (m-n-1) << endl;
            cout << "1";
            int count = 0;
             for(int i = 0; i < m; i++){
                cout << "01";
                if (count < m-n-1)
                {
                cout << "1";
                count++;
                }
                
                
            }
            cout << endl;
        }

    }
    return 0;
}