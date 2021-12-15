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

    string x, y;

    cin >> x >> y;

    if(x == y){
        cout << x;
    }else if(x == "R" && y == "B" || y == "R" && x == "B"){
        cout << "R";
    }else if(x == "B" && y == "G" || x == "G" && y == "B"){
        cout << "B";
    }else if(x == "R" && y == "G" || x == "G" && y == "R"){
        cout << "R";
    }
    return 0;
}