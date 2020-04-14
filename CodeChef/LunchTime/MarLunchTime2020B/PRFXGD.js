//https://www.codechef.com/LTIME82B/problems/PRFXGD
//Accepted
process.stdin.resume();
process.stdin.setEncoding('utf-8');
let arr = "";
process.stdin.on('data', function (chunk) {
    arr += chunk;
});
process.stdin.on('end', function () {
    arr = arr.split("\n");
    let n = parseInt(arr.shift()); // in order ot get no of test cases
    for (let i = 0; i < 2 * n; i += 2) { //loop through no of test cases.
        let str = arr[i];
        let k = arr[i + 1].split(" ")[0];
        let x = arr[i + 1].split(" ")[1];

        let frequency = Array(26).fill(0);
        let deleted = 0;
        let j = 0;
        let result = str.length;
        for (j = 0; j < str.length; j++) {
            let asciiVal = str.charCodeAt(j) - 97;
            frequency[asciiVal]++;
            if (frequency[asciiVal] > x) {
                if (k > 0) {
                    k--;
                    deleted++;
                    frequency[asciiVal]--;

                } else {
                    result = j;
                    break;
                }
            }
        }

        result -= deleted;
        console.log(result);


    }

});