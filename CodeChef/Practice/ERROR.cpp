//https://www.codechef.com/problems/ERROR
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
        cin >> str;

        if (str.length() < 3)
        {
            cout << "Bad" << endl;
            continue;
        }
        bool isGood = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (i >= 2)
            {
                if (str[i] == '0')
                {
                    if (str[i - 1] == '1' && str[i - 2] == '0')
                    {
                        isGood = true;
                        break;
                    }
                }
                else
                {
                    if (str[i - 1] == '0' && str[i - 2] == '1')
                    {
                        isGood = true;
                        break;
                    }
                }
            }
        }

        if (isGood)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }

    return 0;
}