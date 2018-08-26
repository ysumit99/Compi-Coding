//https://www.codechef.com/JULY17/problems/NITIKA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    cin.ignore();
    
    while(t--)
    {
    
    
    
        char name[256];
        
        char word[11]="",word2[11]="",word3[11]="";

          
          std::cin.getline (name,256);
          int pos[3]={0};
          int j = 0;
          int count = 0;
         for(int i = 0 ;i < strlen(name);i++)
         {
             if(int(name[i])==32)
             {
                 pos[j++] = i;
                count++;
             }
             
         }
         if(count == 0)
            {
                strcpy(word,name);
                
                word[0] = toupper(word[0]);
                for(int i = 1;i<strlen(word);i++)
                {
                    word[i] = tolower(word[i]);
                    
                }
                cout<<word<<endl;
                
            }
         
         else if(count == 1)
         {
             j = 0;
            for(int i = 0; i< pos[0];i++)
                {
                    word[j++] = name[i];
                }
            j = 0;
            for(int i = pos[0]+1; i<strlen(name) ;i++)
                {
                    word2[j++] = name[i];
                }
                
             word[0] = toupper(word[0]);
                  word2[0] = toupper(word2[0]);
                  for(int i = 1;i<strlen(word2);i++)
                {
                    word2[i] = tolower(word2[i]);
                    
                }
                  
                 cout<<word[0]<<". "<<word2<<endl;
         }
         else
         {
             j = 0;
            for(int i = 0; i< pos[0];i++)
                {
                    word[j++] = name[i];
                }
            j = 0;
            for(int i = pos[0]+1; i< pos[1] ;i++)
                {
                    word2[j++] = name[i];
                }
            j = 0;
            for(int i = pos[1]+1; i< strlen(name) ;i++)
                {
                    word3[j++] = name[i];
                }
                
             word[0] = toupper(word[0]);
                word2[0] = toupper(word2[0]);
                word3[0] = toupper(word3[0]);
                for(int i = 1;i<strlen(word3);i++)
                {
                    word3[i] = tolower(word3[i]);
                    
                }
                
                cout<<word[0]<<". "<<word2[0]<<". "<<word3<<endl;
                
         }
         
         
    
        
    }
            
         

         
    return 0;
}