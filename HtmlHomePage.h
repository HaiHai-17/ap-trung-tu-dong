const char HomePage[] PROGMEM = R"=====( 
<!DOCTYPE html>
<html>
<head>
  <title>E-SMART HOME</title>
  <style type="text/css">
    body{
      background-color: #222222;
      text-align: center;
    }
    #homepage{
      color: white;
      border: solid 1px white;
      width: 340px;
      margin: 0px auto;
    }
    #content{
      text-align: left;
      margin: 10px 10px;
      height: 620px;
    }
    #ledconnect{
        outline: none;
        width: 30px;
        height: 30px;
        border-radius: 50%;
        border: solid 2px white;
        background-color: #222222;
    }
    .led_output{
        outline: none;
        width: 30px;
        height: 30px;
        border-radius: 50%;
        border: solid 2px white;
        background-color: #222222;
        margin-top: 10px;
    }
    .buttonControl{
        outline: none;
        margin: 15px 10px;
        width: 75px;
        height: 75px;
        border-radius: 50%;
        -moz-border-radius: 50%;
        -webkit-border-radius: 50%;
        color:white;
        font-size:20px;
        font-weight: bold;
    }
   
    .button{
      height: 35px;
      width: 90px;
      margin: 10px 2px;
      float: left;
    }
    .button:active{
      background-color: #222222;
      color: white;
    }
    .buttonStyle{
      float: left;
      width: 85px;
      text-align: center;
    }
    .rowStyle{
      float: left;
      width: 100px;
    }
    .rowStyle2{
      float: left;
      width: 100px;
    }
  </style>
  <meta name="viewport" content="width=device-width,user-scalable=0" charset="UTF-8">
