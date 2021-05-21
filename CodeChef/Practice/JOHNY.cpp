//https://www.codechef.com/problems/JOHNY

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
    string str;

    cin >> t;

    while (t--)
    {
        int n, k, ele;
        vector<int> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            v.push_back(ele);
        }

        cin >> k;

        int target = v[k - 1];

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            if (v[i] == target)
            {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}