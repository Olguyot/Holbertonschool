#!/usr/bin/node
const fs = require('fs');
let output = fs.readFileSync(process.argv[2], 'utf-8');
const output2 = fs.readFileSync(process.argv[3], 'utf-8');

output = output + output2;
fs.writeFile(process.argv[4], output, function (err) {
  if (err) throw err;
});
