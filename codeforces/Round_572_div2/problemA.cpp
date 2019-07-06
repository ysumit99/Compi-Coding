//https://codeforces.com/contest/1189/problem/A
//Incomplete / Almost done
#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
#ifdef DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ios_base :: sync_with_stdio(false);
	cin.tie (0);

    int n;

    cin >> n;


    string str;

    cin >> str;

    int i;
    for(i = n; i >= 1; i--)
    {
        int count_1 = 0, count_0 = 0, counter = 0, flag = 0;
        for(int j = 0; j < n; j++)
        {
           
           if(str[j] == '0')
                count_0++;
           else
                count_1++;

            counter++;
            if(counter % i == 0)
            {
                if(count_1 == count_0)
                {
                    flag = 1;
                    break;
                }
                count_0 = 0;
                count_1 = 0;
            }
            
        }
        if(flag == 0)
            {
                cout << "count_ 0 " << count_0 << " count_1 = " << count_1 << " i = " << i <<  endl; 
                break;
            }

    }
       int step = 0;

       if(n % i == 0)
       {
           step =  n/i;
       }
       else
        {
            step = (n/i) + 1;
        } 
        
        cout << step << "\n";

        int counter = 0;

        for(int j = 0; j < n; j++)
        {
            // if(j != 0 && (j+1) % i == 0)
            // {
            //     cout << " ";
            // }
            
           
            counter++;
             if(j != 0 && counter == i)
            {
                
                    cout << " ";
                    counter = 0;
            }
            cout << str[j];
        }


   
	

	return 0;
}