#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int t;

	cin>>t;

	while(t--)
	{
		int n,m;
		cin>>n>>m;
		string a,b;
		cin>>a>>b;

		//string r1,r2;
		std::vector<char> v1;
		std::vector<char> v2;

		char prev = a[0];
		v1.push_back(prev);
		
		//int j = 0;
		//checking for blocks in string a
		for (int i = 1; i < n; ++i)
		{
			if(a[i] != prev)
				v1.push_back(a[i]);
			prev = a[i];
		}

		//checking for blocks in string b
		prev = b[0];
		v2.push_back(prev);

		for (int i = 1; i < m; ++i)
		{
			if(b[i] != prev)
				v2.push_back(b[i]);
			prev = b[i];
		}
/*
		int j = 0;
		int result1 = 0,result2 = 0;
		int stop_flag = 0;
		//int check_flag = 0; 
		for (int i = 0; i < v1.size(); ++i)
		{
			if(stop_flag == 0)
			{
				if(v1[i] == v2[j])
					{
						j++;
						if(j == (v2.size()-1))
							stop_flag = 1;
					}
				result1++;
			}
			else
			{

				result1 += (v1.size()-1 - i);
				break;
			}
		}
		if(stop_flag == 0)
			result1 += (v2.size() - 1 - j);


		//check for other option
		j = 0;
		stop_flag = 0; 
		for (int i = 0; i < v2.size(); ++i)
		{
			if(stop_flag == 0)
			{
				if(v2[i] == v1[j])
					{
						j++;
						if(j == (v1.size()-1))
							stop_flag = 1;
					}
				result2++;
			}
			else
			{
				result2 += (v2.size()-1 - i);
				break;
			}
		}
		if(stop_flag == 0)
			result2 += (v1.size() - 1 - j);


		cout<< min(result1+1, result2+1) <<"\n";

*/
		/*int block_count = 0;
		int found = 0;
		int flag = 0;
		int last_index = 0;
		for (int i = 0; i < v1.size(); ++i)
		{
			block_count++;
			flag = 0;
			for (int j = last_index; j < v2.size(); ++j)
			{
				if(v1[i] == v2[j])
				{
					found++;
					last_index = j;
					//flag = 1;
					break;

				}
			}
			
		}

		int result = (v2.size() - found + block_count);

		 block_count = 0;
		 found = 0;
		 flag = 0;
		 last_index = 0;
		for (int i = 0; i < v2.size(); ++i)
		{
			block_count++;
			flag = 0;
			for (int j = last_index; j < v1.size(); ++j)
			{
				if(v2[i] == v1[j])
				{
					found++;
					last_index = j;
					//flag = 1;
					break;

				}
			}
			
		}

		int result2 = (v1.size() - found + block_count);

		cout<< min(result,result2) <<"\n";*/


int size1 = v1.size();
int size2 = v2.size();

   int final_lcs[size1+1][size2+1];
   int l, m1;
  
   
   for (l=0; l<=size1; l++)
   {
     for (m1=0; m1<=size2; m1++)
     {
       if (l == 0 || m1 == 0)
         final_lcs[l][m1] = 0;
  
       else if (v1[l-1] == v2[m1-1])
         final_lcs[l][m1] = final_lcs[l-1][m1-1] + 1;
  
       else
         final_lcs[l][m1] = max(final_lcs[l-1][m1], final_lcs[l][m1-1]);
     }
   }
    
    int result1 = (v1.size() - final_lcs[size1][size2] + v2.size());
   
    cout<<result1<<"\n";
   

		


	}
	return 0;
}