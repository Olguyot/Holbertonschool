#!/usr/bin/node
exports.nbOccurences = function (list, searchElement) {
  let i = 0;
  let cp = 0;

  for (i = 0; i < list.length; i++) {
    if (list[i] === searchElement) {
      cp++;
    }
  }
  return (cp);
};
