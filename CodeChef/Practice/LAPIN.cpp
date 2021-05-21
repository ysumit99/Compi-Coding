//https://www.codechef.com/problems/LAPIN
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

    int t, n, k;

    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        //cout << str;

        int arr[26] = {0}, arr2[26] = {0};

        for (int i = 0; i < str.length() / 2; i++)
        {
            //cout << "index" << str[i] - 'a' << endl;
            arr[str[i] - 'a']++;
        }

        if (str.length() % 2 == 0)
        {

            for (int i = str.length() / 2; i < str.length(); i++)
            {

                arr2[str[i] - 'a']++;
            }
        }
        else
        {
            for (int i = str.length() / 2 + 1; i < str.length(); i++)
            {

                arr2[str[i] - 'a']++;
            }
        }

        bool isMatching = true;
        for (int i = 0; i < 26; i++)
        {
            // cout << "arr[" << i << "] = " << arr[i] << endl;
            // cout << "arr1[" << i << "] = " << arr2[i] << endl;

            if (arr[i] != arr2[i])
            {

                isMatching = false;
                break;
            }
        }

        if (isMatching)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}