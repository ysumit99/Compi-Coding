//method to generate random test cases within the given constraints.
static void generateTestCase(String inputFilePath, int testCount) throws IOException {
        
    /* second parameter 'false' overwrites the existing values */
    FileWriter fr = new FileWriter(new File(inputFilePath), false); 
    BufferedWriter writer = new BufferedWriter(fr);

    while(testCount > 0)
    {
        
            /***
             * Generate Random Test Values for n,k
             * Note this method can be refactored latter to generalize for any input (here only 'n' and 'k' are taken into account)
             * and constraints  as well
             */
        
            int n = (int)(Math.random()*10000); /* Here 'n' can be upto 10^4 */
            long k  =(long)(Math.random()*1000000000000L); /* Here 'k' can be maximum 10^9 */
            
            writer.append(n + " " + k + "\n");
            
            for(int i = 0; i < n; i++)
                writer.append((int)(Math.random()*10000000) + " "); /* A[i] values are between 1 and 10^7 */
                
        
        testCount--;
    }
    
     writer.close();
}

