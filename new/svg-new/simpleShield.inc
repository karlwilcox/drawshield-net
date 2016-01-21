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
 * Time: 15:12
 */

namespace svg;

class simpleShield extends \DOMElement{

  public function __construct(\DOMElement $blazonNode){
    parent::__construct('g');
    $svgDoc = svgDoc::getInstance();
    $svgDoc->importNode($this);
    $this->setAttribute('class','simpleShield');
    $this->appendChild($svgDoc->makeNode('desc',null,'Field (or background)'));
    $fieldNode = $blazonNode->firstChild;  // TODO do we check this, or validate the blazon XML?
    echo $blazonNode->firstChild->nodeName;
    $field = $svgDoc->makeNode('path',array('d' => 'M-10,-10h1020v1220h-1020z', 'class' => 'field'));
    $this->appendChild($field);
    //$this->appendChild(new tincture($fieldNode->firstChild, $field ));
    if ( ($objects = $fieldNode->nextSibling) ) {
      $objectList = new objectList($objects);
      $this->appendChild($objectList);
    }
   // return $this->element;
  }
}


/**
 * Create all of the charges and ordinaries on the field
 *
 * Responsibility: navigate the list of charges and ordinaries from the
 * blazon, invoking objects to create each; but also sorting the
 * resulting objects into the correct Z order.
 */
class objectList  extends \DOMElement {
  public function __construct( \DOMElement $blazonNode){
    parent::__construct('g');
    $svgDoc = svgDoc::getInstance();
    $svgDoc->importNode($this);
    $this->setAttribute('class','objects');
  }
}