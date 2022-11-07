#!/usr/bin/node
let i = 0;

if (process.argv.length === 2) {
  console.log('Missing number of occurrences');
} else {
  while (i < parseInt(process.argv[2], 10)) {
    console.log('C is fun');
    i++;
  }
}
