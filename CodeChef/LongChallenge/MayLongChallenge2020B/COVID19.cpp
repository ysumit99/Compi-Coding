//https://www.codechef.com/MAY20B/problems/COVID19
//Accepted

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

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

    while(t--){

        int n, ele;
        int min = 1, max = 1;
        int prev = 0;
        cin >> n;

        vector<int> v;
        vector<int> result;
        vector<int> finalResult;

        for(int i = 0; i < n; i++){
            cin >> ele;
            v.push_back(ele);
        }

        
        for(int i = 0; i < n; i++){
            if(i == 0){
                result.push_back(1);
                prev = 1;
            }else{

                if(v[i] - v[i-1] <= 2){
                    result.push_back(prev+1);
                    prev = prev+1;
                }else{
                    result.push_back(1);
                    finalResult.push_back(prev);
                    prev = 1;
                }
                
            }
        }

        finalResult.push_back(prev);
        cout << *min_element(finalResult.begin(), finalResult.end()) << " " << *max_element(finalResult.begin(), finalResult.end()) << endl;
    }


    return 0;
}


