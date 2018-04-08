<?php
	/**
	 * @package Global Industrial Business Theme - Adodis Drupal Theme
	 * @version 1.1 April 07, 2011
	 * @author Adodis Theme http://www.drupal-themes.adodis.com
	 * @copyright Copyright (C) 2010 Adodis Drupal Theme
	 * @license http://www.gnu.org/licenses/gpl-2.0.html GNU/GPLv2 only
	 */
?>
 <div id="wrapper">
  <div id="header-wrapper">
  	<div class="header-banner">
 	 <div class = "page-center">  <!--page center start-->
	    <div id="header" class="section clearfix"> <!--Header start-->
		   <!-- Logo -->
		   <?php if ($logo): ?>
		     <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo">
		       <img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" />
		     </a>
		   <?php endif; ?>
		   <?php if ($site_name): ?>
			 <?php if ($title): ?>
			   <div id="site-name">
				    <h1>
				     <strong>
				    	 <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
				   	 </strong>
				   </h1>
			   </div>
			 <?php else: ?>
			   <h1 id="site-name">
			    	<a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
			   </h1>
			 <?php endif; ?>
		   <?php endif; ?>

		   <!-- Header Right Area -->
		   <?php if($page['header_right']): ?>
			 <div id="header-right">
				  <div class="head-top-right">
				    <?php print render($page['header_right']); ?>
				  </div>
			 </div>
		   <?php endif; ?>
	    </div> <!--Header end-->

		  <!-- Top Menu Navigation -->
		  <?php if($page['navigation']): ?>
			 <div id="menu" class="clearfix">
				<?php print render($page['navigation']); ?>
			 </div>
		  <?php endif; ?>

   </div> <!--page center end-->
 </div> <!--header-banner end-->


	  <!-- Banner Area -->
	<?php if(theme_get_setting('slideshow')=='yes'): ?>
	 <div class = "slideshow-banner">
		 	 <div class = "page-center">  <!--page center start-->
				 <div id="slideshow-area">
					  <div id="slideshow">
						<?php print render($slideshow); ?>
					  </div>
				  </div>

			  </div> <!--page center end-->
	 </div> <!--slideshow-banner end-->
	 <?php endif; ?>

 </div> <!-- End Header Wrapper -->


  <!-- Content Area -->
  <div id="content-wrapper">

	 <!--  User Positions -->
	 <?php if($page['user1'] || $page['user2'] || $page['user3']): ?>
		<div id="user-position-top" class="clearfix <?php print $user_last ?>">
		  	<div class="user-position-top-inner clearfix">
			<?php if($page['user1']): ?>
				<div id="user-1">
					<div class="user_column_top_<?php print $user_column_top; ?>"><div class="user-column-inner">
						<?php print render($page['user1']); ?>
					</div></div>
				</div>
			<?php endif; if($page['user2']): ?>
				<div id="user-2">
					<div class="user_column_top_<?php print $user_column_top; ?>"><div class="user-column-inner">
						<?php print render($page['user2']); ?>
					</div></div>
				</div>
			<?php endif; if($page['user3']): ?>
				<div id="user-3">
					<div class="user_column_top_<?php print $user_column_top; ?>"><div class="user-column-inner">
						<?php print render($page['user3']); ?>
					</div></div>
				</div>
			<?php endif; ?>
		 	</div>
		</div>
	 <?php endif; ?> <!--  End User Positions -->

    <div id="middle-part-<?php print $switch_column; ?>" class="middle-part clearfix">

	    <!-- LEFT SIDEBAR  -->
		<?php if($page['sidebar_left']): ?>
			<div id="sidebar_left">
				<?php print render($page['sidebar_left']); ?>
			</div>
		<?php endif; ?>


	<!-- MIDDLE CONTENT -->
	<div id="main-content-<?php print $switch_column; ?>" class="main-content clearfix">

		  <?php if ($messages): ?>
		    <div id="messages"><div class="section clearfix">
		      <?php print $messages; ?>
		    </div></div> <!-- /.section, /#messages -->
	  	  <?php endif; ?>

		  <?php if ($breadcrumb): ?>
		      <div id="breadcrumb"><?php print $breadcrumb; ?></div>
		  <?php endif; ?>

		  <?php print render($title_prefix); ?>
	      <?php if ($title): ?>
		        <h2 class="title" id="node-title">
		          <?php print $title; ?>
		        </h2>
	      <?php endif; ?>

	      <?php if ($tabs): ?>
	        <div class="tabs">
	          <?php print render($tabs); ?>
	        </div>
	      <?php endif; ?>

		  <?php if ($action_links): ?>
	        <ul class="action-links">
	          <?php print render($action_links); ?>
	        </ul>
	      <?php endif; ?>

	      <?php print render($page['content']); ?>

	      <?php if($page['content_bottom']): ?>
	        <div id="content-bottom" class="services clearfix">
	          <?php print render($page['content_bottom']); ?>
	        </div>
	  	<?php endif; ?>
	</div>


	<!-- RIGHT SIDEBAR  -->
	<?php if($page['sidebar_right']): ?>
		<div id="sidebar_right" class="clearfix">
			<?php print render($page['sidebar_right']); ?>
		</div>
	<?php endif; ?>

 </div> <!-- End left, right sidebar's and content area -->


	 <!--  Bottom Content Position -->
	 <?php if($page['bottomcontent1'] || $page['bottomcontent2']): ?>
		<div id="bottomcontent-position" class="clearfix">
			<?php if($page['bottomcontent1']): ?>
				<div id="bottomcontent-1">
					<div class="bottom-column-<?php print $bottom_column; ?>"><div class="bottom-column-inner">
						<?php print render($page['bottomcontent1']); ?>
					</div></div>
				</div>
			<?php endif; if($page['bottomcontent2']): ?>
				<div id="bottomcontent-2">
					<div class="bottom-column-<?php print $bottom_column; ?>"><div class="bottom-column-inner">
						<?php print render($page['bottomcontent2']); ?>
					</div></div>
				</div>
			<?php endif; ?>
		</div>
		<?php endif; ?>

  </div> <!--  End Content Wrapper -->


   <!-- FOOTER -->
 <div id="footer">
			<!--  Footer Content Positions -->
			 <?php if($page['fcolumn1'] || $page['fcolumn2'] || $page['fcolumn3']): ?>
   			<div class="footercontent-wrapper">
   		 	 <div class = "page-center">  <!--page center start-->
				<div id="footercontent-position" class="clearfix <?php print $fcontent_last ?>" >
					<?php if($page['fcolumn1']): ?>
						<div id="fcolumn-1">
							<div class="fcontent-column-<?php print $fcontent_column; ?>"><div class="fcolumn-column-inner">
								<?php print render($page['fcolumn1']); ?>
							</div></div>
						</div>
					<?php endif; if($page['fcolumn2']): ?>
						<div id="fcolumn-2">
							<div class="fcontent-column-<?php print $fcontent_column; ?>"><div class="fcolumn-column-inner">
								<?php print render($page['fcolumn2']); ?>
							</div></div>
						</div>
					<?php endif; if($page['fcolumn3']): ?>
						<div id="fcolumn-3">
							<div class="fcontent-column-<?php print $fcontent_column; ?>"><div class="fcolumn-column-inner">
								<?php print render($page['fcolumn3']); ?>
							</div></div>
						</div>
					<?php endif; ?>
				</div>
			  </div> <!--page center end-->
			</div>
			 <?php endif; ?> <!--  End Footer Content Positions -->


			<!--  Footer Menu Positions -->
			 <?php if($page['fcolumn4'] || $page['fcolumn5'] || $page['fcolumn6']): ?>
   			<div class="footermenu-wrapper">
   			    <div class = "page-center">  <!--page center start-->
				<div id="footermenu-position" class="clearfix <?php print $fmenu_last ?>" >
					<?php if($page['fcolumn4']): ?>
						<div id="fcolumn-4">
							<div class="fmenu-column-<?php print $fmenu_column; ?>"><div class="fcolumn-column-inner">
								<?php print render($page['fcolumn4']); ?>
							</div></div>
						</div>
					<?php endif; if($page['fcolumn5']): ?>
						<div id="fcolumn-5">
							<div class="fmenu-column-<?php print $fmenu_column; ?>"><div class="fcolumn-column-inner">
								<?php print render($page['fcolumn5']); ?>
							</div></div>
						</div>
					<?php endif; if($page['fcolumn6']): ?>
						<div id="fcolumn-6">
							<div class="fmenu-column-<?php print $fmenu_column; ?>"><div class="fcolumn-column-inner">
								<?php print render($page['fcolumn6']); ?>
							</div></div>
						</div>
					<?php endif; ?>
				</div>
		    </div> <!--page center end-->
		</div>
			 <?php endif; ?> <!--  End Footer Menu Positions -->


    <!-- DO NOT REMOVE THIS CREDIT LINK. IF YOU WANT TO REMOVE, PLEASE CONTACT US -->
	<div style="display: block;" class="credit"><div class = "page-center">Designed by  <a href="http://www.drupal-themes.adodis.com" title = "" target="_blank">Drupal Themes.</a></div></div>

 </div> <!-- End Footer -->
 </div> <!--  End Wrapper -->
