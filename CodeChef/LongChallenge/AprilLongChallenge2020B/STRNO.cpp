//https://www.codechef.com/APRIL20B/problems/CARSELL
//Accepted
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            //cout << n << " is not prime" << endl;
            return false;
        }
    }
    //cout << n << " is prime" << endl;
    return true;
}

int main()
{
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    vector<pair<int, int> > v;
    // vector<pair<int, int>>::iterator itr;
    for (int i = 1; i < 10000; i++)
    {
        int count = 0, primeCount = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
                if (j != 1 && isPrime(j))
                    primeCount++;
            }
        }
        //cout << i << " : " << count << " | " << primeCount << endl;
        v.push_back(make_pair(count, primeCount));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << "," << v[i].second << endl;
    }

    return 0;
}