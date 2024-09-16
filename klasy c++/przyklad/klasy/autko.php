<?php
class Pojazd{
public $marka;
public $kolor;
public $rocznik;

public function malowanie()
{
$this->kolor="niebieski";
echo "<br>Przemalowoano auto:"."<br>";
}


public function zmianarocznika()
{
$this->rocznik="2024";
echo "<br>Rocznik auta:";
}

//konstruktory(musza byc w kalsie)
// function __construct()
// {
//     $this->marka="Fiat 126p";
//     $this->kolor="Czerwony";
//     $this->rocznik="1987";
// }

// //Wypisuje z konstruktora zmienne
function __construct($marka,$kolor,$rocznik)
{
    $this->marka=$marka;
    $this->kolor=$kolor;
    $this->rocznik=$rocznik;
}

//deskryptor
function __destruct()
{
    echo"<br>Usunieto obiekt";
}

}


$autko=new Pojazd("Audi","Bialy","2023");
// $autko->marka="Mercedes";
// $autko->kolor="Czarny";
// $autko->rocznik="2021";
echo "Kolor auta: ".$autko->kolor."<br>";
echo "Marka auta: ".$autko->marka."<br>";
echo "Rocznik auta: ".$autko->rocznik."<br>";

//metoda
$autko->malowanie();
echo "Kolor auta: ".$autko->kolor."<br>";

$autko->zmianarocznika();
echo "<br>Zmieniono rocznik auta na ".$autko->rocznik;

?>