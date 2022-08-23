<?php
        $user = $_POST["name"];
        $psw = $_POST["psw"];
        // $user="zgy";
        // $psw="123";
     
        $mysql_server_name = 'localhost'; //改成自己的mysql数据库服务器
        $mysql_username = 'root'; //改成自己的mysql数据库用户名
        $mysql_password = '197839'; //改成自己的mysql数据库密码
        $mysql_database = 'test'; //改成自己的mysql数据库名
        $conn=mysqli_connect($mysql_server_name, $mysql_username, $mysql_password, $mysql_database); //连接数据库
     
        if ($user==""||$psw== "") {
            echo "请输入用户名或密码！";
        } else {
            $sql = "select name,psw from user where name = '$user' and psw = '$psw'";
            $result = mysqli_query($conn, $sql);
            $num = mysqli_num_rows($result);
            if ($num) {
                $row = mysqli_fetch_array($result);  //将数据以索引方式储存在数组中
                echo "欢迎";
                echo $row[0];
            } else {
                echo "用户名或密码不正确！";
            }
        }
