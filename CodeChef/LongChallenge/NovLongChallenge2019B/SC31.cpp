//https://www.codechef.com/NOV19B/problems/SC31
//Accepted
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    string weapon;

    cin >> t;

    while (t--)
    {

        int n;

        cin >> n;

        vector<string> weapons;

        for (int i = 0; i < n; i++)
        {
            cin >> weapon;
            //cout << weapon;
            weapons.push_back(weapon);
        }

        //cout << "no of participants" << weapons.size();

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < 10; j++)
                if (weapons[i][j] == weapons[i + 1][j])
                    weapons[i + 1][j] = '0';
                else
                    weapons[i + 1][j] = '1';
        }

        //cout << "last participant = " <<  weapons[n-1] << endl;
        int res = 0;
        for (int i = 0; i < 10; i++)
        {
            if (weapons[n - 1][i] == '1')
                res++;
        }

        cout << res << endl;
    }

    return 0;
}