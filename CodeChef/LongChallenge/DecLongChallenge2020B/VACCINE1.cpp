//https://www.codechef.com/DEC20B/problems/VACCINE1
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

    int d1, v1, d2, v2, p, totalVaccine = 0, dayCount = 1;

    cin >> d1 >> v1 >> d2 >> v2 >> p;

    while (totalVaccine < p)
    {
        if (d1 <= dayCount)
        {
            totalVaccine += v1;
        }

        if (d2 <= dayCount)
        {
            totalVaccine += v2;
        }

        if (totalVaccine >= p)
            break;
        dayCount++;
    }

    cout << dayCount << endl;

    return 0;
}