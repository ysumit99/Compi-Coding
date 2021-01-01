//https://www.codechef.com/JAN21C/problems/DECODEIT
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

    int t, n, sum;
    string str;

    cin >> t;

    string codes[16] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p"};

    while (t--)
    {
        cin >> n;
        cin >> str;
        sum = 0; //stores value of 4 bits in decimal
        for (int i = 0; i < n; i++)
        {

            sum += (str[i] - '0') * pow(2, 3 - (i % 4));
            if ((i + 1) % 4 == 0)
            {

                if (i != 0)
                {
                    cout << codes[sum];
                }
                sum = 0;
            }
        }

        cout << endl;
    }

    return 0;
}