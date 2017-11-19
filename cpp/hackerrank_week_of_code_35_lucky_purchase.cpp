#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    //vector<int> v;
    //vector<string> name;
    int flag = 0,flag2 = 0;
    long long int min = 10000000000;
        long long int value,temp,t,count1,count2;
    string result;
    for(int a0 = 0; a0 < n; a0++){
        string name;
        
   
        cin >> name >> value;
        temp = value;
        flag = 0;
        count1 = 0;
        count2 = 0;
        while(temp > 0)
        {
            t = temp%10;
            if(t!= 4 || t!= 7)
            {   flag = 1;
                break;
               
            }
             if(t == 4)
                    count1++;
                else
                    count2++;
            temp/=10;
        }
            
            if(flag == 0 && count1 == count2)
            {
                if(value < min)
                {
                    
                    result = name;
                    min = value;
                }
                flag2 = 1;
            }
        
        
        
        
        
    }
    if(flag2 == 0)
        printf("-1");
    else
        cout<<result;
        
    cout<<"min = "<<min;
        
    return 0;
}
