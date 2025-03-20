const http = require("http")
const port = 3000;
const host = 'localhost';
const server = http.createServer((req,res)=>{
    res.end("Hello from server!!")
})

server.listen(3000, ()=>console.log(`Server running on: http://${host}:${port}`))