<?php
/**
 * Drawshield PHP Source File
 *
 * Description...
 *
 * @author Karl R. Wilcox <karl@karlwilcox.com>
 * @copyright Karl R. Wilcox 2014
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * Date: 16/06/14
 * Time: 15:05
 */

namespace svg;

trait attributeSetter {
  public function setAttributes ( $params = null) {
    /**
     * @var $this \DOMElement
     */
    if ( is_array($params) ) {
      foreach ( $params as $attribute => $value ) {
        if ( $value )
          $this->setAttribute($attribute,$value);
        if ( $attribute == 'id' )
          $this->setIdAttribute('id',true);
      }
    }
  }
}