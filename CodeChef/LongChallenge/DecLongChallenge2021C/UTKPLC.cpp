//https://www.codechef.com/DEC21C/problems/UTKPLC
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

    cin >> t;

    while (t--)
    {
        string first, second, third;
        string x, y;

        cin >> first >> second >> third >> x >> y;

        if(x == first){
            cout << x << endl;
        }else if(y == first){
            cout << y << endl;
        }else if(x == second){
            cout << x << endl;
        }else if(y == second){
            cout << y << endl;
        }else if(x == third){
            cout << x << endl;
        }else if(y == third){
            cout << y << endl;
        }
    }
    return 0;
}