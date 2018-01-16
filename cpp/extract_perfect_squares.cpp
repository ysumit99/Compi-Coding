#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	ofstream fo("extract_perfect_squares_output.txt");
    ifstream fi("extract_perfect_squares.txt");

    long long int a,b,c;

    for (int i = 1; i <= 3163 ; ++i)
    {
    	fi>>a>>b>>c;
    	fo<<b<<","<<endl;

    }


	return 0;
}