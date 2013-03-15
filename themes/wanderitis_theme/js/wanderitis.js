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
      $('.page-hikes .layout-responsive-region-navigation').wrapInner('<div class="sticky" style="width:' + $('.page-hikes .layout-responsive-region-navigation').width() + 'px;" />');
      $(window).on('scroll', function(){
        if ($('.page-hikes .layout-responsive-region-navigation').offset().top < $(window).scrollTop()) {
          console.log('fly');
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
