//https://www.codechef.com/problems/LOSTMAX
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	cin.ignore();

	while(t--)
	{

        char input[256];
        
       

          
          std::cin.getline (input,256);

          
          int input_length = strlen(input);

          
          int no_of_elements = (input_length/2) + 1;
          no_of_elements--;
          
          std::vector<int> v;
          int i = 0;
          int flag = 0; //stores actual N i.e when unjumbled.
         while(input[i]!='\0')
          {
          	int val = input[i] - '0';
          	//cout<<val;
          	if(i%2 == 1)
          		{   i++;
          		continue;
          	}
          	else if(val == no_of_elements  && flag == 0)
          	{	

          		flag = 1;
          	}

          	else if(flag == 1 && val == no_of_elements)
          	{
          		v.push_back(val);
          	}
          	else
          	{

          		v.push_back(val);
          	}

          	i++;
          }

          sort(v.rbegin(),v.rend());

          cout<<v[0]<<endl;

         //cout<<input[0]<<input[2];



	}
	return 0;
}