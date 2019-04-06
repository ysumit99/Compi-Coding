#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    
    int t, len;
    string str;
    long long int n, all_5_flag, flag, digit;
    
    cin >> t;
    
    for(int k = 0; k < t; k++)
    {
        cin >> str;
        len = str.length();
        all_5_flag = 0;
        flag = 0;
        vector<int> first;
         vector<int> second;
        
        
        for(int i = 0; i < len; i++)
        {
            digit = str[i] - '0';
            if(digit == 4 || digit > 5)
                flag = 1; //no special case;
           if(digit != 5)
                {
                    all_5_flag = 1; //not every digit is 5   
                    first.push_back(digit/4);
                    second.push_back(digit - (digit / 4));
                        
                    
                }
            else
                {
                    
                    first.push_back(0);
                    second.push_back(5);
                
                }
        }

         if(all_5_flag == 0)
        {
            cout << "All are 5's" << endl;
            cout << "Case #" << k + 1 << ": ";
             for(int i = 0; i < len; i++)
                cout << "3";
             cout << " ";
            for(int i = 0; i < len; i++)
                cout << "2";
            cout << endl;
            
        }

        
         else if(flag == 0)
        {
             cout << "All are 5's or less than 4" << endl;
             cout << "Case #" << k + 1 << ": ";
             for(int i = 0; i < len; i++)
                {
                    digit = str[i] - '0';
                    if(digit == 5 || digit == 0)
                        {
                            if(i!=0)
                                cout << "0";
                            second[i] = digit;

                        }
                    else 
                        {
                            if(!(i == 0 && digit == 1))
                                cout << digit - 1;
                            second[i] = 1;
                        }


                }
            cout << " ";
            for(int i = 0; i < len; i++)
               {    if(!(i == 0 && second[i] == 0))
                        cout << second[i];
               } 
            cout << endl;
        }
        /*else if(all_5_flag == 1 && flag != 0)*/
        else
        {
             cout << "General Case" << endl;
            cout << "Case #" << k + 1 << ": ";
            for(int i = 0; i < len; i++)
                if(!(first[i] == 0 && i == 0) )
                    cout << first[i];
            cout << " ";
            for(int i = 0; i < len; i++)
                if(!(second[i] == 0 && i == 0))
                    cout << second[i];
            cout << endl;
        }

    
        
        
    }
    return 0;
}