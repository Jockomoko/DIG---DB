#include <iostream>
#include <fstream>

int main()
{
    std::fstream filein;
    std::string line = "";
    filein.open("DataShopyfiveDataSFData.csv");
    // int i, Leveransdatum, Fakturadatum, Fakturanr, Typ, Kundnr, Företagstyp, Namn, Adress, Besöksadress, Postnr, Ort, Land, Orgno, Telefon, Fax, Epost, AvvikandeNamn, LeveransAdress, LeveransAdress1, LeveransPostnr, LeveransOrt, AvvikandeBesöksadress, Artikelnr, Benämning, Antal, Enhet, ÁPris, Rabatt, Rabattyp, Moms, PrisInklVat, Total, Inpris;
    std::getline(filein, line);
    std::cout << line << std::endl;
}