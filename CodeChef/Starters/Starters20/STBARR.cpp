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
        int n, ele;
        cin >> n;
        bool equal = true;
        int max=-1;
        int pos = -1;
        vector<int> arr;

        for(int i = 0; i < n; i++){
            cin >> ele;
            arr.push_back(ele);
            if(i!=0){
                if(arr[i] != arr[i-1]){
                    equal = false;
                }
            }
            if(ele >= max){
                max = ele;
                pos = i;
            }
        }
        if(equal){
            cout << 0 << "\n";
        }else if(pos == n-1){
            cout << 1 << "\n";

        }else{
            cout << 2 << "\n";
        }

    }

    return 0;
}