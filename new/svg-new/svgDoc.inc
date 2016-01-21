<?php
/**
 * Drawshield PHP Source File
 *
 * Description...
 *
 * @author Karl R. Wilcox <karl@karlwilcox.com>
 * @copyright Karl R. Wilcox 2014
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * Date: 11/06/14
 * Time: 14:58
 */

namespace svg;



/**
 * Class svgRender
 *
 * The top level object for creating SVG renderings
 *
 * Responsibility: Create a top-level SVG document, provide utility functions
 * that can populate the document, finalise the SVG, ready for output
 */
class svgDoc extends \DOMDocument {
  private static $instance;
  protected $body = array();
  protected $defs;
  protected $uid = 0;

  public function __construct() {
    parent::__construct('1.0', 'UTF-8');
    $this->defs = self::makeNode('defs');
  }

  public static function getInstance(){
    if ( empty ( self::$instance )) {
      self::$instance = new svgDoc();
    }
    return self::$instance;
  }

  public function importNode(\DOMNode $node, $deep = false) {
    $frag = self::createDocumentFragment();
    $frag->appendChild($node);
    $frag->removeChild($node);
    // TODO should we implement $deep here?
    // DO we need this?
    parent::importNode($node,$deep);
  }
  
  public function makeNode ( $element, $params = null, $content = null ) {
    $node = parent::createElement($element,$content);
    if ( is_array($params) ) {
      foreach ( $params as $attribute => $value ) {
        if ( $value )
          $node->setAttribute($attribute,$value);
        if ( $attribute == 'id' )
          $node->setIdAttribute('id',true);
      }
    }
    return $node;
  }

  public function getUID($prefix = 'n'){
    return $prefix . ++$this->uid;
  }

  public function addDef(\DOMElement $svgData){
    $id = $this->getUID('def');
    $svgData->setAttribute('id',$id);
    $svgData->setIdAttribute('id',true);
    //$this->importNode($svgData,true);
    $this->defs->appendChild($svgData);
    return $id;
  }

  public function addBody(\DOMElement $svgData){
    //$this->importNode($svgData,true);
    $this->body[] = $svgData;
  }

  /**
   *
   */
  public function finaliseSVG()
  {
    $tagline1 = 'Drawshield3 v0.1';
    $tagline2 = 'drawshield.net';
    // Create top level element, with appropriate namespaces etc.
    $svg = parent::createElement('svg');
    $svg->xmlStandalone = false;
    $svg->setAttribute('version',"1.1" );
    $svg->setAttribute('baseProfile',"full");
    $svg->setAttribute('xmlns',"http://www.w3.org/2000/svg");
    $svg->setAttribute('xmlns:xlink',"http://www.w3.org/1999/xlink");
    $svg->setAttribute('preserveAspectRatio',"xMidYMid meet");
    $svg->setAttribute('viewBox',"0 0 1000 1200");
    // TODO change the href for the final version!
    $stylesheet = self::createProcessingInstruction('xml-stylesheet', 'type="text/css" href="../drawshield-default.css"' );
    $svg->appendChild($stylesheet);
    // Make a nice background
    $svg->appendChild(self::makeNode('rect', array('x' => '-10', 'y' => '-10', 'width' => '1020', 'height' => '1220',
      'id' => 'background')));
    // Create the overall clipping path (shield shape)
    $shieldShape = self::makeNode('path', array('d' => 'M 0 0 L 0 800 A 800 400 0 0,0 500 1200 A 800 400 0 0,0 1000 800 L 1000 0 Z'));
    $clipPath = self::makeNode('clipPath');
    $clipPath->appendChild($shieldShape);
    $clipID = $this->addDef($clipPath);
    // the defs node has been collecting children, now add it to the top level so it is first
    $svg->appendChild($this->defs);
    // Add all the body items ( in the order of the array) into a top-level group
    // Clip this to the shield shape and add to the parent node
    $topLevel = self::makeNode('g', array('clip-path' => "url(#$clipID)"));
    foreach ($this->body as $item) {
      $topLevel->appendChild($item);
    }
    $svg->appendChild($topLevel);
    // Add advertising lines
    $tag1 = self::makeNode('text', array('x' => '10', 'y' => '1160', 'font-size' => '30'), $tagline1);
    $tag2 = self::makeNode('text', array('x' => '10', 'y' => '1190', 'font-size' => '30'), $tagline2);
    $svg->appendChild($tag1);
    $svg->appendChild($tag2);
    // And finally, attach to our parent DOMElement
    self::appendChild($svg);
  }

}
