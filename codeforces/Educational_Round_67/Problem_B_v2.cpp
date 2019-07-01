//http://codeforces.com/contest/1187/problem/B
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
    int n, m, next_index = 0;

    cin >> n;

    string str;

    cin >> str >> m;
    //int count[26][2] = {0};
    vector<int> v[26];
    vector<int>count(26);

   

    for (int i = 0; i < 26; i++)
        {
            count.push_back(0);
            v[i].push_back(0);
        }

    for (int i = 0; i < n; i++)
    {
       v[str[i] - 'a'].push_back(i);
       count[str[i] - 'a']++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cout << v[i][j] << " ";
    //     }

    //     cout << " | count = " << count[i];

    //     cout << endl;
    // }

    for(int i = 0; i < m; i++)
    {
        cin >> str;

        int m_count[26] = {0};
        int max = -1;

        for(int j = 0; j < str.length(); j++)
        {
            m_count[str[j] - 'a']++;
        }

        for(int j = 0; j < 26; j++)
        {
            if(v[j][m_count[j]] > max)
                max = v[j][m_count[j]];
        }

        cout << max + 1 << endl;
        
    }

    return 0;
}