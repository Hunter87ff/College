const http = require("http")
const port = 3000;
const host = 'localhost';

const routes = {
    "GET" : {
        "/" : (req,res)=> res.end("Hello from index!! get method")
    },
    "POST" : {
        "/login" : (req, res)=> res.end("Hello from login!! post method")
    },
    "PUT" : {
        "/update" : (req,res)=> res.end("Updating data!! put method")
    },
    "DELETE" : {
        "/del_user" : (req,res)=> res.end("deleting data!! delete method")
    }
}
function manageRoutes(req,res){
    try{
        routes[req.method][req.url](req, res);
    }
    catch(err){
        res.end("404 | Page Not Found!!")
    }
}

const server = http.createServer((req,res)=>{
    manageRoutes(req,res);
})

server.listen(3000, ()=>console.log(`Server running on: http://${host}:${port}`))