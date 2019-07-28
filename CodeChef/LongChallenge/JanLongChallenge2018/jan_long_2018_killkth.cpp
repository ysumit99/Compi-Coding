#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	string s;

	cin>>s;

	//long long int s_len = s.length();

	int q;
	//cin>>q;

	long long int p,m;
	std::vector<string> v;
	string temp2;

	/*for (int i = 0; i < s_len; i++) 
        for (int len = 1; len <= s_len - i; len++)
            {
            	//cout << s.substr(i, len) << endl;
            	v.push_back(s.substr(i, len));
            }
*/

	const size_t size = s.size();
    for (size_t i = 0; i < size; ++i) {
    	temp2.clear();
        for (size_t j = 1; j <= size - i; ++j) {
            if (i & (1 << j)) {
                //std::cout << s[j];
                temp2 += s[j];
            }
        }
        //std::cout << ' ';
        //cout<<temp2<< ' ';
        v.push_back(temp2);
    }

    for (int i = 0; i < v.size(); ++i)
    {
    	cout<<v[i]<<"\n";
    }
    //std::cout << std::endl;


	
    /*string temp;
	temp.clear();

	/*for(int i = 0; i < v.size(); ++i)
       for( int j = i+1; j < v.size(); ++j)
       {
          if(v[i] > v[j])
          {
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
          }
    }
   sort(v.begin(),v.end());
   for (int i = 0; i < v.size(); ++i)
    {
    	cout<<v[i]<<"\n";
    }*/

   
    /*string final;
    final.clear();
    for (int i = 0; i < v.size(); ++i)
	{
		final += v[i];
	}

	cout<<final<<endl;
	/*

long long int g = 0;
long long int k;
	while(q--)
	{
		cin>>p>>m;
		k =  ((p * g ) % m) + 1;
		cout<<final[k-1]<<"\n"; 
		g += int(final[k-1]);

	}
	*/
	return 0;
}