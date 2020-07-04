#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int k;

        cin >> k;

        for (int i = 1; i <= 64; i++)
        {

            if (i == 1)
                cout << "O";
            else if (i <= k)
                cout << ".";
            else
                cout << "X";

            if (i % 8 == 0)
                cout << "\n";
        }
    }

    return 0;
}