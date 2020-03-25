//https://www.codechef.com/COOK116B/problems/GIFTSRC
//Accepted
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n, x = 0, y = 0;
    string str;

    cin >> t;

    while (t--)
    {
        x = 0;
        y = 0;
        cin >> n;
        cin >> str;

        for (int i = 0; i < str.length(); i++)
        {
            if (i == 0)
            {

                switch (str[i])
                {
                case 'L':
                    x--;
                    break;
                case 'R':
                    x++;
                    break;
                case 'U':
                    y++;
                    break;
                case 'D':
                    y--;
                    break;
                default:
                    cout << "Not matched anything";
                }
            }
            else
            {
                bool flag = false;
                if (str[i] == 'L' || str[i] == 'R')
                {
                    if (str[i - 1] != 'L' && str[i - 1] != 'R')
                        flag = true;
                }
                else if (str[i] == 'U' || str[i] == 'D')
                {
                    if (str[i - 1] != 'U' && str[i - 1] != 'D')
                        flag = true;
                }

                if (flag)
                {
                    switch (str[i])
                    {
                    case 'L':
                        x--;
                        break;
                    case 'R':
                        x++;
                        break;
                    case 'U':
                        y++;
                        break;
                    case 'D':
                        y--;
                        break;
                    default:
                        cout << "Not matched anything";
                    }
                }
            }
        }

        cout << x << " " << y << endl;
    }
    return 0;
}