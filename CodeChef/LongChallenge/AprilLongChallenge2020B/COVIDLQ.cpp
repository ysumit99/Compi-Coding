//https://www.codechef.com/APRIL20B/problems/COVIDLQ

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

    int t, n;

    cin >> t;

    while (t--)
    {
        int prevOneIndex = -1;
        bool isSocialDistancingFollowed = true;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 1)
            {

                if (prevOneIndex != -1)
                {
                    if (i - prevOneIndex < 6)
                    {
                        isSocialDistancingFollowed = false;
                        break;
                    }
                }
                prevOneIndex = i;
            }
        }

        if (isSocialDistancingFollowed)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}