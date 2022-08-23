<?php
/**
* 注册信息验证
*/
    $user=$_POST['name'];
    $pass=$_POST['psw'];
    $confirm=$_POST['psw2'];

    // $user="test";
    // $pass="123";
    // $confirm="123";

        $mysql_server_name = 'localhost'; //改成自己的mysql数据库服务器
        $mysql_username = 'root'; //改成自己的mysql数据库用户名
        $mysql_password = '197839'; //改成自己的mysql数据库密码
        $mysql_database = 'test'; //改成自己的mysql数据库名
    if ($pass!=$confirm) {
        echo "<script>alert('两次输入密码不一致！');</script>";
    } else {
        $conn=mysqli_connect($mysql_server_name, $mysql_username, $mysql_password, $mysql_database);
        // $find="select count(*) from test where user='$user'";
        $sql = "insert into user values('$user','$pass')";
        $result=mysqli_query($conn, $sql);
        // $result=mysqli_query($conn, $find);
        if ($result>0) {
            echo"<script type='text/javascript'>alert('注册成功')</script>";
        } else {
            echo"<script type='text/javascript'>alert('注册失败,请使用其它用户名'); </script>";
        }
        $stmt = null;//释放
            $conn = null; // 关闭连接
    }
