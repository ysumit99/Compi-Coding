//https://www.codechef.com/SEPT19B/problems/CHEFINSQ
//Wrong Answer => (only 1 Test case passing) => Possible reason: Integer Overflow! Try BigInteger in Java
//This is getting accepted in Java except for some corner case (6 out of 7 subtask passing)!

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll factorial(ll n)
{
    ll result = 1;

    while(n >= 1)
        result *= n--;

    return result;
}

ll combination(ll n, ll r)
{
    return factorial(n)/(factorial(n-r)*factorial(r));
}

int main()
{
    #ifdef DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    int t;

    cin >> t;

    while(t--)
    {
        int n,k,ele;

        cin >> n >> k;

        int freq[101] = {0}; //store count of all A[i]


        for (size_t i = 0; i < n; i++)
            {
                cin >> ele;
                freq[ele]++;
            }

            // for (size_t i = 1; i <= 100; i++)
            // {
            //     //cout << "freq of " << i << " => " << freq[i] << "\n";
            // }
            

        int count = 0;
        ll result = 0;

        for (size_t i = 1; i <= 100; i++)
        {
            if(count + freq[i] > k)
                {
                    //cout << "count + freq[" << i << "] = " << count + freq[i] << "\n";
                    result = combination(freq[i], k-count); // => nCR
                    //cout << "freq[i] = " << freq[i] << " | count-k = " << count-k << " | nCr = " << result << "\n";
                    break;
                }
            else
                {
                    count += freq[i];
                    //cout << "count = " << count << "\n";
                }
                
            
        }

        cout << result << "\n";
        
        
    }

    return 0;
}