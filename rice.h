<!DOCTYPE html>
<html lang="en">
<head>
  <title>grid</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.0/css/bootstrap.min.css">
  <link rel="stylesheet" type="text/css" href="style.css">
  <style type="text/css">


  </style>
  <style>
  #mySidenav a {
  position: absolute;
  left: -100px;
  transition: 0.3s;
  padding: 15px;
  width: 250px;
  text-decoration: none;
  font-size: 20px;
  color: white;
  border-radius: 0 5px 5px 0;
}

#mySidenav a:hover {
  left: 0;
}

#about {
  top: 20px;
  background-color: orange;
}

#blog {
  top: 80px;
  background-color: orange;
}

#projects {
  top: 140px;
  background-color: orange;
}

#contact {
  top: 200px;
  background-color: orange;
}
</style>
</head>
<body>
	<div class="header container-fluid text-right" width="100%">
    <div class="sale_div"><p class="header_p" style="font-size: 2vw;">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;
     
    </p>
  </div>
    <div class="container-fluid table_div">
      <div class="header_table">
    <table>
      <tr>
<td style="font-size: 1.5vw;">
       Create Account&nbsp;&nbsp;&nbsp;
      </td>
      <td  style="font-size: 1.5vw";>
        Login&nbsp;&nbsp;&nbsp;
      </td>
      <td  style="font-size: 1.5vw";>
        Help
      </td>
      </tr>
    </table>
  </div>
  <div class="header_table">
    <span  style="float:right; cursor: pointer;margin-right: 0;margin-left: auto; ">
        <span class="glyphicon glyphicon-shopping-cart my-cart-icon"><span class="badge badge-notify my-cart-badge"></span></span>
      </span>
    </div>

     
  
  </div>
  </div>
  <div class="div_icon container-fluid ">
    <div clas3s="header_icon"><b class="b_icon" style="font-size: 5vw;">EBAzzAR</b></div>
    <form class="form-inline search_div">
      <span class="dropdown">
      <input type="text" class="form-control search_txt dropdown-toggle" data-toggle="dropdown" placeholder="SEARCH" id="search_1">
      <ul class="dropdown-menu"  style="margin-top: 15px" id="menu">
        <li><a href="#">almonds</a></li>
        <li><a href="#">cookwares</a></li>
        <li><a href="#">mops</a></li>
        <li><a href="#">canned food</a></li>
      </ul>
    </span>

      <button class="search_but"><div class="glyphicon glyphicon-search"></div></button>
  </form>
</div>
  <br>
  <nav class="navbar navbar-inverse navbar_bg">
  <div class="container-fluid navbar_bg">
    <ul class="nav navbar-nav">
      <li class="active"><a href="#">Home</a></li>
      <li class="dropdown"><a class="dropdown-toggle" data-toggle="dropdown" href="#"><b class="b_nav">All Groceries</b><span class="caret"></span></a>
        <ul class="dropdown-menu">
          <li><a href="#">Dals & Pulses</a></li>
          <li><a href="#">Almonds</a></li>
          <li><a href="#">cashews</a></li>
          <li><a href="#">Dry fruits</a></li>
          <li><a href="#">Rice and Rice Products</a></li>
        </ul>
      </li>
      <li class="dropdown"><a class="dropdown-toggle" data-toggle="dropdown" href="#"><b class="b_nav">Household</b><span class="caret"></span></a>
        <ul class="dropdown-menu">
          <li><a href="#">Cookware</a></li>
          <li><a href="#">Dust Pans</a></li>
          <li><a href="#">Scrubers</a></li>
          <li><a href="#">Kitchenware</a></li>
          <li><a href="#">Mops</a></li>
        </ul>
      </li>
      <li class="dropdown"><a class="dropdown-toggle" data-toggle="dropdown" href="#"><b class="b_nav">Personal Care</b><span class="caret"></span></a>
        <ul class="dropdown-menu">
          <li><a href="#">Dals & Pulses</a></li>
          <li><a href="#">Almonds</a></li>
          <li><a href="#">cashews</a></li>
          <li><a href="#">Dry fruits</a></li>
          <li><a href="#">Rice and Rice Products</a></li>
        </ul>
      </li>
      <li class="dropdown"><a class="dropdown-toggle" data-toggle="dropdown" href="#"><b class="b_nav">Packaged Foods</b><span class="caret"></span></a>
        <ul class="dropdown-menu">
          <li><a href="#">Baby Food</a></li>
          <li><a href="#">Dessert items</a></li>
          <li><a href="#">Biscuits</a></li>
          <li><a href="#">Chocolates & Sweets</a></li>
          <li><a href="#">Canned Food</a></li>
        </ul>
      </li>
      <li><a href="#"><b class="b_nav">Offers</b></a></li>
      <li><a href="#"><b class="b_nav">Contact</b></a></li>
    </ul>
  </div>
