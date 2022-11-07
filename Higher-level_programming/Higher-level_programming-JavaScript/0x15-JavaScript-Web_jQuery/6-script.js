const $ = window.$;
$(document).ready(() => {
  const header = $('header');
  $('DIV#update_header').click(() => {
    header.text('New Header!!!');
  });
});
