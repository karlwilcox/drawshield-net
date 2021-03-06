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



if ( existModifierWithKeyterm($node,'couped') )
  $ordinary['shape_spec'] =  array ( "NC" => 'X288Y146B800d200F800h200', 'CH' => 'X288Y346B800d200F800h200' );
elseif ( existModifierWithKeyterm($node,'lozengy'))
  $ordinary['body'] = array ( 'NC' => '<path d="M0,0l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53
                                    l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53z " />',
                           'CH' => '<path d="M0,300l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53
                                    l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53 l106,-106 -53,159 -159,53z m53,53 l159,-53 -212.1,212.1 53,-159z m53,53z " /> ' );
else
  if ( $node->getAttribute('number') == '1' )
    $ordinary['shape_spec'] = array ( 'NC' => 'X-212Y0h300B1772d300F1772', 'CH' => 'X-212Y300h300B1572d300F1572' );
  else
    $ordinary['shape_spec'] = array ( 'NC' => 'X-212Y-200h200B1772d200F1772    X-212Y200h200B1772d200F1772', 'CH' => 'X-212Y200h200B1572d200F1572    X-212Y400h200B1572d200F1572' );

if ( existModifierWithKeyterm($node,'compony1') )
  $ordinary['body2'] = array ( 'NC' => '<path d="M 186,-186 398,26 26,398 -186,186 z M 610,238 822,450 450,822 238,610 z m 420,424 220,213 -376,375 -212,-220 z" />',
                          'CH' => '<path d="M 186,114 398,326 26,698 -186,486 z M 610,538 822,750 450,1120 238,910 z m 420,422 220,220 -376,370 -212,-210 z" />' );
elseif (existModifierWithKeyterm($node,'compony2') )
  $ordinary['body2'] = array ( 'NC' => '<path d="M 0,0 186,-186 292,-80 106,106 212,212 26,398 -80,292 106,106 z M 212,212 398,26 504,132 318,318 424,424 238,610 132,504 318,318 z M 424,424 610,238 716,344 530,530 636,636 450,822 344,716 530,530 z M 636,636 822,450 928,556 742,742 848,848 662,1030 556,928 742,742 z m 212,212 182,-186 110,106 -186,186 106,106 -186,190 -106,-110 186,-186 z" />',
                          'CH' => '<path d="M 0,300 186,114 292,220 106,406 212,512 26,698 -80,592 106,406 z M 212,512 398,326 504,432 318,618 424,724 238,910 132,804 318,618 z M 424,724 610,538 716,644 530,830 636,936 450,1120 344,1020 530,830 z M 636,936 822,750 928,856 742,1040 848,1150 662,1330 556,1230 742,1040 z m 212,214 182,-190 110,110 -186,180 106,110 -186,190 -106,-110 186,-190 z" />' );

if ( division_to_modifier($node, 'quarterly') )
  $ordinary['body2'] = array ( 'NC' => 'X-100Y-100B848D200f848h200   X1100Y1100F849H200b849d200',
    'CH' => 'X-100Y200B848D200f848h200   X1100Y1400F849H200b849d200' );

$ordinary['rotate_pattern'] = 45;

$ordinary['chargesOn'] = chiefPresent() ? '500,800,180,400,45/333.33,633.33,180,200,45:666.67,966.67/200,500,180,180,45:400,700:600,900/166.67,466.67,180,180,45:333.33,633.33:500,800:666.67,966.67/142.86,442.86,140,140,45:285.71,585.71:428.57,728.57:571.43,871.43:714.29,1014.29/s' :
  '500,500,180,500,45/333.33,333.33,180,250,45:666.67,666.67/250,250,180,180,45:500,500:750,750/200,200,180,180,45:400,400:600,600:800,800/166.67,166.67,180,180,45:333.33,333.33:500,500:666.67,666.67:833.33,833.33/142.86,142.86,160,160,45:285.71,285.71:428.57,428.57:571.43,571.43:714.29,714.29:857.14,857.14';

$ordinary['chargesWithin'] = chiefPresent() ? 'x/750,550,250,250:250,950,180,180/250,950,180,180:600,450,200,200:800,650/150,850,180,180:350,1050:600,450,200,200:800,650/600,450,140,140:800,450:800,650:200,900:350,1050:150,1050/s' :
  'x/750,250,250,250:250,750/750,250,250,250:200,700,200,200:400,900/200,650,200,200:400,850:600,150:800,350//600,200,140,140:800,200:800,400:200,600:400,800:200,800';

if ( existModifierWithKeyterm($node, 'riveted')) {
  include '_rivet.inc';
  $rivetList = '';
  $start = chiefPresent() ? 305 : 5;
  $offset = chiefPresent() ? 300 : 0;
  for ($i = 5; $i < 1000; $i += 80) {
    $rivetList .= '<g transform="translate(' . ($i + 180 - $offset) . ',' . $i . ')">' . $rivet . '</g>';
    $rivetList .= '<g transform="translate(' . ($i - $offset) . ',' . ($i + 180) . ')">' . $rivet . '</g>';
  }
  $ordinary['body3'] = $rivetList;
}
