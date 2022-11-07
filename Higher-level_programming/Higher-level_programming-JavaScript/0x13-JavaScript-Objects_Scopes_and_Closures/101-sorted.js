#!/usr/bin/node
const dico = require('./101-data').dict;
const dict = {};
let key0;
let key;

for (key0 in dico) {
  key = parseInt(dico[key0]);
  if (key in dict) {
    dict[key].push(key0);
  } else {
    dict[key] = [key0];
  }
}
console.log(dict);
