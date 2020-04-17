//https://www.codechef.com/APRIL20B/problems/CARSELL
//Accepted
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n;
        long long int profit = 0;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        for (int i = 0; i < n; i++)
        {
            profit += max(v[i] - i, 0);
            profit %= 1000000007;
        }
        cout << profit << endl;
    }
    return 0;
}