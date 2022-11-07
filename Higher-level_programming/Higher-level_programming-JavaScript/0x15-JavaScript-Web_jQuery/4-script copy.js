const $ = window.$;
$(document).ready(() => {
  const header = $('header');
  $('DIV#toggle_header').click(() => {
    if (header.attr('class') === 'green') {
      header.removeClass('green');
      header.addClass('red');
    } else {
      header.removeClass('red');
      header.addClass('green');
    }
  });
});
