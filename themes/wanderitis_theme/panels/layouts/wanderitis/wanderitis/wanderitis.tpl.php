<?php
  // Smart theme reacts on available content.
  $middle_column_grid = 10;
  $left_column_grid = 2;
  if (empty($content['right'])) {
    $middle_column_grid = 12;
    $left_column_grid = 4;
  }
?>

<div class="panel-display omega-grid omega-16-threecol-2-10-4" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-16 header-float">
    <div class="panel-panel grid-16 top-left">
      <div class="inside"><?php print $content['top_left']; ?></div>
    </div>
  </div>
  <div class="panel-panel grid-16 header">
    <div class="panel-panel grid-16 top">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  </div>
  <div class="panel-panel grid-<?php print $left_column_grid ?>">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel grid-<?php print $middle_column_grid ?>">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  <div class="panel-panel grid-4">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <div class="panel-panel grid-16 footer">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
