#!/usr/bin/node
const fs = require('fs');

const content = process.argv[3];
const file0 = process.argv[2];
fs.writeFile(file0, content, err => {
  if (err) {
    console.error(err);
    return (err);
  }
});
