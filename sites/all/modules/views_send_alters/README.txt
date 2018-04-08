<?php
variable_del('views_send_to_mail_zatra_i_ponudu:page');
variable_del('views_send_to_name_zatra_i_ponudu:page');
?>

Please run this code before enabling the module and if you wanted to change field names stored.
If you changed the View ID from the View's ID at http://www.webizrada.com.hr/zatrazi-ponudu?tid=All&city=, please replace "zatra_i_ponudu"
with the new Views' ID, and "page" with the new display ID or mailto:ayeshlakmal@gmail.com with that info. 

Changes at, line 3 of the .module file, and both variable_del calls in the reset snippet.

Thanks.