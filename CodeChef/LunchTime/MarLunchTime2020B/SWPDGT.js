//https://www.codechef.com/LTIME82B/problems/SWPDGT
//WA
process.stdin.resume();
process.stdin.setEncoding('utf-8');
var arr = "";
process.stdin.on('data', function (chunk) {
    arr += chunk;
});
process.stdin.on('end', function () {
    arr = arr.split("\n");
    var n = parseInt(arr.shift()); // in order ot get no of test cases
    for (let i = 0; i < n; i++) { //loop through no of test cases.

        var a = arr[i].split(" ")[0]; //get first no
        var b = arr[i].split(" ")[1];// get second no

        var arr1 = a.split("");
        var arr2 = b.split("");
        // console.log(arr1);
        //console.log(arr2);

        var max = 0;

        var a1, a2, b1, b2;

        if (arr1.length == 1) {
            a1 = 0;
            a2 = arr1[0];
        } else {
            a1 = arr1[0];
            a2 = arr1[1];
        }

        if (arr2.length == 1) {
            b1 = 0;
            b2 = arr2[0];
        } else {
            b1 = arr2[0];
            b2 = arr2[1];
        }

        if (parseInt(a1 + a2) + parseInt(b1 + b2) > max)
            max = parseInt(a1 + a2) + parseInt(b1 + b2);
        if (parseInt(b1 + a2) + parseInt(a1 + b2) > max)
            max = parseInt(b1 + a2) + parseInt(a1 + b2);
        if (parseInt(b2 + a2) + parseInt(b1 + a1) > max)
            max = parseInt(b2 + a2) + parseInt(b1 + a1);
        if (parseInt(a1 + b2) + parseInt(b1 + a2) > max)
            max = parseInt(a1 + b2) + parseInt(b1 + a2);
        if (parseInt(a1 + b1) + parseInt(a2 + b2) > max)
            max = parseInt(a1 + b1) + parseInt(a2 + b2);


        console.log(max);

    }

});