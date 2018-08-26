int numberOfPairs(vector <int> a, long k) {
    
    
    
    //sort vector
    sort(a.begin(),a.end());
    int n = a.size();
    //use a set to remove duplicate elements .this fails in case an element is half of k so while removing duplicates one more condition is
    //required which checks if an element is half of k, then remove duplicate but exception is allowed in case an element is half of k
    /*set<int> s( a.begin(), a.end() );
    a.assign( s.begin(), s.end() ); 
    */
    
    //logic to remove dupliacte elements manually
    std::vector<int> v; //new vector to store elements after removing duplicates
    int prev = a[0];
    int flag = 0;
    v.push_back(prev);
    for(int i = 1 ;i < n ;i++)
    {
        if(a[i] != prev)
        {
            v.push_back(a[i]);
            flag = 0;
        }
        else if(a[i] == prev && prev == (k/2 + k%2) && flag == 0)//upto 2 duplicate elements allowed only for this case 
        {
            v.push_back(a[i]);
            flag = 1;
        }
        prev = a[i];
    }
    n = v.size();
    
    //brute force
    int count = 0;
    for(int i = 0 ; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(v[i] + v[j] == k)
            {
                //cout<<a[i] << a[j] <<endl;
                count++;
            }
        }
    }
    return count;
}