#!/usr/bin/node
exports.esrever = function (list) {
  let i = 0;
  const res = [];

  for (i = list.length - 1; i >= 0; i--) {
    res.push(list[i]);
  }
  return (res);
};
