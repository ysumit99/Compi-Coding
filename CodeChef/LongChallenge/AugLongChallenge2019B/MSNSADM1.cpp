//https://www.codechef.com/AUG19B/problems/MSNSADM1
#include<bits/stdc++.h>

using namespace std;

int main()
{

    #ifdef DEBUG
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);


    int t, n, ele, max;

    cin >> t;

    while(t--)
    {
        cin >> n;
        vector<int> a;
        vector<int> b;
        max = INT_MIN;

        for(auto i = 0; i < n; i++)
        {
            cin >> ele;
            a.push_back(ele);
        }

        for(auto i = 0; i < n; i++)
        {
            cin >> ele;
            b.push_back(ele);
        }

        for(int i = 0; i < n; i++)
            (a[i]*20 - b[i]*10 > max) ? (max = a[i]*20 - b[i]*10) : (max = max); 


        if(max < 0)
            max = 0;

       
       



        cout << max << "\n";

        

        



    }
    return 0;
}