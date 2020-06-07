//https://www.codechef.com/JUNE20B/problems/XYSTR
//Accepted
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
    string str;

    cin >> t;

    while (t--)
    {
        cin >> str;
        int len = str.length();
        int pairCount = 0;
        vector<int> belongsToPair(len, 0);

        for (int i = 0; i < len; i++)
        {

            if (i - 1 >= 0 && str[i] != str[i - 1])
            {
                if (belongsToPair[i - 1] == 0)
                {
                    belongsToPair[i - 1] = 1;
                    belongsToPair[i] = 1;
                    pairCount++;
                }
            }
        }

        cout << pairCount << endl;
    }

    return 0;
}