<?php
  // Smart theme reacts on available content.
  $overall_grid_class = 'omega-16-threecol-2-10-4';
  $middle_column_grid = 10;
  $left_column_grid = 2;
  $right_column_grid = 4;
  if (empty($content['right'])) {
    $middle_column_grid = 12;
    $left_column_grid = 4;
    $overall_grid_class = 'omega-16-twocol-4-12';
  }
  if (empty($content['left'])) {
    $middle_column_grid = 12;
    $right_column_grid = 4;
    $overall_grid_class = 'omega-16-twocol-12-4';
  }
?>

<div class="panel-display omega-grid <?php print $overall_grid_class; ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-region grid-16 header-float">
    <div class="panel-panel grid-16 top-left">
      <div class="inside"><?php print $content['top_left']; ?></div>
    </div>
  </div>
  <div class="panel-region grid-16 header">
    <div class="panel-panel grid-16 top">
      <div class="inside"><?php print $content['top']; ?></div>
    </div>
  </div>
  <div class="panel-region grid-16 content">
<?php if (!empty($content['left'])) : ?>
  <div class="panel-panel grid-<?php print $left_column_grid ?> left">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
<?php endif; ?>
  <div class="panel-panel grid-<?php print $middle_column_grid ?> middle">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
<?php if (!empty($content['right'])) : ?>
  <div class="panel-panel grid-<?php print $right_column_grid ?> right">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
<?php endif; ?>
  </div>
  <div class="panel-region grid-16 footer">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
