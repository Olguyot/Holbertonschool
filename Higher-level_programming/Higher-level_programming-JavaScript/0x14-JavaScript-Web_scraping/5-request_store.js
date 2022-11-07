#!/usr/bin/node
const request = require('request');
const fs = require('fs');

const url = process.argv[2];
const fileName = process.argv[3];
let content = '';
request(url, (error, response, body) => {
  content = body;
  fs.writeFile(fileName, content, err => {
    if (err) {
      console.error(err);
      return (err);
    }
  });
  if (error) {
    console.log(error);
  }
});
