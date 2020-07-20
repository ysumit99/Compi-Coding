#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, ele;
    int larger, smaller, temp;
    bool isFirstLarger;
    long long int cost;

    cin >> t;

    while (t--)
    {
        cin >> n;
        cost = 0;
        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            a.push_back(ele);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> ele;
            b.push_back(ele);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (a[i] > b[i])
                {
                    larger = a[i];
                    isFirstLarger = true;
                    smaller = b[i];
                }
                else
                {
                    larger = b[i];
                    isFirstLarger = false;
                    smaller = a[i];
                }

                //no more elements so impossible to match
                if (i == n - 1)
                {
                    cost = -1;
                    break;
                }

                if (isFirstLarger)
                {
                    if (b[i + 1] != b[i])
                    {
                        cost = -1;
                        break;
                    }
                    cost += b[i];
                    temp = a[i];
                    a[i] = b[i + 1];
                    b[i + 1] = temp;
                }
                else
                {
                    if (a[i + 1] != a[i])
                    {
                        cost = -1;
                        break;
                    }
                    cost += a[i];
                    temp = b[i];
                    b[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }

        cout << cost << "\n";
    }
    return 0;
}