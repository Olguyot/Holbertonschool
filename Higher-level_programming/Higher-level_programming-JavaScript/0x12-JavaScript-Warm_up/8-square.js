#!/usr/bin/node
let i = 0;
let j = 0;
let line = '';
let nb = process.argv[2];
if (isNaN(nb)) {
  console.log('Missing size');
} else {
  nb = parseInt(nb, 10);
  for (i = 0; i < nb; i++) {
    line = '';
    for (j = 0; j < nb; j++) {
      line = line + 'X';
    }
    console.log(line);
  }
}
