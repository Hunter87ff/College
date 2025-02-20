// write a nodejs program to demonstrate asynchronous and synchronous  functions with example

async function asyncFunc(){
    const response = await fetch("https://google.com"); 
    console.log("async func done!!");                      
} 

function simpleFunc(){
    console.log("sync func done!!");
}

console.log("Executing Async Code!!");
asyncFunc();
console.log("Executing Sync Code!!");
simpleFunc();
