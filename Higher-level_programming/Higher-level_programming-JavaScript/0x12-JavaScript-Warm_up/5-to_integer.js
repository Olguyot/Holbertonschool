#!/usr/bin/node
const nb = process.argv[2];
const strnb = parseInt(nb, 10);
if (isNaN(nb)) {
  console.log('Not a number');
} else {
  console.log('My number:', strnb);
}
