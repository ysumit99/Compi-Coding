//https://www.codechef.com/DEC19B/problems/PLMU
//Accepted
#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<long long int> &v)
{

    int res = 0, n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] * v[j] == v[i] + v[j])
                res++;
        }
    }

    return res;
}
int main()
{

    int t, res = 0;

    cin >> t;

    while (t--)
    {
        int n, ele, countTwo = 0, countZero = 0;

        cin >> n;
        vector<long long int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] == 2)
                countTwo++;
            else if (v[i] == 0)
                countZero++;
        }

        res = countTwo * (countTwo - 1) / 2 + countZero * (countZero - 1) / 2;
        cout << res << "\n";
    }

    return 0;
}