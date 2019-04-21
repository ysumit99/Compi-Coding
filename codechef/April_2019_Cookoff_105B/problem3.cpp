//https://www.codechef.com/COOK105B/problems/PEWDSVTS
//Not Correct
#include<bits/stdc++.h>

using namespace std;

int main()
{

    ios_base :: sync_with_stdio(false);
    cin.tie (0);


    int t;
    long long int n, a, b, x, y, z, days, users_gained, remain;
    long long int res;
    cin >> t;

    while(t--)
    {
        cin >> n >> a >> b >> x >> y >> z;

        res = 0;
        std::vector<long long int> v(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        // (z - b + y) / y;
        days = (z - b + y) / y;
        cout << "days = " << days;

        if(days == 1)
        	{
        		cout << "RIP" << endl;
        		continue;

        	}

        //cout << "days = " << days << endl;
        users_gained = a + (days - 1)*x;
        //cout << "users_gained = " << users_gained << endl;

        remain = z - users_gained;

       // cout << "remain = " << remain << endl;
        if((z - b + y) % y == 0)
        {
            //cout << "if" << endl;
            while(remain > 0)
            {
                if(v[0] == 0)
                    break;
                remain -= v[0];
                res++;
                v[0] /= 2;
                sort(v.rbegin(), v.rend());


            }

            if(remain == 0)
            {
                if(v[0] != 0)
                {
                    res++;
                    cout << res << endl;
                }
                else
                    cout << "RIP" << endl;

            }
            else if(remain < 0)
            {
            	cout << res << endl;
            }
            else
            {
            	 cout << "RIP" << endl;
            }

        }
        else
        {

            //cout << "else" << endl;
            while(remain > 0)
            {
                //cout << "v[0] = " << v[0] << endl;
                if(v[0] == 0)
                    break;
                remain -= v[0];
                res++;
                v[0] /= 2;
                sort(v.rbegin(), v.rend());


            }

            if(remain <= 0)
                cout << res << endl;
            else
                cout << "RIP" << endl;
        }



    }

    return 0;
}
