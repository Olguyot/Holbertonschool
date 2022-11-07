#!/usr/bin/node
const request = require('request');
const url = process.argv[2];

const req = request(url, (error, response, body) => {
  const data = JSON.parse(body);
  const obj = {};

  for (const idxTask in data) {
    let nbCompletedTask = 0;
    if (data[idxTask].completed === true) {
      nbCompletedTask++;
    }
    const userId = data[idxTask].userId;
    if (!(obj[userId])) {
      obj[userId] = 0;
    }
    obj[userId] += nbCompletedTask;
  }
  console.log(obj);

  if (error) {
    console.log(error);
  }
});
req.on('error', error => {
  console.error(error);
});
req.end();
