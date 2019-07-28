//https://leetcode.com/submissions/detail/173502720/

class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        
        int size = A.size();
        
        int flag = 0, prev;
        
        bool is_monotone = true;
        
        if(size == 1) //base case
            return is_monotone;
        
        prev = A[1] - A[0];
        
        for(int i = 1; i < size; i++)
        {
            if(flag == 0)
            {
                prev = A[i] - A[i-1];
                if(prev != 0) //if first non zero diff found
                {
                    flag = 1;
                    
                    
                    
                }
                
                continue;
                
                
            }
            
            if(prev > 0)
            {
                if(A[i] - A[i-1] < 0)
                {
                    is_monotone = false;
                    break;
                }
            }
            else if(prev < 0)
            {
                 if(A[i] - A[i-1] > 0)
                {
                    is_monotone = false;
                    break;
                }
            }
            
            if(A[i] - A[i-1] != 0)
            {
                prev = A[i] - A[i-1];
            }
        }
        
        return is_monotone;
    }
};
// 1 1 1 2 3 