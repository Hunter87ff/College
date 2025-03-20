// write a nodejs program to perform CRUd operations(Create, Read, Update, Delet)
const fs = require("fs");
const readline = require('node:readline');


const opts = 'c- Create\nr- Read\nu- Update\nd- Delete\n';
const dataFilePath = "./assets/as12.txt";
var globalData = fs.readFileSync(dataFilePath, "utf-8")

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
});

function command(question, callback) {
    rl.question(question, callback)
}

function create(username){
    globalData+=`${username}\n`;
    fs.writeFileSync(dataFilePath, globalData)
    handleChoise()
}

function read(username){
    if(globalData.includes(username)){
        console.log(username);
    }
    else console.log(globalData)
    handleChoise()
}

function update(usernames){
    if(!globalData.includes(usernames[0])){
        console.log("User not found to delete!!")
        handleChoise()
        return;
    }
    globalData = globalData.replace(usernames[0], usernames[1])
    fs.writeFileSync(dataFilePath, globalData);
    console.log("User Updated!!");
    handleChoise()
}

function del(username){
    if(!globalData.includes(username)){
        console.log("User not Found")
    }
    else{
        globalData=globalData.replace(username, "");
        fs.writeFileSync(dataFilePath, globalData);
    }
    handleChoise()
}

function handleChoise() {
    command(opts, (answer) => {
        switch (answer) {
            case 'c':
                command("Enter username: ", (a) => create(a))
                break;
            case 'r':
                command("Enter username: ", a => read(a))
                break;
            case 'u':
                command("Enter username and newname: ", a => update(String(a).split(" ")))
                break;
            case 'd':
                command("Enter username: ", a=>del(a))
                break;
        }
    });
}

handleChoise()
