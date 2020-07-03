#include <bits/stdc++.h>
using namespace std;

int getDigitSum(int num)
{

    int digitSum = 0;
    while (num > 0)
    {
        digitSum += num % 10;
        num /= 10;
    }

    return digitSum;
}
int main()
{
    int t;

    cin >> t;

    while (t--)
    {
        int n, cardChef, cardMorty, sumChef = 0, sumMorty = 0, pointChef = 0, pointMarty = 0;

        cin >> n;

        //calculate sum for each round
        for (int i = 0; i < n; i++)
        {
            cin >> cardChef >> cardMorty;

            sumChef = getDigitSum(cardChef);
            sumMorty = getDigitSum(cardMorty);

            if (sumChef > sumMorty)
            {
                pointChef++;
            }
            else if (sumMorty > sumChef)
            {
                pointMarty++;
            }
            else
            {
                pointChef++;
                pointMarty++;
            }
        }

        //Decide Winner
        if (pointChef > pointMarty)
        {
            cout << "0 " << pointChef << endl;
        }
        else if (pointMarty > pointChef)
        {
            cout << "1 " << pointMarty << endl;
        }
        else
        {
            cout << "2 " << pointMarty << endl;
        }
    }
    return 0;
}