</nav>
	<div class="container-fluid">
    <ul class="breadcrumb" >
  <li><a href="#" style="color:orange">All Grocery</a></li>
  <li><a href="#"style="color:orange">Dal and Pulses</a></li>
    </ul>
		<div class="row">
			<nav class="col-sm-3">
      		<div class="col-sm-3">
            <ul class="nav nav-pills nav-stacked" data-spy="affix" data-offset-top="20px"  >
              <div id="mySidenav" class="sidenav">
   <li><a href="#" id="about">About</a></li>
   <li><a href="#" id="blog">Blog</a></li>
   <li><a href="#" id="projects">Projects</a></li>
   <li><a href="#" id="contact">Contact</a></li><div>


              </ul>
        </div>
    		</nav>
			<div class="col-md-8">
			   <div class="row"> 
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="rice.jpg">
                    <img src="rice1.jpg" alt="Lights" style="width:100%;height: 150px"></a>
                    <div class="caption">
                        <p><b>premium rice</b></p>
                        <p>price:<strong>rs 430</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="1" data-name="product 1" data-summary="summary 1" data-price="430" data-quantity="1" data-image="rice.jpg">add to cart</button></p>
                    </div>
              
          
             </div>
            </div>
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="rice.jpg">
                    <img src="rice2.jpg" alt="food" style="width:100%;height: 150px">
                     </a>  
                    <div class="caption">
                      <p><b>Dosa rice</b></p>
                        <p>price:<strong>rs 510</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="2" data-name="dosa rice" data-summary="summary 2" data-price="510" data-quantity="1" data-image="rice2.jpg">add to cart</button></p>
                    </div>
             
          
             </div>
            </div>
            
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="rice3.jpg">
                    <img src="rice3.jpg" alt="food" style="width:100%;height: 150px">
                    </a> 
                    <div class="caption">
                        <p><b>idli rice</b></p>
                        <p>price:<strong>rs 530</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="4" data-name="idli rice" data-summary="summary 4" data-price="130" data-quantity="1" data-image="rice3.jpg">add to cart</button></p>
                    </div>
             </div>
            </div>
        </div>



        <div class="row"> 
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="rice.jpg">
                    <img src="masoor.jpg" alt="Lights" style="width:100%;height: 150px"></a>
                    <div class="caption">
                        <p><b>masoor dal</b></p>
                        <p>price:<strong>rs 130</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="1" data-name="product 5" data-summary="summary 5" data-price="130" data-quantity="1" data-image="rice.jpg">add to cart</button></p>
                    </div>
              
          
             </div>
            </div>
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="rice.jpg">
                    <img src="rice4.jpg" alt="food" style="width:100%;height: 150px">
                     </a>  
                    <div class="caption">
                      <p><b>organic rice</b></p>
                        <p>price:<strong>rs 520</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="2" data-name="organic rice" data-summary="summary 6" data-price="520" data-quantity="1" data-image="rice4.jpg">add to cart</button></p>
                    </div>
             
          
             </div>
            </div>
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="moong.jpg">
                    <img src="rice5.jpg" alt="food" style="width:100%;height: 150px">
                </a>
                    <div class="caption">
                      <p><b>brown rice</b></p>
                        <p>price:<strong>rs 590</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="3" data-name="rice" data-summary="summary 7" data-price="590" data-quantity="1" data-image="rice5.jpg">add to cart</button></p>
                    </div>  
          
             </div>
            </div>
           
        </div>



      

        <div class="row"> 
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="rice.jpg">
                    <img src="rice6.jpg" alt="Lights" style="width:100%;height: 150px"></a>
                    <div class="caption">
                        <p><b>jeera rice</b></p>
                        <p>price:<strong>rs 130</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="1" data-name="jeera rice" data-summary="summary 13" data-price="130" data-quantity="1" data-image="rice6.jpg">add to cart</button></p>
                    </div>
              
          
             </div>
            </div>
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="urad.jpg">
                    <img src="rice7.jpg" alt="food" style="width:100%;height: 150px">
                     </a>  
                    <div class="caption">
                      <p><b>india gate rice</b></p>
                        <p>price:<strong>rs 140</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="2" data-name="rice" data-summary="summary 14" data-price="140" data-quantity="1" data-image="rice7.jpg">add to cart</button></p>
                    </div>
             
          
             </div>
            </div>
            <div class="col-sm-4">
              <div class="thumbnail text-center">
                <a href="rice.jpg">
                    <img src="urad.jpg" alt="food" style="width:100%;height: 150px">
                </a>
                    <div class="caption">
                      <p><b>Urad dal</b></p>
                        <p>price:<strong>rs 90</strong></p>
                          <p><button class="btn btn-danger my-cart-btn" data-id="3" data-name="product 15" data-summary="summary 15" data-price="90" data-quantity="1" data-image="urad.jpg">add to cart</button></p>
                    </div>  
          
             </div>
            </div>
            <div class="col-sm-3">
           
        </div>
        </div>
      </div>
    </div>
     <center> <ul class="pagination">
  <li><a href="#" style="color:orange">1</a></li>
  <li><a href="#" style="color:orange">2</a></li>
</center>
</ul>
<div style="background-color:#737373;">
<br>
<br>


    <div style="background-color:#737373;">
<br>
<br>

