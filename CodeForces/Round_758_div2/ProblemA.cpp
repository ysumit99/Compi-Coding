//http://codeforces.com/contest/1206/problem/A

#include<bits/stdc++.h>

using namespace std;


int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

    int t;

    cin >> t;
    while(t--){
        int n;
        cin >> n;

        int count = 0;
        int num = 2;

        while(count < n){
            for(int i = 2; i < num; i++){
                if(num % i == 0)
                    {
                        num++;
                    }
            }
            cout << num << " ";
            num++;
            count++;
        }
        cout << "\n";
    }
  
	return 0;
}           