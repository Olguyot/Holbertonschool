#!/usr/bin/node
class Rectangle {
  constructor (w, h) {
    if (w > 0 && h > 0) {
      this.width = w;
      this.height = h;
    }
  }

  print () {
    let res = '';
    for (let i = 0; i < this.height; i++) {
      res = '';
      for (let j = 0; j < this.width; j++) {
        res = res + 'X';
      }
      console.log(res);
    }
  }
}

module.exports = Rectangle;
