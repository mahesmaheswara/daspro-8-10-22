#include <iostream>

using namespace std;

int main()
{
    int hari;
    int bulan;

    cout << "\nMasukan hari:\n";
    cout << " > ";
    cin >> hari;
    cout << "Masukan Bulan;\n";
    cout << " > ";
    cin >> bulan;

    bool bulanGanjil = bulan % 2 == 1;
    int hariMaximal;

    if (bulan <= 7 )
    {
        if (bulanGanjil)
        {
            hariMaximal = 31;
        }
        else
        {
            hariMaximal = 30;
        }
    }
    else
    {
        if (bulanGanjil)
        {
            hariMaximal = 30;
        }
        else
        {
            hariMaximal = 31;
        }
    }

    if (hari < 1 || hari > hariMaximal || bulan < 1 || bulan > 12)
    {
        cout << "Tanggal Tidak Valid\n";
    }
    else
    {
        cout << "Tanggal Valid\n";
    }

    return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privac