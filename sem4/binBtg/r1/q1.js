function isP2(n){
  return n>0 && !(n & (n-1))
}
console.log(isP2(4))
/*
4 | 100
3 | 011 = 000
*/
