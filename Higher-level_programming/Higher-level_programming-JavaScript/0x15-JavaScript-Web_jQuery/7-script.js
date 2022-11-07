const $ = window.$;
$(document).ready(() => {
  const classChar = $('#character');
  const url = 'https://swapi-api.hbtn.io/api/people/5/?format=json';
  $.getJSON(url, function (data) {
    const charName = data.name;
    classChar.text(charName);
  });
});
