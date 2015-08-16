<?php /* Copyright 2010 Karl R. Wilcox

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */


function makeFur ( $name ) {
  global $messages;
  $fur_data = array (
    'counter-ermine' => array (  'width' => 222, 'height' => 400, 'body' => '<polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('sable') . '"/>
        <g fill="' . rgb('argent') . ' ">
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="55" cy="30"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="36" cy="55"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="74" cy="55"/>
            <path stroke-width="2" stroke="' . rgb('pattern-stroke') . '" d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g transform="translate(111,200)" fill="' . rgb('argent') . '">
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="55" cy="30"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="36" cy="55"/>
            <circle stroke-width="2" stroke="' . rgb('pattern-stroke') . '" r="10" cx="74" cy="55"/>
            <path stroke-width="2" stroke="' . rgb('pattern-stroke') . '" d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>'  ),
    'counter-potent' => array ( 'width' => 333, 'height' => 200, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,200 333,200 333,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 209,0 209,50 292,50 292,98 42,98 42,50 125,50" fill="' . rgb('azure') . '" />
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-200)" points="125,0 209,0 209,50 292,50 292,98 42,98 42,50 125,50" fill="' . rgb('azure') . '" />' ),
    'counter-vair' => array (  'link' => 'http://karlwilcox.com/parker/c/counter-vair', 'width' => 250, 'height' => 480, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,480 250,480 250,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,238 0,238 66,200 66,40" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-480)" points="125,0 193,40 193,200 250,238 0,238 66,200 66,40" fill="' . rgb('azure') . '"/>' ),
    'ermine' => array (  'link' => 'http://karlwilcox.com/parker/e/ermine', 'width' => 222, 'height' => 400, 'body' => '        <polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('argent') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'erminites' => array (  'link' => 'http://karlwilcox.com/parker/e/ermine', 'width' => 222, 'height' => 400, 'body' => '        <polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('argent') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="36" cy="55" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="74" cy="55" fill="' . rgb('gules') . '"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
       <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="36" cy="55" fill="' . rgb('gules') . '"/>
            <circle r="10" cx="74" cy="55" fill="' . rgb('gules') . '"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'erminois' => array (  'link' => 'http://karlwilcox.com/parker/e/ermine', 'width' => 222, 'height' => 400, 'body' => '<polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('or') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('sable') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'pean' => array (  'link' => 'http://karlwilcox.com/parker/p/pean', 'width' => 222, 'height' => 400, 'body' => '<polygon points="0,0 222,0 222,400 0,400" fill="' . rgb('sable') . '"/>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" fill="' . rgb('or') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>
        <g stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(111,200)" fill="' . rgb('or') . '">
            <circle r="10" cx="55" cy="30"/>
            <circle r="10" cx="36" cy="55"/>
            <circle r="10" cx="74" cy="55"/>
            <path d="M 53 60 A 50 210 0 0,1 10,180 A 60 40 0 0,0 45,170 A 30 40 0, 0,0 55 200 A 30 40 0, 0,0 62,170 A 60 40 0 0,0 101, 180 A 50 210 0 0,1 57 60 Z"/>
        </g>' ),
    'potent' => array (  'width' => 333, 'height' => 200, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,400 333,400 333,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 209,0 209,50 292,50 292,100 42,100 42,50 125,50" fill="' . rgb('azure') . '" />
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,100 42,100 42,150 125,150 125,200 0,200" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="209,200 209,150 292,150 292,100 333,100 333,200" fill="' . rgb('azure') . '"/>' ),
    'potent-counter-potent' => array ( 'width' => 333, 'height' => 200, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,400 333,400 333,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 209,0 209,50 292,50 292,98 42,98 42,50 125,50" fill="' . rgb('azure') . '" />
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-300)" points="0,100 42,100 42,150 125,150 125,200 0,200" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(0,-300)" points="209,200 209,150 292,150 292,100 333,100 333,200" fill="' . rgb('azure') . '"/>' ),
    'vair' => array ( 'width' => 250, 'height' => 480, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,480 250,480 250,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(125,240)" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="translate(-125,240)" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>' ),
    'vair-en-point' => array (  'width' => 125, 'height' => 240, 'body' => '<g transform="scale(0.5)">
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,480 250,480 250,0" fill="' . rgb('argent') . '"/>
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(125,-480)"
                points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
            <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" transform="scale(1,-1) translate(-125,-480)"
                points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>
        </g>'),
    'vair-in-pale' => array ( 'width' => 250, 'height' => 240, 'body' => '<polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="0,0 0,240 250,240 250,0" fill="' . rgb('argent') . '"/>
        <polygon stroke-width="2" stroke="' . rgb('pattern-stroke') . '" points="125,0 193,40 193,200 250,240 0,240 66,200 66,40" fill="' . rgb('azure') . '"/>'),
  );

  if ( ! array_key_exists($name, $fur_data) ) {
    $messages->addMessage( 'internal', "Cannot draw fur $name" );
    $name = 'pean';
  }
  return $fur_data[$name];
}
