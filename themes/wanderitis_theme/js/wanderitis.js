/**
 * Wanderitis theme core js.
 */
(function($) {
  $(function(){
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
  });
})(jQuery);

