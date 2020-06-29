#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int n, b, m, ele, res = 0, prevBlock = -1;

        cin >> n >> b >> m;

        vector<int> v;

        for (int i = 0; i < m; i++)
        {
            cin >> ele;
            v.push_back(ele);
        }

        for (int i = 0; i < m; i++)
        {

            int currentBlock = v[i] / b;
            if (currentBlock != prevBlock)
                res++;
            prevBlock = currentBlock;
        }

        cout << res << endl;
    }

    return 0;
}