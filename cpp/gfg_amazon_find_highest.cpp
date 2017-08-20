//http://practice.geeksforgeeks.org/problems/find-the-highest-number/0
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        scanf("%d",&n);
        std::vector<int> v;
        int ele;
        for(int i = 0 ; i<n ; i++)
        {
            scanf("%d",&ele);
            v.push_back(ele);
        }
        int result = *max_element(v.begin(),v.end());
        printf("%d\n",result);
    }
    return 0;
}