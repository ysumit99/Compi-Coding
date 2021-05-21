//https://www.codechef.com/problems/DIVIDING

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

    long long int n, num;
    long long int sum = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num;
        sum += num;
    }

    if (sum == (n * (n + 1) / 2))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}