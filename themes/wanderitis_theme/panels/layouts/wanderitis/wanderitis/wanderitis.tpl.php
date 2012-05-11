<div class="panel-display omega-grid omega-16-threecol-2-10-4" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="panel-panel grid-16">
    <div class="inside"><?php print $content['top']; ?></div>
  </div>
  <div class="panel-panel grid-2">
    <div class="inside"><?php print $content['left']; ?></div>
  </div>
  <div class="panel-panel grid-10">
    <div class="inside"><?php print $content['middle']; ?></div>
  </div>
  <div class="panel-panel grid-4">
    <div class="inside"><?php print $content['right']; ?></div>
  </div>
  <div class="panel-panel grid-16">
    <div class="inside"><?php print $content['bottom']; ?></div>
  </div>
</div>
