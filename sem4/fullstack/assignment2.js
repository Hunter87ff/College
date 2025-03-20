// create a nodejs program to take user input and add two numbers and display the output

import readline from "node:readline"

const x = readline.createInterface(
    process.stdin, process.stdout
)
x.question("Enter two number with space: ", (_a)=>{
    let nums = _a.split(" ")
    console.log("Addition : ", parseInt(nums[0]) + parseInt(nums[1]))
})


// create a node js program to display system env variables.


console.log("System Environments : ", process.env)