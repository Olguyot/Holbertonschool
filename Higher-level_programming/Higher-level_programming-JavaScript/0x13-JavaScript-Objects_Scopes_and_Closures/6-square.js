#!/usr/bin/node
const Rectangle = require('./5-square.js');

class Square extends Rectangle {
  constructor (size) {
    super(size, size);
  }

  charPrint (c) {
    let res = '';
    if (typeof c === 'undefined') {
      c = 'X';
    }
    for (let i = 0; i < this.height; i++) {
      res = '';
      for (let j = 0; j < this.width; j++) {
        res = res + c;
      }
      console.log(res);
    }
  }
}

module.exports = Square;
