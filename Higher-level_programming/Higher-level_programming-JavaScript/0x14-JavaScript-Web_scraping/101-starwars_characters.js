#!/usr/bin/node
const request = require('request');
const id = process.argv[2];
const url = 'https://swapi-api.hbtn.io/api/films/' + id;

function getCharName (url) {
  request(url, (error, response, body) => {
    const data = JSON.parse(body);
    console.log(data.name);
    if (error) {
      console.log(error);
    }
  });
}

request(url, (error, response, body) => {
  const data = JSON.parse(body);
  for (const idxCharUrl in data.characters) {
    const urlChar = data.characters[idxCharUrl];
    getCharName(urlChar);
  }
  if (error) {
    console.log(error);
  }
});
