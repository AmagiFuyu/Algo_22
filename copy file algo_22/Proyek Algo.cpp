#include <iostream>
using namespace std;

int main(){
    string langganan;
    int pil, bayar, pin_biasa[6], beliberapa[10], hargatotal, no_hp;
    cout << "Selamat Datang Di Langganan VIP iQIYI" << endl;
    cout << "Paket Langganan iQIYI VIP" << endl;
    cout << "===========================" << endl;
    cout << "1. Standard Monthly Subscription   (Rp 39.000)" << endl;
    cout << "2. Standard Quarterly Subscription (Rp 109.000)" << endl;
    cout << "3. Standard Yearly Subscription    (Rp 399.000)" << endl;
    cout << "4. Basic Weekly Subscription       (Rp 10.000)" << endl;
    cout << "5. Basic Monthly Subscription      (Rp 19.000)" << endl;
    cout << "6. Premium Monthly Subscription    (Rp 59.000)" << endl;
    cout << "7. Premium Yearly Subscription     (Rp 599.000)" << endl << endl;
    cout << "Silahkan Memilih VIP Anda (1-7) : "; cin >> pil;

    cout << "\nMetode Pembayaran" << endl;
    cout << "=================" << endl;
    cout << "1. Dana" << endl;
    cout << "2. GoPay" << endl;
    cout << "3. Credit/Debit Card" << endl;
    cout << "4. Ovo" << endl;
    cout << "5. Indosat" << endl;
    cout << "6. Telkomsel" << endl;
    cout << "7. XL Axiata" << endl << endl;
    cout << "Silahkan Memilih Metode Pembayaran Anda (1-7) : "; cin >> bayar;

    system("cls");

    switch (bayar)
    {
    case 1:
        cout << "Silahkan Masukkan PIN Dana (6 digit)" << endl;
        cin >> pin_biasa[6];

        system("cls");

        cout << "Total Membelinya ? " << endl;
        cin >> beliberapa[10];
        break;
    case 2:
        cout << "Silahkan Masukkan PIN GoPay (6 digit)" << endl;
        cin >> pin_biasa[6];

        system("cls");

        cout << "Total Membelinya ? " << endl;
        cin >> beliberapa;
        break;
    case 3:
        int pilcrede, nocrede[16], pinkartu[6];
        cout << "1. Credit" << endl;
        cout << "2. Debit" << endl;
        cout << "Silahkan Pilih Credit/Debit Card (1-2) : " ;cin >> pilcrede;
        switch (pilcrede)
        {
        case 1:
            cout << "Silahkan Masukkan Nomor Credit (16 digit) : \n"; cin >> nocrede[16];
            cout << "Silahkan Masukkan Pin Credit (6 digit) : \n" ; cin >> pinkartu[6];

            system("cls");

            cout << "Total Membelinya ? " << endl;
            cin >> beliberapa;
            break;
        case 2:
            cout << "Silahkan Masukkan Nomor Debit (16 digit) : \n"; cin >> nocrede[16];
            cout << "Silahkan Masukkan Pin Debit (6 digit) : \n" ; cin >> pinkartu[6];

            system("cls");

            cout << "Total Membelinya ? " << endl;
            cin >> beliberapa;
            break;
        
        default: cout << "Salah Input" << endl;
            break;
        }
        break;
    case 4:
        cout << "Silahkan Masukkan PIN Ovo" << endl;
        cin >> pin_biasa[6];

        system("cls");

        cout << "Total Membelinya ? " << endl;
        cin >> beliberapa;
        break;
    case 5:
        cout << "Silahkan Masukkan Nomor HP" << endl;
        cin >> no_hp;
        cout << "Silahkan Masukkan OTP" << endl;
        cin >> pin_biasa[6];

        system("cls");

        cout << "Total Membelinya ? " << endl;
        cin >> beliberapa;
        break;
    case 6:
        cout << "Silahkan Masukkan Nomor HP" << endl;
        cin >> no_hp;
        cout << "Silahkan Masukkan OTP" << endl;
        cin >> pin_biasa[6];

        system("cls");

        cout << "Total Membelinya ? " << endl;
        cin >> beliberapa;
        break;
    case 7:
        cout << "Silahkan Masukkan Nomor HP" << endl;
        cin >> no_hp;
        cout << "Silahkan Masukkan OTP" << endl;
        cin >> pin_biasa[6];

        system("cls");

        cout << "Total Membelinya ? " << endl;
        cin >> beliberapa;
        break;
    default:
        cout << "Salah Input" << endl;
        break;
    }

    system("cls");

    switch (pil)
    {
    case 1:
        langganan = "Standard Monthly Subscription";
        hargatotal = 39000 * beliberapa;
        break;
    case 2:
        langganan = "Standard Quarterly Subscription";
        hargatotal = 109000 * beliberapa;
        break;
    case 3:
        langganan = "Standard Yearly Subscription";
        hargatotal = 399000 * beliberapa;
        break;
    case 4:
        langganan = "Basic Weekly Subscription ";
        hargatotal = 10000 * beliberapa;
        break;
    case 5:
        langganan = "Basic Monthly Subscription";
        hargatotal = 19000 * beliberapa;
        break;
    case 6:
        langganan = "Premium Monthly Subscription";
        hargatotal = 59000 * beliberapa;
        break;
    case 7:
        langganan = "Premium Yearly Subscription";
        hargatotal = 599000 * beliberapa;
        break;
    default:
        break;
    }

    cout << "Anda Sudah Berlangganan " << langganan << " iQIYI" << endl;
    cout << "Total Belanja Rp " << hargatotal << endl;
    cout << "Terimakasih" << endl;
}
