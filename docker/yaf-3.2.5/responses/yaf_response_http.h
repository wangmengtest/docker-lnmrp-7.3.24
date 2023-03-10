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


#ifndef PHP_YAF_RESPONSE_HTTP_H
#define PHP_YAF_RESPONSE_HTTP_H

#define YAF_RESPONSE_PROPERTY_NAME_RESPONSECODE   "_response_code"

extern zend_class_entry *yaf_response_http_ce;

int yaf_response_alter_header(yaf_response_object *response, zend_string *name, zend_string *value, unsigned rep);
zval *yaf_response_get_header(yaf_response_object *response, zend_string *name);
int yaf_response_clear_header(yaf_response_object *response, zend_string *name);
int yaf_response_http_send(yaf_response_object *response);

YAF_STARTUP_FUNCTION(response_http);

#endif

/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
