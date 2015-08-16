<?php
/**
 * Drawshield PHP Source File
 *
 * Description...
 *
 * @author Karl R. Wilcox <karl@karlwilcox.com>
 * @copyright Karl R. Wilcox 2014
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * Date: 12/08/14
 * Time: 18:50
 */

$charge['file'] = 'inkscape/mullet-5.svg';
if ( $points = getModifierValueByKeyterm($node, 'of-num')) {
  if ( file_exists( $folder . 'inkscape/mullet-' . $points . '.svg'))
    $charge['file'] = 'inkscape/mullet-' . $points . '.svg';
}
