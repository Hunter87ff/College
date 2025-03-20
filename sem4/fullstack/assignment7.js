// write a nodejs program to describe the nodejs core module -> 'path', 'fs'


// path module
import * as path from "node:path"
const rPath="assignments/assignment7.js"
console.log("Ext:", path.extname(rPath))
console.log("Dir: ", path.dirname(rPath))
console.log("Joined: ", path.join("node", rPath))
console.log("BaseName: ", path.basename(rPath))


// fs module
import fs from "node:fs"
const fp = "./test.txt"
const data = fs.readFileSync(fp, "utf-8")
console.log("Sync Read:", data.split("\n")[0])

fs.readFile(fp, (err, file)=>{
    console.log("Async Read:", file.toString("utf-8").split("\n")[0])
})
fs.writeFile(fp, data, "utf-8", ()=>{
    console.log("Async Write")   
})

fs.writeFileSync(fp, "Hunter87")

fs.appendFile(fp, "\n//injected comment",()=>{
    console.log("Async Append ")
})
fs.chmod(fp, 0o775, (err) => {
    if (err) throw err;
    console.log('The permissions for file "my_file.txt" have been changed!');
})
fs.linkSync(fp, "./hell.txt")