<?php
/**
 * Drawshield PHP Source File
 *
 * Description...
 *
 * @author Karl R. Wilcox <karl@karlwilcox.com>
 * @copyright Karl R. Wilcox 2014
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * Date: 12/06/14
 * Time: 23:39
 */


class division {
  protected $finder;

  public function __construct() {
    $this->finder = new fileFinder('division');
  }

  public function getItem($keyterm, $target, $linetype) { // should be node...
    $file = $this->finder->getFile($keyterm, $target);
    $svg = new domDocument();
    $svg->load( $file );
  }
}
