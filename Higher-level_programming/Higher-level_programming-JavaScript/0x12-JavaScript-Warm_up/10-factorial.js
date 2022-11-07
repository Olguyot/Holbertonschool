#!/usr/bin/node
function factorial (n) {
  let tot = 0;
  if (n >= 0) {
    if (n === 0) {
      return (1);
    }
    tot = n * factorial(n - 1);
    return (tot);
  } else {
    return (1);
  }
}
const nb = parseInt(process.argv[2]);
console.log(factorial(nb));
