#!/usr/bin/node
const request = require('request');
const url = process.argv[2];

const req = request(url, (error, response, body) => {
  console.log(`code: ${response.statusCode}`);
  if (error) {
    console.log(error);
  }
});

req.on('error', error => {
  console.error(error);
});
req.end();
