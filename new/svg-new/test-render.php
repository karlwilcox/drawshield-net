<?php
/**
 * Created by PhpStorm.
 * User: Home
 * Date: 10/06/14
 * Time: 22:16
 */

//include "traits.inc";
include "svgDoc.inc";
include "tincture.inc";
include "simpleShield.inc";

$test = svg\svgDoc::getInstance();

$blazon = <<<END
<simple>
<field><tincture><colour name="gules"/></tincture></field>
<objects><ordinary></ordinary></objects>
</simple>
END;

$blazonXML = simplexml_load_string($blazon, 'SimpleXMLElement', LIBXML_NOBLANKS);
$blazonDOM = dom_import_simplexml($blazonXML);
$blazonDoc = new DOMDocument('1.0');
$blazonDOM = $blazonDoc->importNode($blazonDOM,true);
$blazonDoc->appendChild($blazonDOM);
//echo $blazonDoc->saveXML();
//exit;
/**
 * @var $simpleElem DOMElement
 */
$simpleElem = $blazonDoc->firstChild;
$simple = new \svg\simpleShield($simpleElem);
//var_dump($blazonDoc);
//var_dump($simple);
$test->addBody($simple);
$test->finaliseSVG();
echo $test->saveXML();
