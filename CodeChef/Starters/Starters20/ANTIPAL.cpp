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

    cin >> t;

    while(t--){
        int n;

        cin >> n;

        if(n%2 == 1){
            cout << "-1\n";
        }else{
            for(int i = 0 ; i < n; i++){
                if(i%2 == 0){
                    cout << "1";
                }else{
                    cout << "0";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}