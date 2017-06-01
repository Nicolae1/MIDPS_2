<?php

require ("Entities/CoffeeEntity.php");

//Contains database related code for the Coffee page
class CoffeeModel {
    //Get all coffee types from the database and return them in an array
    function GetCoffeeTypes()
    { 
        require 'Credentials.php';
        
        //Open connection and Select database
       
        $link = mysqli_connect($host, $user, $passwd) or die(mysqli_error(link));
        mysqli_select_db($link, $database);
        $result = mysqli_query($link, "SELECT DISTINCT type FROM coffee") or die(mysqli_error(link));
        $types = array();
        
        //Get data from database
        while ($row = mysqli_fetch_array($result)) 
                {
            array_push($types, $row[0]);
        }
        
        //Close connection and return result
        mysqli_close($link);
        return $types;
    }
    
    //Get coffeeEntity objects from the database and return them in an array
    function GetCoffeeByType($type)
    { 
     require 'Credentials.php';
        
        //Open connection and Select database
        $link = mysqli_connect($host, $user, $passwd);
        mysqli_select_db($link, $database);   
        
        $query = "SELECT * FROM coffee WHERE type LIKE '$type'";
        $result = mysqli_query($link, $query) or die(mysqli_error($link));
        $coffeeArray = array ();
        
        //Get data from database
        while ($row = mysqli_fetch_array($result)) {
            $name = $row[1];
            $type = $row[2];
            $price = $row[3];
            $roast = $row[4];
            $country = $row[5];
            $image = $row[6];
            $review = $row[7];
            
            //Create coffee objects and store them in an array
            $coffee = new CoffeeEntity(-1, $name, $type, $price, $roast, $country, $image, $review);
            array_push($coffeeArray, $coffee);
        }
        //Close connection and return result
        mysqli_close($link);
        return $coffeeArray;
    }
    
    function GetCoffeeById($id)
    { 
     require 'Credentials.php';
        
        //Open connection and Select database
        $link = mysqli_connect($host, $user, $passwd);
        mysqli_select_db($link, $database);   
        
        $query = "SELECT * FROM coffee WHERE id = $id ";
        $result = mysqli_query($link, $query) or die(mysqli_error($link));
        
        //Get data from database
        while ($row = mysqli_fetch_array($result)) {
            $name = $row[1];
            $type = $row[2];
            $price = $row[3];
            $roast = $row[4];
            $country = $row[5];
            $image = $row[6];
            $review = $row[7];
            
            //Create coffee 
            $coffee = new CoffeeEntity($id, $name, $type, $price, $roast, $country, $image, $review);
        }
        //Close connection and return result
        mysqli_close($link);
        return $coffee;   
    }
    
    function InsertCoffee(CoffeeEntity $coffee)
    {   require 'Credentials.php';
        $link = mysqli_connect($host, $user, $passwd);
        $query = sprintf("INSERT INTO coffee 
                         (name, type, price, roast, country, image, review)
                         VALUES
                         ('%s', '%s', '%s', '%s', '%s', '%s', '%s')",
        mysqli_real_escape_string($link, $coffee->name),
        mysqli_real_escape_string($link, $coffee->type),
        mysqli_real_escape_string($link, $coffee->price),
        mysqli_real_escape_string($link, $coffee->roast),
        mysqli_real_escape_string($link, $coffee->country),
        mysqli_real_escape_string($link, "Images/Coffee/" . $coffee->image),
        mysqli_real_escape_string($link, $coffee->review));
        $this->PerformQuery($query);
    }
    
    function PerformQuery($query)
    {
        require 'Model/Credentials.php';
        $link = mysqli_connect($host, $user, $passwd);
        mysqli_select_db($link, $database);   
        
        //Execute query and close connection
        mysqli_query($link, $query) or die(mysqli_error($link));
        mysqli_close($link);
    }
}

?>
