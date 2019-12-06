//https://www.codechef.com/DEC19B/problemIndexs/WATSCORE
//Accepted
//https://www.codechef.com/viewsolution/28081706
#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifdef DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base ::sync_with_stdio(false);
    cin.tie(0);

    int testCases;

    cin >> testCases;

    while (testCases--)
    {
        int submissions, problemIndex, score;

        cin >> submissions;
        int maxScores[9] = {0}, result = 0;

        for (int i = 0; i < submissions; i++)
        {
            cin >> problemIndex >> score;

            if (!(problemIndex > 8) && score > maxScores[problemIndex])
                maxScores[problemIndex] = score;
        }

        for (int ele : maxScores)
            result += ele;

        cout << result << "\n";
    }

    return 0;
}