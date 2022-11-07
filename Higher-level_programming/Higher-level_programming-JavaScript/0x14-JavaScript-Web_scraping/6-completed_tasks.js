#!/usr/bin/node
/**
  request GET to the second argument
  and print a dict of number of task completed
**/

const request = require('request');
const url = process.argv[2];

request(url, (error, response, body) => {
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
