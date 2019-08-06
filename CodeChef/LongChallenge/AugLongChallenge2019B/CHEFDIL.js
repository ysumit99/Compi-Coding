// var fs = require('fs');
 
// fs.readFile('input.txt', 'utf8', function(err, contents) {
    
//    let input = contents.split("\n");
//    //console.log(input);
//    input.shift();
//   //console.log(input);

//    //let t = parseInt(input[0]);
//    //console.log("test cases = "  + typeof(t));

//     for(ele in input)
//     {
//         let count1 = 0;
//         for(char in input[ele])
//             if(input[ele][char] === "1")
//                 count1++;

//         if((count1 % 2) === 1)
//             console.log("YES");
//         else    
//             console.log("NO");
        
//         //console.log("count of 1's = " + count1);
        
//     }
  



// });


process.stdin.resume();
process.stdin.setEncoding('utf8');

// declare global variables
var input_stdin = "";
var chunks = "";
var input_currentline = 0;

// standard input is stored into input_stdin
process.stdin.on('data', function (data) {
    //input_stdin += data;
    //console.log(input_stdin);
    
});



