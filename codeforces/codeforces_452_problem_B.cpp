#include <bits/stdc++.h>

using namespace std;

/*void computeLPSArray(int pat[], int M, int *lps);
 
// Prints occurrences of txt[] in pat[]
int KMPSearch( std::vector<int> txt, int pat[])
{
    int M = txt.size();
    int return_value = 0;
    int N = sizeof(pat)/sizeof(*pat);
 
    // create lps[] that will hold the longest prefix suffix
    // values for pattern
    int lps[M];
 
    // Preprocess the pattern (calculate lps[] array)
    computeLPSArray(pat, M, lps);
 
    int i = 0;  // index for txt[]
    int j  = 0;  // index for pat[]
    while (i < N)
    {
        if (pat[j] == txt[i])
        {
            j++;
            i++;
        }
 
        if (j == M)
        {
            return_value = 1;
            j = lps[j-1];
            //return return_value;
            break;
        }
 
        // mismatch after j matches
        else if (i < N && pat[j] != txt[i])
        {
            // Do not match lps[0..lps[j-1]] characters,
            // they will match anyway
            if (j != 0)
                j = lps[j-1];
            else
                i = i+1;
        }
    }
    return return_value;
    
}
 
// Fills lps[] for given patttern pat[0..M-1]
void computeLPSArray(int pat[], int M, int *lps)
{
    // length of the previous longest prefix suffix
    int len = 0;
 
    lps[0] = 0; // lps[0] is always 0
 
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M)
    {
        if (pat[i] == pat[len])
        {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar 
            // to search step.
            if (len != 0)
            {
                len = lps[len-1];
 
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
*/

int search(int pat[], std::vector<int> txt)
{
    int M = sizeof(pat)/sizeof(pat[0]);
    int N = txt.size();
    int result = 0;

 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        int j;
 
        /* For current index i, check for pattern match */
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            {
            	result = 1;
            	break;

            }//printf("Pattern found at index %d n", i);
    }
    return result;
}

int main(int argc, char const *argv[])
{

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


	std::vector<int> v;

	int flag = 0;


	for (int i = 1; i <=2400; ++i)
	{
		flag = 0;
		if(((i % 4  == 0) && (i % 100 != 0)) || (i % 400 == 0) )
			flag = 1;
		if(flag == 1)
		{
			v.push_back(31);
			v.push_back(29);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);


		}
		else
		{
			v.push_back(31);
			v.push_back(28);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);
			v.push_back(30);
			v.push_back(31);
		}


	}

		int n;

		cin>>n;

		int arr[n];

		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}
		int result = search(arr, v);

		if(result == 1)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";

	
	return 0;
}