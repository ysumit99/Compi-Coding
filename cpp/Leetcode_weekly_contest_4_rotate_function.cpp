//https://leetcode.com/contest/leetcode-weekly-contest-4/problems/rotate-function/
class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int size =  A.size();
        
        if(size == 0)
            return 0;
       long long int temp_max = 0, max = -999999999999;
        
        for(int i = 0; i < size; i++)
        {
            temp_max = 0;
            
            for(int j = 0; j < size; j++)
            {
                temp_max += j*A[j];
            }
            //cout << temp_max <<endl;
            if(temp_max > max)
                max = temp_max;
            rotate(A.begin(), A.begin()+size-1, A.end());
        }
        
        
        return max;
        
    }
};