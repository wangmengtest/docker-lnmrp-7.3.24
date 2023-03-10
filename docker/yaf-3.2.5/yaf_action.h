/*
  +----------------------------------------------------------------------+
  | Yet Another Framework                                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author: Xinchen Hui  <laruence@php.net>                              |
  +----------------------------------------------------------------------+
*/

#ifndef YAF_ACTION_H
#define YAF_ACTION_H

#define YAF_ACTION_EXECUTOR_NAME		"execute"
#define YAF_ACTION_PROPERTY_NAME_CTRL 	"_controller"

#define yaf_action_object yaf_controller_object

extern zend_class_entry * yaf_action_ce;

void yaf_action_init(yaf_action_object *action, yaf_controller_t *ctl, zend_string *name);

YAF_STARTUP_FUNCTION(action);
#endif
/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */

