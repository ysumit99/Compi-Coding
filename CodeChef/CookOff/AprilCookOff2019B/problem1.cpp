//https://www.codechef.com/COOK105B/problems/CFMM
//Accepted
#include<bits/stdc++.h>

using namespace std;

int main()
{

   /* ios_base :: sync_with_stdio(false);
    cin.tie (0);
    cout.tie (0);
*/
    int t, n;

    cin >> t;
    string str;

    while(t--)
    {
        cin >> n;
        int arr[26] = {0};

        for (int i = 0; i < n; ++i)
        {
            cin >> str;


            for (int j = 0; j < str.length(); ++j)
            {
                arr[str[j] - 'a']++;
            }
        }

        //c o d e c h e f
        int min1 = 0, min2, res;

        while(arr[2] > 1 && arr[3] > 0 && arr[4] > 1 && arr[5] > 0 && arr[7] > 0 && arr[14] > 0  )
        {
            arr[2] -= 2;
            arr[4] -= 2;
            arr[3] -= 1;
            arr[5] -= 1;
            arr[7] -= 1;
            arr[14] -= 1;

            res++;





        }

        cout << res << endl;
    }

    return 0;
}
