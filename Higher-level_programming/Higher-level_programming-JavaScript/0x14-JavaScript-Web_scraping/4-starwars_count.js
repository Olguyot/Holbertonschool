#!/usr/bin/node
const request = require('request');
const url = process.argv[2];

const req = request(url, (error, response, body) => {
  let cp = 0;
  const data = JSON.parse(body).results;
  for (const idMovie in data) {
    const movieUrl = data[idMovie].characters;
    for (const idxCharacter in movieUrl) {
      if (movieUrl[idxCharacter].includes('18')) {
        cp++;
      }
    }
  }
  console.log(cp);
  if (error) {
    console.log(error);
  }
});

req.on('error', error => {
  console.error(error);
});
req.end();
