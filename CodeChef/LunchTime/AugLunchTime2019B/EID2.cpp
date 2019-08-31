//https://www.codechef.com/LTIME75B/problems/EID2
#include<bits/stdc++.h>

using namespace std;

int main()
{

    #ifdef DEBUG

        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);

        
    #endif

    ios_base:: sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--)
    {
        int age1, age2, age3;
        int money1, money2, money3;

        cin >> age1 >> age2 >> age3 >> money1 >> money2 >> money3;

        vector< pair <int, int> > v;

        v.push_back(make_pair(age1, money1));
        v.push_back(make_pair(age2, money2));
        v.push_back(make_pair(age3, money3));

        sort(v.begin(), v.end());

     
        
        bool notFairFlag = false;

        for (size_t i = 1; i < v.size(); i++)
        {

            /* Cases where distribution is not fair */
            
            if(v[i].second < v[i-1].second)
                {
                    notFairFlag = true;
                    break;
                }

            if(v[i].first == v[i-1].first && v[i].second != v[i-1].second )
                {
                        notFairFlag = true;
                        break;
                                    
                }


            if(v[i].first != v[i-1].first && v[i].second == v[i-1].second )
                {
                        notFairFlag = true;
                        break;
                                    
                }
            
        }
        

      

       if(notFairFlag)
            cout << "NOT FAIR\n";
        else
            cout << "FAIR\n";
        
        

        
    }


    return 0;
}