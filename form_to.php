<?php
    $fname=$_POST["firstname"];
    $lname=$_POST["lastname"];
    $email=$_POST["email"];
    $passwd=$_POST["password"];
    $phno=$_POST["phno"];

    $host="localhost";
    $dbname="test";
    $username="root";
    $password="";

    $conn=mysqli_connect($host,$username,$password,$dbname);

    if(mysqli_connect_errno()){
        die("connection failed".mysqli_connect_errno());
    }

    if(isset($fname) && isset($lname) && isset($email) && isset($passwd) && isset($phno)){
        if(strlen($fname)>6){

            if(filter_var($email,FILTER_VALIDATE_EMAIL)){

                if(strlen($passwd)>6){

                    if(strlen($phno)==10 && filter_var($phno,FILTER_VALIDATE_INT)){

                        $sql="INSERT INTO register(fname,lname,email,passwd,phno) VALUES($fname,$lname,$email,$passwd,$phno)";
                        $query=mysqli_connect($conn,$sql);

                        if($query){

                            echo "connection succesfull";
                        }
                        else{

                            echo "connection failed";
                        }
                    }
                    else{

                        echo "invalid phno";
                    }
                }
                else{

                    echo "invalid passwd";
                }
            }
            else{

                echo "invalid email";
            }
        }
        else{

            echo "invalid fname";
        }
    }

?>