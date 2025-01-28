#include <iostream>
#include <fstream>

int main()
{
    std::fstream filein;
    std::string line = "", Leveransdatum = "", Fakturadatum = "";
    int location = 0;
    filein.open("DataShopyfiveDataSFData.csv");
    // int i, Leveransdatum, Fakturadatum, Fakturanr, Typ, Kundnr, Företagstyp, Namn, Adress, Besöksadress, Postnr, Ort, Land, Orgno, Telefon, Fax, Epost, AvvikandeNamn, LeveransAdress, LeveransAdress1, LeveransPostnr, LeveransOrt, AvvikandeBesöksadress, Artikelnr, Benämning, Antal, Enhet, ÁPris, Rabatt, Rabattyp, Moms, PrisInklVat, Total, Inpris;

    while (getline(filein, line))
    {
        std::getline(filein, line);
        location = line.find(",");
        Leveransdatum = line.substr(0, location);
        line = line.substr(location + 1, line.length());
        location = line.find(",");
        Fakturadatum = line.substr(0, location);
        line = line.substr(location + 1, line.length());
        std::cout << "Fakturadatum: " << Leveransdatum << std::endl;
        std::cout << "Line: " << line << std::endl;
        std::cout << "Last: " << Fakturadatum << std::endl;
    }
}