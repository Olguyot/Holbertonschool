const $ = window.$;
$(document).ready(() => {
  const url = 'https://swapi-api.hbtn.io/api/films/?format=json';
  $.getJSON(url, function (data) {
    const urlData = data;
    for (const idx in urlData.results) {
      const title = urlData.results[idx].title;
      $('UL#list_movies').append('<li>' + title + '</li>');
    }
  });
});