<div class="footer">
    <div class="container" style="background-color:#262626;color:orange;">
      <div class="w3_footer_grids">
        <div class="col-md-3 w3_footer_grid">
          <h3>Contact</h3>
          <ul class="address" type="none" style="background-color:#262626;color:orange;">
            <li  style="color:#e6e6e6;"><i class="fa fa-arrow-right" aria-hidden="true"></i></i>&nbsp;&nbsp;&nbsp;Chitkara University <span>Rajpura.</span></li>
            <li><a href="mailto:mayank1030cse18@chitkara.eduu.inco.m" style="color:#e6e6e6;"><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;mayank1030@chitkra.edu.in</a></li>
            <li><a href="mailto:anmol1028cse18@chitkara.eduu.inco.m" style="color:#e6e6e6;"><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;anmol1028@chitkara.edu.in</a></li>
            <li  style="color:#e6e6e6;"><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;+9729281526</li>
          </ul>
        </div>
        <div class="col-md-3 w3_footer_grid">
          <h3>Information</h3>
          <ul class="info"type="none"> 
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="about.html" style="color:#e6e6e6;">About Us</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="contact.html" style="color:#e6e6e6;">Contact Us</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="short-codes.html" style="color:#e6e6e6;">Short Codes</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="faq.html" style="color:#e6e6e6;">FAQ's</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="products.html" style="color:#e6e6e6;">Special Products</a></li>
          </ul>
        </div>
        <div class="col-md-3 w3_footer_grid">
          <h3>Category</h3>
          <ul class="info"type="none"> 
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="groceries.html" style="color:#e6e6e6;">Groceries</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="household.html" style="color:#e6e6e6;">Household</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="personalcare.html" style="color:#e6e6e6;">Personal Care</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="packagedfoods.html" style="color:#e6e6e6;">Packaged Foods</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="beverages.html"style="color:#e6e6e6;">Beverages</a></li>
          </ul>
        </div>
        <div class="col-md-3 w3_footer_grid">
          <h3>Profile</h3>
          <ul class="info"type="none"> 
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="products.html"style="color:#e6e6e6;">Store</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="checkout.html"style="color:#e6e6e6">My Cart</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="login.html" style="color:#e6e6e6;">Login</a></li>
            <li><i class="fa fa-arrow-right" aria-hidden="true"></i>&nbsp;&nbsp;&nbsp;<a href="registered.html"style="color:#e6e6e6;">Create Account</a></li>
          </ul>
        </div>
       

      <!--these all three script are mandatury-->
      <script src="jquery-2.2.3.min.js"></script>
      <script type='text/javascript' src="bootstrap.min.js"></script>
     <script type='text/javascript' src="jquery.mycart.js"></script>
  <script type="text/javascript">
     $(function () {

    var goToCartIcon = function($addTocartBtn){
      var $cartIcon = $(".my-cart-icon");
      var $image = $('<img width="30px" height="30px" src="' + $addTocartBtn.data("image") + '"/>').css({"position": "fixed", "z-index": "999"});
      $addTocartBtn.prepend($image);
      var position = $cartIcon.position();
      $image.animate({
        top: position.top,
        right: position.left
      }, 500 , "linear", function() {
        $image.remove();
      });
    }

    $('.my-cart-btn').myCart({
      currencySymbol: '$',
      classCartIcon: 'my-cart-icon',
      classCartBadge: 'my-cart-badge',
      classProductQuantity: 'my-product-quantity',
      classProductRemove: 'my-product-remove',
      classCheckoutCart: 'my-cart-checkout',
      affixCartIcon: true,
      showCheckoutModal: true,
      numberOfDecimals: 2,
      cartItems: [
        {id: 1, name: 'product 1', summary: 'summary 1', price: 130, quantity: 1, image: 'k.jpeg'},
        {id: 2, name: 'product 2', summary: 'summary 2', price: 10, quantity: 2, image: 'k.jpeg'},
        {id: 3, name: 'product 3', summary: 'summary 3', price: 90, quantity: 1, image: 'k.jpeg'}
      ],
      clickOnAddToCart: function($addTocart){
        goToCartIcon($addTocart);
      },
      afterAddOnCart: function(products, totalPrice, totalQuantity) {
        console.log("afterAddOnCart", products, totalPrice, totalQuantity);
      },
      clickOnCartIcon: function($cartIcon, products, totalPrice, totalQuantity) {
        console.log("cart icon clicked", $cartIcon, products, totalPrice, totalQuantity);
      },
      checkoutCart: function(products, totalPrice, totalQuantity) {
        var checkoutString = "Total Price: " + totalPrice + "\nTotal Quantity: " + totalQuantity;
        checkoutString += "\n\n"+" name \t\t" + " \tsummary\t \t price \t quantity \t ";
        $.each(products, function(){
          checkoutString += ("\n " + this.name + " \t\t" + this.summary + "\t \t " + this.price + " \t\t\t " + this.quantity + " \t " );
        });
        alert(checkoutString)
        console.log("checking out", products, totalPrice, totalQuantity);
      },
      getDiscountPrice: function(products, totalPrice, totalQuantity) {
        console.log("calculating discount", products, totalPrice, totalQuantity);
        return totalPrice * 0.5;
      }
    });
  });
  </script>
  </script>
</body>
</html>