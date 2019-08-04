//https://www.codechef.com/AUG19B/problems/DSTAPLS
//Accepted

#include<bits/stdc++.h>
#define ll long long int

using namespace std;


int main(){

    #ifdef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);

    #endif

    ios_base:: sync_with_stdio(false);
    cin.tie(0);

    int t;
    ll n,k;

    cin >> t;   

    while(t--)
    {
        cin >> n >> k;

        if(n/k % k == 0)
            cout << "NO\n";
        else
             cout << "YES\n";
    }
    return 0;
}