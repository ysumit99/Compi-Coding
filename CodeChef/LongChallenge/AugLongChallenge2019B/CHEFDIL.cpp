//https://www.codechef.com/AUG19B/problems/CHEFDIL
//Accepted

#include<bits/stdc++.h>

using namespace std;

int main(){

    #ifdef DEBUG

        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);

        
    #endif

    ios_base:: sync_with_stdio(false);
    cin.tie(0);

    int t, count1;
    string str;

    cin >> t;

    while (t--)
    {
        cin >> str;
        count1 = 0;

        for(auto ele: str)
            if(ele == '1')
                count1++;

        if(count1 % 2 == 1)
            cout << "WIN\n";
        else
            cout << "LOSE\n";

        
    }
    

    return 0;
}