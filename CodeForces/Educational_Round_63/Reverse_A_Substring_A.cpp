//https://codeforces.com/contest/1155/problem/A
//Accepted
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;

	cin >> n;

	string s;

	cin >> s;

	int prev, prev_pos, current, flag = 0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(i == 0)
		{
			
			prev = s[i] - 'a';
			prev_pos = i + 1;
			continue;
		}

		current = s[i] - 'a';

		if(current < prev )
		{
			cout << "YES" << "\n" << prev_pos << " " << i + 1;
			flag = 1;
			break;

		}

		prev = current;
		prev_pos = i + 1;
	}

	if(flag == 0)
		cout << "NO";
	return 0;
}

//Better Approach - Official Editorial
/*

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int n;
	string s;
	cin >> n >> s;
	
	for (int i = 1; i < int(s.size()); ++i) {
		if (s[i] < s[i - 1]) {
			cout << "YES" << endl;
			cout << i << " " << i + 1 << endl;
			return 0;
		}
	}
	
	cout << "NO" << endl;

	return 0;
}
*/