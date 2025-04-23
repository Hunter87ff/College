const e = require("express")
const {join} = require("path")

const app = e()
app.use(e.json())

function cookieParser(req,res,next){
    const cookieHeader = String(req.headers.cookie);
    if (!cookieHeader)  next();
    const cookieURL = new URLSearchParams(cookieHeader.replaceAll(";", "&"))
    const cookieObj = {};
    cookieURL.forEach((v,k)=>{
        k && v ? cookieObj[String(k.trim())] = String(v) : null
    })
    req.cookies = cookieObj;
    next()
}

app.use(cookieParser)
function authorised(req,res,next){
    const auth = req.query.key || req.headers.authorization;
    auth ? auth=="token.abc" && next() : res.status(401).json({message : "Unauthorised!!"}) 
}

app.get("/", (req,res)=>{
    console.log(req.cookies)
    res.sendFile(join(__dirname, "./static/index.html"))
})
app.get("/calc", authorised, (req,res)=>res.sendFile(join(__dirname, "./static/calc.html")))
app.get("/calc-res", authorised, (req,res)=>{res.send(Number(req.query.num1) + Number(req.query.num2))})
app.listen(3001, ()=>console.log("listening to port 3001"))