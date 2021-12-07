//https://www.codechef.com/DEC21C/problems/LISTLIST

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
    int n, ele;

    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> v;

        for(int i = 0; i < n; i++){
            cin >> ele;
            v.push_back(ele);
        }

        sort(v.begin(), v.end());

        int maxCount = 1, count = 1;

        for(int i = 1; i < n; i++){
            if(v[i] == v[i-1]){
                count++;
                if(count > maxCount){
                    maxCount = count;
                }
            }else{
                count = 1;
            }
        }

        if(n == 1 || maxCount == n){
            cout << 0 << endl;
        }
        else if(maxCount == 1){
            cout << -1 << endl;
        }else{
            cout << n - (maxCount - 1) << endl;
        }
        

    }
    return 0;
}