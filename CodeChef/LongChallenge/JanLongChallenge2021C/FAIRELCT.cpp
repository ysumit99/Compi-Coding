//https://www.codechef.com/JAN21C/problems/FAIRELCT
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

    int t, ele, n, m, johnVotes, jackVotes, swaps, smallerPack;

    cin >> t;

    while (t--)
    {
        cin >> n >> m;
        vector<int> john;
        vector<int> jack;
        johnVotes = 0;
        jackVotes = 0;
        swaps = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            john.push_back(ele);
            johnVotes += ele;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> ele;
            jack.push_back(ele);
            jackVotes += ele;
        }

        //if john has more votes already, no need to swap
        if (johnVotes > jackVotes)
        {
            cout << 0 << endl;
            continue;
        }

        sort(john.begin(), john.end());
        sort(jack.rbegin(), jack.rend());

        smallerPack = n <= m ? n : m;

        for (int i = 0; i < smallerPack; i++)
        {
            if (johnVotes <= jackVotes && john[i] < jack[i])
            {
                johnVotes += jack[i] - john[i];
                jackVotes -= jack[i] - john[i];
                swaps++;

                if (johnVotes > jackVotes)
                {
                    break;
                }
            }
        }

        if (johnVotes > jackVotes)
        {
            cout << swaps << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}