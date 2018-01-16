#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s;

	cin>>s;

	long long int s_len = s.length();

	int q;
	cin>>q;

	long long int p,m;
	std::vector<string> v;
	string temp2;
	//long long int sum[(s_len*(s_len+1))/2] = {0};
	//long long int cum_sum[(s_len*(s_len+1))/2] = {0};
	std::vector<long long int> sum;
	std::vector<long long int> cum_sum;
	std::vector<long long int>::iterator itr;
	int index = 0;

	for (int i = 0; i < s_len; i++) 
        for (int len = 1; len <= s_len - i; len++)
            {
            	//cout << s.substr(i, len) << endl;
            	v.push_back(s.substr(i, len));
            	


            	//sort(v.begin(),v.end());
            }
            sort(v.begin(),v.end());

           


	
    string temp;
	temp.clear();
	for (int i = 0; i < v.size(); ++i)
	{
		
				sum.push_back(v[index].length());
            	if(index == 0)
            		cum_sum.push_back ( sum[index]);
            	else
            		cum_sum.push_back ( cum_sum[index-1] + sum[index]);
            	index++;
	}

	 /*for (int i = 0; i < v.size(); ++i)
            {
            	cout<<v[i]<<endl;
            }

            for (int i = 0; i < sum.size(); ++i)
            {
            	cout<<"sum = "<<sum[i]<<endl;
            }

            for (int i = 0; i < cum_sum.size(); ++i)
            {
            	cout<<"cum_sum = "<<cum_sum[i]<<endl;
            }*/

	/*for(int i = 0; i < v.size(); ++i)
       for( int j = i+1; j < v.size(); ++j)
       {
          if(v[i] > v[j])
          {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
          }
    }*/
    //sort(v.begin(),v.end());
    /*for (int i = 0; i < v.size() ; ++i)
    {
    	cout<<v[i]<<endl;
    }*/
    //string final;
   /* for (int i = 0; i < v.size(); ++i)
	{
		final += v[i];
	}
*/
	//cout<<final<<endl;



long long int g = 0;
long long int k;
long long int block_index = 0;
	while(q--)
	{
		string tempo;
		//int count_till = 0,block = 0;
		long long int final_index,temporary;
		cin>>p>>m;
		k =  ((p * g ) % m) + 1;
		//cout<<"k = "<<k<<endl;
		itr = std::upper_bound (cum_sum.begin(), cum_sum.end(), k);
		block_index = itr - cum_sum.begin();
		//cout<<"block_index = "<<block_index<<endl;
		if(block_index == 0)
		{	
			//cout<<"case: 0"<<endl;
			final_index = block_index;
			tempo = v[final_index];
			temporary = k - 1;
			cout<<tempo[temporary];
		}
		else
		{
			if(cum_sum[block_index-1] == k)
			{
				//cout<<"case: previous equal"<<endl;
				final_index = block_index-1;
				tempo = v[final_index];
				temporary = sum[final_index]-1;
				cout<<tempo[temporary]<<endl;
			}
			else
			{	
				//cout<<"case : previous less"<<endl;
				final_index = block_index;
				tempo = v[final_index];
				temporary = k - cum_sum[(final_index - 1)]-1;
				cout<<tempo[temporary]<<endl;
			}
		}
		//final_index = cum_sum[block_index - 1]-k;
		//cout<<"final_index = "<<final_index<<endl;

		//cout<<"block = "<<block<<endl;

		//tempo = v[block_index-1];
		//cout<<"tempo = "<<tempo<<endl;
		//cout<<"k-count_till "<<k-count_till<<endl;
		//cout<<tempo[final_index]<<"\n";


		//cout<<final[k-1]<<"\n"; 
		g += (long long int)(tempo[temporary]);
		//cout<<"g = "<<g<<endl;

	}
	
	
	return 0;
}