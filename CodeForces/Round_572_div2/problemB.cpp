//https://codeforces.com/contest/1189/problem/B
//Accepted

#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

    
	int n;

    cin >> n;

    vector<ll> v(n);
    vector<ll> v2(n);

    for(int i = 0; i < n ; i++)
    {
        cin >> v[i];
    }

    sort(v.rbegin(),v.rend());
    int mid = n/2;
    v2[mid] = v[0];

    int offset = 1;
    
    for(int i = 1; i < n; i++)
    {
        //if odd place in left side
        if(i % 2 == 1)
        {
            v2[mid - offset] = v[i];
        }
        else
        {
            if(n % 2 == 0 && i == n-1)
                continue;
            v2[mid + offset] = v[i];
            offset++;
            
        }
    }

    // for(int i = 0; i < n; i++)
    //     cout << v[i] << " ";
    // cout << endl;

    //  for(int i = 0; i < n; i++)
    //     cout << v2[i] << " ";
    // cout << endl;

    if(v2[0] >= v2[1] + v2[n-1])
       {
           cout << "NO";
           return 0;
       } 

    for(int i = 1; i < n - 1; i++)
    {
        if(v2[i] >= v2[i-1] + v2[i + 1])
            {
                cout << "NO";
                return 0;
            }
    }

    cout << "YES\n";
    for(int i = 0; i < n ; i++)
    {
        cout << v2[i] << " ";
    }


	return 0;
}