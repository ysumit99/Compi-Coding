//https://www.codechef.com/APRIL20B/problems/COVIDLQ
process.stdin.resume();
process.stdin.setEncoding('utf-8');
let arr = "";
process.stdin.on('data', function (chunk) {
    arr += chunk;
});
process.stdin.on('end', function () {

    arr = arr.split("\n");

    let testCases = arr[0];

    for (let i = 1; i <= 2 * testCases; i += 2) {
        let n = arr[i];
        let price = arr[i + 1].split(" ");

        price.sort(function (a, b) {
            return b > a;
        });
        console.log(price);


    }


});