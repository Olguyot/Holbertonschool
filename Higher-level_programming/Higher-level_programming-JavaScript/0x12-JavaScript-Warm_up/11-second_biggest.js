#!/usr/bin/node
const nb = [];
let noduplicate = [];
let i = 2;
let res = 0;

if (process.argv.length > 3) {
  for (i = 2; i < process.argv.length; i++) {
    nb.push(parseInt(process.argv[i], 10));
  }
  noduplicate = Array.from(new Set(nb));
  res = Math.max(...noduplicate);
  for (i = 0; i < noduplicate.length; i++) {
    if (noduplicate[i] === res) {
      noduplicate.splice(i, 1);
    }
  }
  res = Math.max(...noduplicate);
}
console.log(res);
