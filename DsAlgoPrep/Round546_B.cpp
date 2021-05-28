//https://codeforces.com/contest/546/problem/B

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
    int isPresent[3001] = {0};
    vector<int> badges;

    int n, ele, coins = 0;
    bool found = false;
    int index = -1, previous = -1;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ele;
        isPresent[ele]++;
        badges.push_back(ele);
    }

    sort(badges.begin(), badges.end());
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "badges[" << i << "] = " << badges[i] << endl;
    // }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << "isPresent[" << i << "] = " << isPresent[i] << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        if (i >= 1 && badges[i] == badges[i - 1] || isPresent[badges[i]] > 1)
        {
            // if (badges[i] == badges[i - 1])
            // {
            //     cout << "case 1: ";
            // }
            // else if (isPresent[badges[i]] > 1)
            // {
            //     cout << "case 2: ";
            // }
            index = badges[i] + 1;
            found = false;
            while (index <= n)
            {
                if (isPresent[index] == 0)
                {
                    coins += index - badges[i];
                    isPresent[badges[i]]--;
                    badges[i] = index;
                    //cout << "index = " << index << " | badges[" << i << "] = " << badges[i] << " | coins = " << index - badges[i] << endl;
                    found = true;
                    isPresent[index]++;

                    break;
                }
                index++;
            }
            if (!found)
            {
                previous = n + 1;
                for (int j = i; j < n; j++)
                {
                    if (badges[j] == badges[j - 1] || isPresent[badges[j]] > 1)
                    {

                        coins += previous - badges[j];
                        isPresent[badges[j]]--;
                        badges[j] = previous;
                        //cout << "previous = " << previous << " | badges[" << j << "] = " << badges[j] << " | coins = " << previous - badges[j] << endl;
                        previous++;
                    }
                }
                break;
            }
        }
    }

    cout << coins;

    return 0;
}