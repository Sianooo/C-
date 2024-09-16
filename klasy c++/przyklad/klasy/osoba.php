<?php
class osoba
{
    public $nazwisko;
    public $wzrost;

    function wypisz()
    {
        echo ($this->nazwisko." ".$this->wzrost."cm"."<br>");
    }
    
    function czyWysoki()
    {
        if($this->wzrost=180)
        {
            echo "Tak";
        }
        else
        {
            echo "Nie";
        }
    }
}
$osoba= new osoba();
$osoba->nazwisko="Nowak";
$osoba->wzrost=185;

$osoba->wypisz();
$osoba->czyWysoki();


?>