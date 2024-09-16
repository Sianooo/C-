<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<form action="" method="POST">
    <label>Podaj licznik</label>
    <input type="number" name="licznik">
    <label>Podaj mianownik</label>
    <input type="number" name="mianownik">
    <button type="submit">Wyslij</button>
</form> 
</body>
</html>

<?php
$licznik=$_POST['licznik'];
$mianownik=$_POST['mianownik'];
if($licznik<0)
{
    $licznik=$licznik*(-1);
}
if($mianownik<0)
{
    $licznik=$mianownik*(-1);
}

class Ulamek
{
public $licznik;
public $mianownik;

//zadanie z ulamkami
function __construct()
{
    $this->licznik=12;
    $this->mianownik=36;
}

function wypisywanie()
{
    echo ($this->licznik."/".$this->mianownik."<br>");
}

function skrocUlamek()
{
    $a=$this->licznik;  
    $b=$this->mianownik; 

    while($a!=$b){
        if($a>$b)
        {
            $a=$a-$b;
        }
        else
        {
            $b=$b-$a;
        }
        $NWD=$a;
        $this->licznik=$this->licznik/$NWD;
        $this->mianownik=$this->mianownik/$NWD;
        return $this;
    }
}
}
if($mianownik==0)
{
    echo "Mianownik nie mozne byc zerem";
}
else{
$ulamek = new Ulamek();
//tutaj dajemy podstawianie z formularza 
$ulamek->licznik=$licznik;
$ulamek->mianownik=$mianownik;
////////////////////////////
$ulamek->wypisywanie();
$ulamek->skrocUlamek();
$ulamek->wypisywanie();
}
?>