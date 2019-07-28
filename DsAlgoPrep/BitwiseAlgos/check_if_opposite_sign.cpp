//https://www.geeksforgeeks.org/detect-if-two-integers-have-opposite-signs/
#include<bits/stdc++.h>

bool oppositeSigns(int x, int y)
{
	return ((x^y) < 0);
}

int main(int argc, char const *argv[])
{
	int x = 100, y = -100;
	if(oppositeSigns(x,y) == true)
		cout << "Signs are Opposite" << endl;
	else
		cout << "Signs are not opposite" << endl;

	return 0;
}