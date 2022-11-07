#!/usr/bin/node
let CP = 0;

exports.logMe = function (item) {
  console.log(CP + ':', item);
  CP++;
};
