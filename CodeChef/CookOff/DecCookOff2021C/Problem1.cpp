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
    int x1, y1, x2, y2;

    cin >> t;

    while (t--)
    {
        cin >> x1 >> y1 >> x2 >> y2;

        if(x1 == x2 || y1 == y2){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}