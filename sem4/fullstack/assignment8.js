// write a nodejs program to demonstrate the use of Buffer including
// - creating buffer from .from() & .alloc()
// - writing data using  .write()
// - slicing the buffer using .slice()


// create buffer
let bf1 = Buffer.from("Hunter87")
let bf2 = Buffer.alloc(10)


// write buffer
bf2.write("hunter877")
console.log(`Buffer1: ${bf1}\nBuffer2: ${bf2}`)

// slice buffer
const sliced = bf2.subarray(0,3).toString("utf-8")
console.log("Sub-BF2:", sliced)