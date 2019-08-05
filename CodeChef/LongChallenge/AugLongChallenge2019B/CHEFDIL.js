var fs = require('fs');
 
fs.readFile('input.txt', 'utf8', function(err, contents) {
    
   let input = contents.split("\n");
   //console.log(input);
   input.shift();
  //console.log(input);

   //let t = parseInt(input[0]);
   //console.log("test cases = "  + typeof(t));

    for(ele in input)
    {
        let count1 = 0;
        for(char in input[ele])
            if(input[ele][char] === "1")
                count1++;

        if((count1 % 2) === 1)
            console.log("YES");
        else    
            console.log("NO");
        
        //console.log("count of 1's = " + count1);
        
    }
  



});


 

