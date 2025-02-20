// write a nodejs script for the REPL environment, including functions, array methods, and async operations.



function callMe(){

    console.log("87 is Enough");

}

const arr = [8,7,6,5]

arr.push(9)

console.log(arr);



console.log("before timeout");

setTimeout(()=>{console.log("Timeout")}, 3000);

console.log("After Time out");

callMe();







// $node

// > .load ./assignment4.js

