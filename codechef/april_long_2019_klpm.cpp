//https://www.codechef.com/APRIL19B/problems/KLPM
#include<bits/stdc++.h>

using namespace std;

bool ispalindrome(string str)
{
	int len = str.length();
	for (int i = 0; i < len; ++i)
	{
		if(str[i] != str[len - 1 - i] )
			return false;
	}

	return true;
}

int main(int argc, char const *argv[])
{
	string str;
	int res = 0;

	cin >> str;
	std::vector<string> v;
	string str1, str2, str3;
	int flag = 0, len2, len = str.length();

	for(int i = 0; i < len; i++)
	{
		for(int j = i + 1; j <= len; j++)
		{
			//cout << "*********************end*********" << endl;
			//cout <<  str.substr(i,j - i) << endl;
			v.clear();
			cout << "Iteration" << endl;
			for(int k = len - j; k < len; k++)
			{
				for(int l = k + 1; l <= len; l++)
				{
					//if(ispalindrome(str.substr(i,j - i) + str.substr(k,l - k)))
						//res++;
					//v.push_back(str.substr(k,l - k));
					cout << str.substr(k,l - k) << endl;
				}
			}
			cout << " end of Iteration" << endl;
			//v.push_back(str.substr(i,j - i));
		}
	}


	cout << res;
	return 0;
}