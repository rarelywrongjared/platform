(function ($) {
  var unchecked = function() {
    $('#edit-tid .form-item input:not(:checked) + label').css('display', 'none');
    $('#edit-tid .form-item input:checked').click(checked);
  }
  var checked = function() {
    $('#edit-tid .form-item label').css('display', 'block');
    $('#edit-tid .form-item input:checked').click(unchecked);
  }
  var widthScreen = document.documentElement.clientWidth;
  window.onresize = function() {
    widthScreen = document.documentElement.clientWidth;
    if (widthScreen < 480) {
      unchecked();
    } else {
      $('#edit-tid .form-item label').css('display', 'block');
    }
  };

  if (Drupal.ajax !== undefined) {
    Drupal.ajax.prototype.beforeSend = function (xmlhttprequest, options) {
    if (this.progress.type == 'throbber') {
       this.progress.element = $('<div class="ajax-progress ajax-progress-throbber"><svg id="load" x="0px" y="0px" viewBox="0 0 150 150"><circle id="loading-inner" cx="75" cy="75" r="60"/></svg></div>');
       $(this.element).after(this.progress.element);
     }
      if (widthScreen <= 480) {
        $('#edit-tid .form-item input:not(:checked) + label').hide();
      }
    };
  }
  $(document).ajaxStop(function() {
    if (widthScreen <= 480) {
      unchecked();
    }
    if ($("#edit-type-1 .form-item:last-child input").prop("checked")) {
      $("#content .view-portfolio").addClass('two-columns');
    }
  });

  // mobile menu
  Drupal.behaviors.mobileMenu = {
    attach : function(context, settings) {
      $(window).bind('load', function() {
        if ($(".page-blog .view-blog .view-content ul").length) {
          $(".page-blog .view-blog .view-content ul").waterfall({
            colMinWidth: 350, 
            defaultContainerWidth: 400,
          });
        }
      });
    }
  };

  $( document ).ready(function() {


    var el = $('.skills-bar-container');
    if (!$.isEmptyObject(el.offset())) {

      var pageHeight =  el.offset().top;
      var viewportHeight = document.documentElement.clientHeight;
      var scrollTop = document.documentElement.scrollTop || document.body.scrollTop;
      if ((scrollTop + viewportHeight) > pageHeight){
        $('.percent').each(function(){
          $(this).next().children().css('width', $(this).html());
          $(this).css('padding-right', 100 - $(this).html().split('%')[0] + '%');
          $(this).css('opacity', 1);
        });
      } else {
        $('.percent').each(function(){
          $(this).next().children().css('width', 0);
          $(this).css('padding-right', 0);
          $(this).css('opacity', 0);
        });
      }   
    }
    $('.messages .close').click(function(){
      $(this).parent().css('display', 'none');
    });
    $(".view-columns li.first").click(function() {
      $("#content .view-portfolio-isotope").removeClass('two-columns');
      $(".view-columns li a").removeClass('selected');
    });
    $(".view-columns li.last").click(function() {
      $("#content .view-portfolio-isotope").addClass('two-columns');
      $(".view-columns li a").removeClass('selected');
    });

    if (widthScreen < 480) {
      unchecked();      
    }

  });  
  window.onscroll = function() {    
    var el = $('.skills-bar-container');
    if (!$.isEmptyObject(el.offset())) {
      var pageHeight =  el.offset().top;
      var viewportHeight = document.documentElement.clientHeight;
      var scrollTop = document.documentElement.scrollTop || document.body.scrollTop;
      if ((scrollTop + viewportHeight) > pageHeight){
        $('.percent').each(function(){
          $(this).next().children().css('width', $(this).html());
          $(this).css('padding-right', 100 - $(this).html().split('%')[0] + '%');
          $(this).css('opacity', 1);
        });
      } else {
        $('.percent').each(function(){
          $(this).next().children().css('width', 0);
          $(this).css('padding-right', 0);
          $(this).css('opacity', 0);
        });
      }   
    }};
  


})(jQuery);
