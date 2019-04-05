//https://www.codechef.com/APRIL19B/problems/KLPM
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	int res = 0;

	cin >> str;
	std::vector<string> v;
	string str1, str2, str3;
	int flag = 0, len2;

	for(int i = 0; i < str.length(); i++)
	{
		for(int j = i + 1; j <= str.length(); j++)
		{

			//cout << str.substr(i,j - i) << endl;

			for(int k = 0; k < v.size(); k++)
			{
			    cout << "substring = " << str.substr(i,j - i);
			    cout << " vector size till now = " << v.size();
				str1 = str.substr(i,j - i);
				str2 = v[k];
				str3 = str1 + str2;
				flag = 0;
				len2 = str3.length();
				//check for palindrome
				for(int l = 0; l < len2/2; l++)
				{
					if(str3[l] != str3[len2 - l - 1])
					{
						flag = 1 ;//not palindrome
						break;
					}
				}

				if(flag == 0) //palindrome no need to check other combination
					res++;
				else
				{
					flag = 0;
					str3 = str2 + str1;

					for(int l = 0; l < len2/2; l++)
					{
						if(str3[l] != str3[len2 - l - 1])
						{
							flag = 1; //not palindrome
							break;
						}
					}
					if(flag == 0) 
					res++;

				}
				
				cout  << " count of palindrome = " << res << endl;
			}

			v.push_back(str.substr(i,j - i));
		}
	}

	cout << res;
	return 0;
}