#include <bits/stdc++.h>

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
    int x1, x2;
    

    cin >> t;

    while (t--)
    {
        cin >> x1 >> x2;

        if(x1 == x2){
            cout << "YES\n";
        }else if(x1 < x2){
            cout << "NO\n";
        }else if(x1 > x2){
            cout << "YES\n";
        }
    }
    return 0;
}