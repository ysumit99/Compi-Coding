//http://codeforces.com/contest/1187/problem/B
//Incorrect => see problem_B_v2 for correct solution
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

    int n, m;

    cin >> n;

    string str;

    cin >> str;

    int last_index[26] = {-1}, index;
    std::fill_n(last_index, 26, -1);

    for (int i = 0; i < n; i++)
    {
        // cout << str[i] - 'a' << endl;
        if (last_index[str[i] - 'a'] == -1)
            last_index[str[i] - 'a'] = i;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     cout << last_index[i] << endl;
    // }
    //cout << "***********" << endl;

    cin >> m;
    int max_index = -1;

    for (int i = 0; i < m; i++)
    {
        cin >> str;
        //cout << str << endl;
        max_index = -2;

        //cout << "**********" << endl;
        for (int j = 0; j < str.length(); j++)
        {
            //cout << "last for " << str[j] << " = " << last_index[str[j] - 'a'] << " ";
            if (last_index[str[j] - 'a'] > max_index)
                max_index = last_index[str[j] - 'a'];
        }

        cout << max_index + 1 << "\n";
        //cout << "**********" << endl;
    }
    return 0;
}