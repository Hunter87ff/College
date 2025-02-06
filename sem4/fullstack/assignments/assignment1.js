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

function fact(n){

    if(n<=1){return 1;}

    else{return n*fact(n-1);}

}

console.log("Factorial : ", fact(5))





// armstrong  use - arrow func

const  armstrong = (n)=>{

    const st=`${n}`;

    let x=0;

    for(let i=0; i<st.length; i++){

        let c= parseInt(st[i]);

        x+= Math.pow(c,st.length);

    }

    if(x==n){

        return console.log(`${n} is bahubali!!`);

    }

    return  console.log(`${n} is not bahubali!!`);

}

armstrong(154);





// palindrome 

const palindrome = (n)=>{

    const prev=`${n || "ili"}`;

    let rev='';

    for(let i=prev.length-1; i>=0; i--){

        rev = rev.concat(prev[i]);

    }

    console.log(prev===rev?

        `${prev} is palindrome`:

        `${prev} isn't palindrome!!`);

}

palindrome("151");





// reverce

const reverse = (n)=>{

    if(!n){return null;}

    const prev=`${n}`;

    let rev='';

    for(let i=prev.length-1; i>=0; i--){

        rev = rev.concat(prev[i]);

    }

    return  rev;

}

console.log("Reversed : " + reverse());
