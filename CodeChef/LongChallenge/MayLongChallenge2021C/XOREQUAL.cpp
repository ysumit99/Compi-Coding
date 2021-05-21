//https://www.codechef.com/MAY21C/problems/XOREQUAL
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int getMod(string str, int n, int k)
{

    // pwrTwo[i] will store ((2^i) % k)
    int pwrTwo[n];
    pwrTwo[0] = 1 % k;
    for (int i = 1; i < n; i++)
    {
        pwrTwo[i] = pwrTwo[i - 1] * (2 % k);
        pwrTwo[i] %= k;
    }

    // To store the result
    int res = 0;
    int i = 0, j = n - 1;
    while (i < n)
    {

        // If current bit is 1
        if (str[j] == '1')
        {

            // Add the current power of 2
            res += (pwrTwo[i]);
            res %= k;
        }
        i++;
        j--;
    }
    return res;
}

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
        cin >> n;

        string num = "";

        if (n == 1)
        {
            num = "1";
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {

                if (i == 1)
                {
                    num += "1";
                }
                else
                {
                    num += "0";
                }
            }
        }

        int len = num.length();
        int k = 1000000007;

        cout << getMod(num, len, k) << endl;
    }

    return 0;
}