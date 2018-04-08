<?php

/**
 * @file
 * Customize the e-mails sent by Webform after successful submission.
 *
 * This file may be renamed "webform-mail-[nid].tpl.php" to target a
 * specific webform e-mail on your site. Or you can leave it
 * "webform-mail.tpl.php" to affect all webform e-mails on your site.
 *
 * Available variables:
 * - $node: The node object for this webform.
 * - $submission: The webform submission.
 * - $email: The entire e-mail configuration settings.
 * - $user: The current user submitting the form.
 * - $ip_address: The IP address of the user submitting the form.
 *
 * The $email['email'] variable can be used to send different e-mails to different users
 * when using the "default" e-mail template.
 */
?>
<?php


if ($submission->data[13]['value'][0] == "Not Payed" || empty($submission->data[13]['value'][0])){


//OLD I DON'T GIVE THEM CONTACT FORM
/*
print "Upozorenje, ovo je pravi upit sa sakrivenim ključnim podacima.\rŽelite li primate upit sa svim podacima, odaberite jedan od naših paketa za marketing http://www.croaziadentisti.it/marketing \r";	 
print "Nome: ". $submission->data[1]['value'][0]."\r";
print "E-mail: ". substr( $submission->data[2]['value'][0], 0, strpos($submission->data[2]['value'][0], '@'))."@******\r";
print "Cell/Tel: **** ****\r";
print "Problema o domanda: ". $submission->data[4]['value'][0]."\r";
print "Da: ".$submission->data[9]['value'][0]."\r\r";
*/


print "Nome: ". $submission->data[1]['value'][0]."\r";
print "E-mail: ". $submission->data[2]['value'][0]."\r";
print "Cell/Tel: ". $submission->data[3]['value'][0]."\r";
print "Problema o domanda: ". $submission->data[4]['value'][0]."\r";
print "Da: ".$submission->data[9]['value'][0]."\r\r";

/*print "Top Dentista a Fiume: http://www.croaziadentisti.it/policlinico-smile"."\r";
print "Top Dentista a Abazzia: http://www.croaziadentisti.it/policlinico-smile-abazzia";
*/

} else {
	
print "Nome: ". $submission->data[1]['value'][0]."\r";
print "E-mail: ". $submission->data[2]['value'][0]."\r";
print "Cell/Tel: ". $submission->data[3]['value'][0]."\r";
print "Problema o domanda: ". $submission->data[4]['value'][0]."\r";
print "Da: ".$submission->data[9]['value'][0]."\r\r";

if ($submission->data[9]['value'][0] == "http://www.croaziadentisti.it/policlinico-smile-abazzia" || $submission->data[9]['value'][0] == "http://www.croaziadentisti.it/policlinico-smile"){
	print "Agent: Marko Blažeković";
}

}
?>

