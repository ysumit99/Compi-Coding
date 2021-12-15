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
        long long int n;

        cin >> n;
       

        if(n == 1 || n == 2){
            cout << n << "\n";
        }else{
            if(ceil(log2(n)) == floor(log2(n))){
                cout << 2*n-1 << "\n";
            }else{
               n--;
 
    // set all bits after the last set bit
    n |= n >> 1;
    n |= n >> 2;
    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
 
    // increment `n` and return
    cout <<  ++n << "\n";
            }
        
        }

        
        // set<int> s;

        // for(int i = 1; i <= n; i++ ){
        //     for(int j = 1; j <= n; j++){
        //         s.insert(i ^ j);
        //     }
        // }
        // cout << s.size() << "\n";
    
    }

    return 0;
}