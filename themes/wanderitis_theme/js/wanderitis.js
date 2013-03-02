/**
 * Wanderitis theme core js.
 */
(function($) {
  $(function(){

    // Comment Form
    if ($('div.pane-node-comment-form').length) {
      $('div.pane-node-comment-form h2')
        .addClass('button')
        .on('click', function() {
          $('div.comment-form-dialog').dialog('open');
        });
      $('div.pane-node-comment-form div.pane-content')
        .addClass('comment-form-dialog')
        .hide()
        .dialog({
          autoOpen: false,
          modal: true,
          resizable: false,
          title: $('div.pane-node-comment-form h2').text(),
          height: 'auto',
          width: 'auto'
        });
    }


    // Hike Search Form
    if ($('.page-hikes .layout-responsive-region-navigation').length) {
      var searchFormTop = $('.page-hikes .layout-responsive-region-navigation').offset().top;
      var searchFormWidth = $('.page-hikes .layout-responsive-region-navigation').width();
      $('.page-hikes .layout-responsive-region-navigation').wrapInner('<div class="sticky" style="width:' + searchFormWidth + 'px;" />');
      $(window).on('scroll', function(){
        var windowTop = $(window).scrollTop();
        if (searchFormTop < windowTop) {
          $('.page-hikes .layout-responsive-region-navigation .sticky').css({
            position: 'fixed',
            top: 0
          });
          $('.page-hikes .layout-responsive-region-navigation .sticky').css('padding','5px');
          $('.page-hikes .layout-responsive-region-navigation .sticky').css('margin-left','-5px');
        }
        else {
          $('.page-hikes .layout-responsive-region-navigation .sticky').css('position','static');
          $('.page-hikes .layout-responsive-region-navigation .sticky').css('padding','0px');
          $('.page-hikes .layout-responsive-region-navigation .sticky').css('margin-left','0px');
        }
      });
    }
  });
})(jQuery);
