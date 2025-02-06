// Assignment 1
// i) Create a nodejs script to demonstrate variables
/*

ii) Functions :
- Fibonachi
- Factorial
- Palindrome
- Armstrong
- Reverce
*/

//  i) Create a nodejs script to demonstrate variables
{
    let x =  7;
    const y = 87;
    var c = x+y;
}
console.log(c)


// fibonachi
function fibo(n){
    let prev=0,next=1;
    console.log(prev);
    console.log(next);
    for(let i=0; i<n; i++){
        let temp = prev+next;
        console.log(temp);
        prev=next;
        next = temp;
    }
}
fibo(5);


// Factorial
function factorial(n){
  return n<=1?1: n*fact(n-1);
}
console.log("Factorial : ", factorial(5))



// armstrong  use - arrow func
const  armstrong = (n)=>{
    const st=`${n}`;
    let x=0;
    for(let i=0; i<st.length; i++){
        let c= parseInt(st[i]);
        x+= Math.pow(c,st.length);
    }
    console.log(`${n} ${x==n?'is':"isn't"} armstrong.`)
    }
armstrong(154);


// palindrome 
const palindrome = (n)=>{
    console.log(`${n}`===[`${n}`].reverse().join('')?
        `${n} is palindrome`:
        `${n} isn't palindrome!!`);
}

palindrome("151");

// reverce
const reverse = (n)=>{
    return n?[...`${n}`].reverse().join(""):null;
    
}
console.log("Reversed : " + reverse());
