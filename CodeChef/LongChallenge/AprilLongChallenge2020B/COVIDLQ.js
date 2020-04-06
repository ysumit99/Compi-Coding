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
        let queue = arr[i + 1].split(" ");
        let isSafe = true;
        let prevOneIndex = -1;

        for (let j = 0; j < queue.length; j++) {

            if (queue[j] === '1') {

                if (prevOneIndex != -1) {

                    if (j - prevOneIndex < 6) {

                        isSafe = !isSafe;
                        break;
                    }
                }
                prevOneIndex = j;
            }
        }

        if (isSafe)
            console.log("YES");
        else
            console.log("NO");
    }




});