</head>
<body>
  <div id="homepage">
    <div id="content">
      <div style="margin-left: 10px;">
        <div style="width: 300px;float: left;text-align: center;">
          <input id="ledconnect" type="button">
        </div>

        <div style="width: 300px;float: left;">
          <div style="float: left;width: 140px;margin-left: 20px;">
            <div>NHIỆT ĐỘ</div>
            <div>
              <input type="text" id="nhietdo" value="36°C" style="width: 120px;font-size: 25px;background-color: #222222;outline: none;color: white;border: none;" readonly="true">
            </div>
          </div>
          <div style="float: left;width: 140px;">
            <div>ĐỘ ẨM</div>
            <div>
              <input type="text" id="doam" value="60%" style="width: 120px;font-size: 25px;background-color: #222222;outline: none;color: white;border: none;" readonly="true">
            </div>
          </div>
        </div>
        <div style="float: left;margin-top: 20px;">
          <div style="width: 120px;float: left;">Số ngày còn lại:</div>
          <div style="float: left;"><input id="songayconlai" type="text" style="width: 100px;border: none;background-color: #222222;outline: none;color: white;" readonly="true" value="20 ngày"></div>
        </div>
        <div style="margin-top: 20px;float: left;width: 300px;border: solid 1px white;">
          <div style="margin:5px 5px;">Trạng thái điều khiển:</div>
          <div style="float: left;width: 310px;margin-left: 5px;">
            <div class="rowStyle2" style="margin-left: 20px;">Đèn</div>
            <div class="rowStyle2" style="margin-left: -15px;">Phun sương</div>
            <div class="rowStyle2" style="margin-left: 5px;">Quạt hút</div>
          </div>
          <div style="float: left;width: 300px;text-align: center;margin-bottom: 5px;">
            <div class="rowStyle2"><input id="led_output1" class="led_output" type="button"></div>
            <div class="rowStyle2"><input id="led_output2" class="led_output" type="button"></div>
            <div class="rowStyle2"><input id="led_output3" class="led_output" type="button"></div>
          </div>
        </div>

        <div style="margin-top: 10px;float: left;margin-bottom: 10px;">Giới hạn nhiệt độ:</div>
        <div style="float: left;width: 300px;margin-left: 10px;">
          <div class="rowStyle">Min</div>
          <div class="rowStyle">Max</div>
          <div class="rowStyle">Over</div>
        </div>
        <div style="float: left;width: 300px;">
          <div class="rowStyle"><input id="t_min" type="number" step="0.1" style="width: 40px;height: 20px;">°C</div>
          <div class="rowStyle"><input id="t_max" type="number" step="0.1" style="width: 40px;height: 20px;">°C</div>
          <div class="rowStyle"><input id="t_over" type="number" step="0.1" style="width: 40px;height: 20px;">°C</div>
        </div>

        <div style="margin-top: 20px;float: left;margin-bottom: 10px;">Giới hạn độ ẩm:</div>
        <div style="float: left;width: 300px;margin-left: 10px;">
          <div class="rowStyle">Min</div>
          <div class="rowStyle">Max</div>
          <div class="rowStyle">Over</div>
        </div>
        <div style="float: left;width: 300px;">
          <div class="rowStyle"><input id="h_min" type="number" step="1" style="width: 40px;height: 20px;">%</div>
          <div class="rowStyle"><input id="h_max" type="number" step="1" style="width: 40px;height: 20px;">%</div>
          <div class="rowStyle"><input id="h_over" type="number" step="1" style="width: 40px;height: 20px;">%</div>
        </div>

        <div style="float: left;margin-top: 20px;">
          <div style="width: 200px;float: left;padding-top: 5px;">Hiệu chỉnh nhiệt độ:</div>
          <div class="rowStyle"><input id="hieuchinh" type="number" step="0.1" style="width: 40px;height: 20px">°C</div>
        </div>
        <div style="float: left;margin-top: 20px;">
          <div style="width: 200px;float: left;padding-top: 5px;">Số ngày ấp trứng:</div>
          <div class="rowStyle"><input id="songayap" type="number" step="1" style="width: 40px;height: 20px"> ngày</div>
        </div>

        <div style="float: left;width: 300px;margin-top: 20px;">
          <button  onclick="info()" class="button">Cài đặt wifi</button>
          <button onclick="change()" class="button">Chỉnh sửa</button>
          <button id="bt_save" onclick="saveSetup()" class="button">Lưu</button>
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
          window.location.assign('/login');
       }else{
         init();
         getSetup();
         document.getElementById("t_min").disabled = true;
         document.getElementById("t_max").disabled = true;
         document.getElementById("t_over").disabled = true;
         document.getElementById("h_min").disabled = true;
         document.getElementById("h_max").disabled = true;
         document.getElementById("h_over").disabled = true;
         document.getElementById("hieuchinh").disabled = true;
         document.getElementById("songayap").disabled = true;
         document.getElementById("bt_save").disabled = true;
       }
    }
    function info(){
      alert("Đây là phiên bản dùng thử. Vui lòng liên hệ 0919.890.938 để mua phiên bản đầy đủ!");
    }
    function change(){
       document.getElementById("t_min").disabled = false;
       document.getElementById("t_max").disabled = false;
       document.getElementById("t_over").disabled = false;
       document.getElementById("h_min").disabled = false;
       document.getElementById("h_max").disabled = false;
       document.getElementById("h_over").disabled = false;
       document.getElementById("hieuchinh").disabled = false;
       document.getElementById("songayap").disabled = false;
       document.getElementById("bt_save").disabled = false;
    }
    //=====================WEBSOCKET CLIENT===================================
       var Socket;      //Khai báo biến Socket
       function init(){
         //Khởi tạo websocket
         Socket = new WebSocket('ws://' + window.location.hostname + ':81/');
         //Nhận broadcase từ server
         Socket.onmessage = function(event){   
         JSONobj = JSON.parse(event.data);   //Tách dữ liệu json
         //alert(event.data);
         ledconnect = JSONobj.ledconnect;
         uptimes = JSONobj.uptimes;
         output1 = JSONobj.output1;
         output2 = JSONobj.output2;
         output3 = JSONobj.output3;
         nhietdo = JSONobj.nhietdo;
         doam =JSONobj.doam;
         songayconlai = JSONobj.songayconlai;
         

         if(ledconnect=="0"){
          document.getElementById("ledconnect").style.background = "yellow";
         }else{
          document.getElementById("ledconnect").style.background = "#222222";
         }
         
         if(output1 == "0"){
            document.getElementById("led_output1").style.background = "#23C48E";
         }else{
            document.getElementById("led_output1").style.background = "#222222";
         }
         if(output2 == "0"){
            document.getElementById("led_output2").style.background = "#23C48E";
         }else{
            document.getElementById("led_output2").style.background = "#222222";
         }
         if(output3 == "0"){
            document.getElementById("led_output3").style.background = "#23C48E";
         }else{
            document.getElementById("led_output3").style.background = "#222222";
         }
         document.getElementById("nhietdo").value = nhietdo+"°C";
         document.getElementById("doam").value = doam + "%";
         document.getElementById("songayconlai").value = songayconlai + " ngày";
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
    //-------------------------------------------------------
    function getSetup(){
      xhttp.onreadystatechange = function(){
        if(xhttp.readyState==4 && xhttp.status==200){
          //alert(xhttp.responseText);
           var obj = JSON.parse(xhttp.responseText);
           nhietdo_min = obj.nhietdo_min;
           nhietdo_max = obj.nhietdo_max;
           nhietdo_over = obj.nhietdo_over;
           doam_min = obj.doam_min;
           doam_max = obj.doam_max;
           doam_over = obj.doam_over;
           hieuchinh = obj.hieuchinh;
           songayap = obj.songayap;
           document.getElementById("t_min").value = nhietdo_min;
           document.getElementById("t_max").value = nhietdo_max;
           document.getElementById("t_over").value = nhietdo_over;
           document.getElementById("h_min").value = doam_min;
           document.getElementById("h_max").value = doam_max;
           document.getElementById("h_over").value = doam_over;
           document.getElementById("hieuchinh").value = hieuchinh;
           document.getElementById("songayap").value = songayap;
        }
      }

      xhttp.open("GET","/getSetup",true);
      xhttp.send();
    }
    function saveSetup(){
      nhietdo_min = document.getElementById("t_min").value;
      nhietdo_max = document.getElementById("t_max").value;
      nhietdo_over = document.getElementById("t_over").value;
      doam_min = document.getElementById("h_min").value;
      doam_max = document.getElementById("h_max").value;
      doam_over = document.getElementById("h_over").value;
      hieuchinh = document.getElementById("hieuchinh").value;
      songayap = document.getElementById("songayap").value;
      xhttp.onreadystatechange = function(){
        if(xhttp.readyState==4 && xhttp.status==200){
          alert(xhttp.responseText);
          document.getElementById("t_min").disabled = true;
           document.getElementById("t_max").disabled = true;
           document.getElementById("t_over").disabled = true;
           document.getElementById("h_min").disabled = true;
           document.getElementById("h_max").disabled = true;
           document.getElementById("h_over").disabled = true;
           document.getElementById("hieuchinh").disabled = true;
           document.getElementById("songayap").disabled = true;
           document.getElementById("bt_save").disabled = true;
        }
      }
      xhttp.open("GET","/saveSetup?t_min="+nhietdo_min+"&&t_max="+nhietdo_max+"&&t_over="+nhietdo_over+"&&h_min="+doam_min+"&&h_max="+doam_max+"&&h_over="+doam_over+"&&hieuchinh="+hieuchinh+"&&songayap="+songayap,true);
      xhttp.send();
    }
      function sendcontrol(button){
        switch (button){
          case 8:
              if(document.getElementById("button8").value == "OFF"){
                Socket.send("output8_on");
                document.getElementById("button8").style.background = "#23C48E";
              }else{
                Socket.send("output8_off");
                document.getElementById("button8").style.background = "#222222";
              }
              break;
        }
      }
  </script> 
</body>
</html>
)=====";
