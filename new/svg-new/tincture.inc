<?php
/**
 * Drawshield PHP Source File
 *
 * Description...
 *
 * @author Karl R. Wilcox <karl@karlwilcox.com>
 * @copyright Karl R. Wilcox 2014
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * Date: 15/06/14
 * Time: 23:02
 */

namespace svg;


class tincture extends \DOMElement {
  public function __construct(\DOMElement $tinctureNode, \DOMElement $target ){
    parent::__construct('g');
    self::setAttribute('class','gules');
    self::appendChild($target);
  }

} 