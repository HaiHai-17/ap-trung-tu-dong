const char LoginPage[] PROGMEM = R"=====( 
<!DOCTYPE html>
<html>
<head>
  <title>E-SMART HOME</title>
  <style type="text/css">
    h1{
      font-size: 28px;
    }
    body{
      background-color: #222222;
      text-align: center;
    }
    #loginpage{
      color: white;
      border: solid 1px white;
      width: 340px;
      margin: 0px auto;
    }
    #content{
      text-align: left;
      margin: 10px 10px;
    }
    button{
      height: 40px;
      width: 85px;
      margin: 0px 15px 0px 0px;
      float: left;
      font-weight: bold;
      color: #222222;
      border-color: white;
      border-radius: 5px;
      outline: none;
    }
    button:active{
      background-color: #222222;
      color: white;
    }
    #footer{
      margin-top: 50px;
    }
  </style>
  <meta name="viewport" content="width=device-width,user-scalable=0" charset="UTF-8">
</head>
<body>
  <div id="loginpage">
    <div id="header">
      <b style="font-size: 22px;">ĐĂNG NHẬP HỆ THỐNG</b>
    </div>
    <div id="content">
      <div id="login_system">
        <!-- <div><b>THÔNG TIN ĐĂNG NHẬP</b></div> -->
        <div style="text-align: left;margin-left: 20px;">
          <p>Tên người dùng:</p>
              <input style="width: 230px;" id="user_login" type="text" size="5">
          <p>Mật khẩu:</p>
              <input style="width: 230px;" id="pass_login" type="password" size="63"><input onclick="showpass('login')" type="checkbox">hiện
        </div>
        <div style="height: 40px;margin-left: 20px;margin-top: 20px;">
          <button  onclick="login()" style="width: 130px;">Đăng nhập</button>
          <button  onclick="info()" style="width: 130px;">Liên hệ</button>
        </div>
      </div>
    </div>
    <div id="footer">
      <p><i>---->><b><pan style="color: yellow;text-decoration: none;">ĐIỆN THÔNG MINH E-SMART</pan></b><<----</i> 
      </p>
    </div> 
  </div>
  <script type="text/javascript">
    window.onload = function(){
      if(sessionStorage.getItem("LOGIN_STATE") != "1"){
        getSystem();
      }else{
        window.location.assign('/home');
      }
    }
    //-----------Hàm khởi tạo đối tượng xhttp----------------
    function create_obj(){
      td = navigator.appName;
      if(td == "Microsoft Internet Explorer"){
        obj = new ActiveXObject("Microsoft.XMLHTTP");
      }else{
        obj = new XMLHttpRequest();
      }
      return obj;
    }
    var xhttp = create_obj();
    var user_login;
    var pass_login;
    //-------------------------------------------------------
    function getSystem(){
      xhttp.onreadystatechange = function(){
        if(xhttp.readyState==4 && xhttp.status==200){
          //alert(xhttp.responseText);
          var obj = JSON.parse(xhttp.responseText);
          user_login = obj.user_login;
          pass_login = obj.pass_login;
        }
      }

      xhttp.open("GET","/getSystem",true);
      xhttp.send();
    }
    function login(){
        if((document.getElementById("user_login").value==user_login)&&(document.getElementById("pass_login").value==pass_login)){
          //alert("Đăng nhập thành công!");
          if ( typeof(Storage) !== "undefined") {
            sessionStorage.setItem("LOGIN_STATE","1");
            window.location.assign('/home');
          } else {
              alert('Trình duyệt của bạn đã quá cũ. Hãy nâng cấp trình duyệt ngay!');
          }
        }else{
          alert("Tên đăng nhập hoặc mật khẩu không đúng!");
          if ( typeof(Storage) !== "undefined") {
            sessionStorage.setItem("LOGIN_STATE","0");
          } else {
              alert('Trình duyệt của bạn đã quá cũ. Hãy nâng cấp trình duyệt ngay!');
          }
        }
    }
    function exit(){
        window.location.assign('/home');
    }
    function info(){
      alert("Đây là phiên bản dùng thử. Vui lòng liên hệ 0919.890.938 để mua phiên bản đầy đủ!");
    }
    function showpass(mode){
      var temp, temp2
      if(mode=='login'){
        temp = document.getElementById("pass_login");
      }else if(mode=='login_update'){
        temp = document.getElementById("pass_login_update");
        temp2 = document.getElementById("pass_login_update2");
      }
      if(temp.type=="password"){
        temp.type = "text";
        temp2.type = "text";
      }else{
        temp.type="password";
        temp2.type="password";
      }
    }
  </script> 
</body>
</html>
)=====";
