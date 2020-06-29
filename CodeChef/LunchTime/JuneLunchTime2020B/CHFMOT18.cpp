//https://www.codechef.com/LTIME85B/problems/CHFMOT18
#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int t;
    long long int sum, maxDenom, result;

    cin >> t;

    while (t--)
    {

        cin >> sum >> maxDenom;

        if (sum == 1)
        {
            result = 1;
        }
        else if (sum % 2 == 0)
        {
            result = sum / maxDenom;

            if (sum % maxDenom > 0)
                result++;
        }
        else
        {
            result = sum / maxDenom;

            if (sum % maxDenom == 1)
                result++;
            else
                result += 2;
        }

        cout << result << endl;
    }
    return 0;
}