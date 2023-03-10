--TEST--
Check for Yaf_View_Simple basic usages
--SKIPIF--
<?php if (!extension_loaded("yaf")) print "skip"; ?>
--INI--
yaf.use_namespace=0
--FILE--
<?php
$view = new Yaf_View_Simple(dirname(__FILE__));
$value = "laruence";
$view->assign("name", $value);
unset($value);
print_r($view);
var_dump(strlen($view->render(dirname(__FILE__) . "/001.phpt")));
var_dump($view->name);
var_dump($view->noexists);
print_r($view);
?>
--EXPECTF--
Yaf_View_Simple Object
(
    [tpl_dir:protected] => %s
    [tpl_vars:protected] => Array
        (
            [name] => laruence
        )

)
int(116)
string(8) "laruence"
NULL
Yaf_View_Simple Object
(
    [tpl_dir:protected] => %s
    [tpl_vars:protected] => Array
        (
            [name] => laruence
        )

)
