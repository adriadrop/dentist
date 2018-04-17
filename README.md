# Dentist Multisite
Dentist Multisite repository - Drupal 7


This is drupal 7 repository for dental tourism sites
It includes only custom code, ignoring the drupal core files as they should be downloaded with drush/composer

# Setup using docker.

Use this wodby drupal based docker stack
Follow https://wodby.com/stacks/drupal/docs/local/quick-start/
with Option 2: Mount my Drupal Codebase part, following every step should make no problems with running docker.

As this is multisite, dont forget to set sites.php file in sites/all to match domain. That is all.
