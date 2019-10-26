//https://www.codechef.com/LTIME77B/problems/HIT
//Accepted Codechef Submission => https://www.codechef.com/viewsolution/27577476

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

/* factorial */
ll factorial(ll n)
{
    ll result = 1;

    while (n >= 1)
        result *= n--;

    return result;
}

/* Combination =>  nCr */
ll combination(ll n, ll r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{

#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        int divide = n / 4, res[3] = {0}, count = 0, notPossible = false;

        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % divide == 0 && i + 1 < n)
            {

                if (v[i] == v[i + 1]) /* cannot be divided equally */
                {
                    cout << "-1\n";
                    notPossible = true;
                    break;
                }
                else
                    res[count++] = v[i + 1];
            }
        }

        if (!notPossible)
        {

            for (int i = 0; i < 3; i++)
                cout << res[i] << " ";
            cout << "\n";
        }
    }
    return 0;
}