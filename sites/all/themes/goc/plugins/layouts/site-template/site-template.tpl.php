<div id="header">
  <?php print $content['header']; ?>
    <div id="navigation" class="clearfix">
      <?php print $content['navigation']; ?>
    </div>
</div>
<div id="site" class="container-24">
    <div class="grid-24">
      <?php print $content['messages']; ?>
    </div>
    <div class="clearfix">
        <div id="content" class="grid-16">
          <?php print $content['content']; ?>
        </div>
        <div id="sidebar" class="grid-8">
          <?php print $content['sidebar']; ?>
        </div>
    </div>
    <div id="footer" class="clearfix">
        <div class="grid-24">
          <?php print $content['footer']; ?>
        </div>

    </div>
</div>