//https://www.interviewbit.com/problems/palindrome-string/
module.exports = { 
    //param A : string
    //return an integer
       isPalindrome : function(A){
       let arr = A.split("").filter(ele => ele.match(/^[a-zA-Z0-9]$/ )).join("").toLowerCase();
       
       for(let i = 0; i < arr.length; i++){
           if(arr[i] != arr[arr.length - 1 - i])
               return 0;
           
       }
       
       return 1;
       }
   };
   