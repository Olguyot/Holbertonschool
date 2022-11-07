const $ = window.$;
$(document).ready(() => {
  const url = 'https://fourtonfish.com/hellosalut/?lang=fr';
  const hello = $('DIV#hello');
  $.getJSON(url, function (data) {
    hello.text(data.hello);
  });
});
