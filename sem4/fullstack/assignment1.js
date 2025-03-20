// Assignment 1
// i) Create a nodejs script to demonstrate variables
/*

ii) Functions :
- Fibonachi
- Factorial
- Palindrome
- Armstrong
- Reverce

iii) Create a nodeJS script demonstrating conditional loops (find word from a statament)
iv) Create a NodeJS script to create object using function and create an array and apply it's unbuilt methods.
v) Create a async codeby using setTimeout() method.
*/

//  i) Create a nodejs script to demonstrate variables
{
    let x = 7;
    const y = 87;
    var c = x + y;
}
console.log("Var out scope :" + c)


// fibonachi
function fibo(n) {
    let series = []
    for (let prev = 0, next = 1, i = 0; i <= n; i++,
        [prev, next] = [next, prev + next]) {
        series = series.concat(prev)
    }
    return series;
};
console.log("Fibonachi up to 5 : " + fibo(5));


// Factorial
function factorial(n) { return n <= 1 ? 1 : n * factorial(n - 1); }
console.log("Factorial of 5 : ", factorial(5))


// armstrong  use - arrow func
const armstrong = (n) => {
    const st = `${n}`;
    let x = 0;
    for (let i = 0; i < st.length; i++) {
        let c = parseInt(st[i]);
        x += Math.pow(c, st.length);
    }
    console.log(`${n} ${x == n ? 'is' : "isn't"} armstrong.`)
}
armstrong(153);

// reverce
const reverse = (n) => {
    return n ? `${n}`.split().reverse().join("") : null;
}
console.log("hell Reversed : " + reverse("hel"));

// palindrome 
const palindrome = (n) => {
    console.log(`${n}` === reverse(n) ?
        `${n} is palindrome` :
        `${n} isn't palindrome!!`);
}
palindrome("151");


// Create a nodeJS script demonstrating conditional loops (find word from a statament)
let str = "I tried, but unable to forget!!".split(" ");
let i=0, target = "unable";
// using for loop
for (i=0; i < str.length; i++) {
    if (str[i] == target) {
        console.log("(For) " + target + " found at index : " + i);
    }
}

//  using while loop
i = 0;
target="but";
while (i < str.length) {
    if (str[i] == target) {
        console.log("(While) " + target + " found at index : " + i);
    }
    i++;
}

// using do while
i=0;
do {
    if (str[i] == target) {
        console.log("(Do While) " + target + " found at index : " + i);
    }
    i++;
} while (i < str.length);



// iv) Create a NodeJS script to create object using function then create an array and apply it's unbuilt methods.
function getProfile(username="", email="", pass=""){
    let data =  {
        "username": username,
        "email": email,
        "pass": pass
    }
    return data;
}
console.log(new getProfile("im_hunter87", "hunter87@blastixesports.in", "prettyEasy"))


let arr = [887,654,509 ];
console.log("Original array : ", arr);
console.log("Concated : "+arr.concat([678]));

arr.push(798)
console.log("Pushed : "+arr);

arr.pop(0)
console.log("Popped : "+arr);

console.log("Mapp : ")
arr.map(e=>(
    console.log(e)
))

console.log("Shift : " + arr.shift())
arr.unshift(576)
console.log("Unshifted : " , arr)
console.log("Filter Greater than 600 : ", arr.filter(e=>e>600))
console.log("Reduce :", arr.reduce((t,e)=>t-e))
console.log("For each : ")
arr.forEach(e=>console.log(e));
console.log("509: " , arr.find(e=>e==509)?"Found":"Not Found")
console.log("Index of 509:", arr.findIndex(e=>e==509))
console.log("Sorted: " , arr.sort())
console.log("Reverse: " , arr.reverse())
console.log("Arr Filled : ", arr.fill(509))
console.log("Arr includes 509: ", arr.includes(509))

arr.push([86,87])
console.log("Arr before flat : ", arr)
console.log("Arr after flat:", arr.flat(1))
arr.pop()
console.log("Spliced:" , arr.splice(0,1))

console.log("After Join:", arr.join('_'))
console.log("All values are > 500: ", arr.every(e=>e>500))
console.log("vals == 500:", arr.some(e=>e==500))


// 6. Create a NodeJS script to create object using function and create an array and apply it's unbuilt methods.

