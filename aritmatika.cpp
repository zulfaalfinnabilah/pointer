#include <iostream>
using namespace std;

int main()
{
      int angka1, angka2, hasil, pilih;
      char status;
     
      menu :
      cout << "\n\t ==================== Perhitungan Aritmatika ==================== \n\n\n";
      cout << "\t\t 1. Aritmatik Penjumlahan \n";
      cout << "\t\t 2. Aritmatik Pengurangan \n";
      cout << "\t\t 3. Aritmatik Perkalian \n";
      cout << "\t\t 4. Aritmatik Pembagian \n";

      cout << "\n";
      cout << "\t\t Menu yang anda pilih adalah no : ";
      cin >> pilih;

      cout << "\n\n";
      if(pilih==1)
      {
            penjumlahan :
            cout << "\t\t\t - Aritmatik Penjumlahan - \n\n";
            cout << "\t\t Masukan Angka pertama : ";
            cin >> angka1;

            cout << "\t\t Masukan Angka kedua : ";
            cin >> angka2;

            cout << "\n";

            hasil = angka1 + angka2;
            cout << "\t\t " << angka1 << " + " << angka2 << " = " << hasil;
            cout << "\n\n";

            status1 :
            cout << "\t Apakah anda ingin mencobanya lagi ?(m=menu utama/y=ya/t=tidak) ";
            cin >> status;

            if(status=='m' || status=='M')
                  goto menu;
            else if(status=='y' || status=='Y')
                  goto penjumlahan;
            else if(status=='t' || status=='T')
                  goto end;
            else
            {
                  cout << "\t Silahkan cek kembali huruf yang anda input ! \n\n";
                  goto status1;
            }
                       
            cout << "\n\n";
      }
      else if(pilih==2)
      {
            pengurangan :
            cout << "\t\t\t - Aritmatik Pengurangan - \n\n";
            cout << "\t\t Masukan Angka pertama : ";
            cin >> angka1;

            cout << "\t\t Masukan Angka kedua : ";
            cin >> angka2;

            cout << "\n";

            hasil = angka1 - angka2;
            cout << "\t\t " << angka1 << " - " << angka2 << " = " << hasil;
            cout << "\n\n";

            status2 :
            cout << "\t Apakah anda ingin mencobanya lagi ?(m=menu utama/y=ya/t=tidak) ";
            cin >> status;

            if(status=='m' || status=='M')
                  goto menu;
            else if(status=='y' || status=='Y')
                  goto pengurangan;
            else if(status=='t' || status=='T')
                  goto end;
            else
            {
                  cout << "\t Silahkan cek kembali huruf yang anda input !\n\n";
                  goto status2;
            }
           
            cout << "\n\n";  
      }
      else if(pilih==3)
      {
            perkalian :
            cout << "\t\t\t - Aritmatik Perkalian - \n\n";
            cout << "\t\t Masukan Angka pertama : ";
            cin >> angka1;

            cout << "\t\t Masukan Angka kedua : ";
            cin >> angka2;

            cout << "\n";

            hasil = angka1 * angka2;
            cout << "\t\t " << angka1 << " * " << angka2 << " = " << hasil;
            cout << "\n\n";

            status3 :
            cout << "\t Apakah anda ingin mencobanya lagi ?(m=menu utama/y=ya/t=tidak) ";
            cin >> status;

            if(status=='m' || status=='M')
                  goto menu;
            else if(status=='y' || status=='Y')
                  goto perkalian;
            else if(status=='t' || status=='T')
                  goto end;
            else
            {
                  cout << "\t Silahkan cek kembali huruf yang anda input !\n\n";
                  goto status3;
            }
                       
            cout << "\n\n";
      }
      else if(pilih==4)
      {
            pembagian :
            cout << "\t\t\t - Aritmatik Pembagian - \n\n";
            cout << "\t\t Masukan Angka pertama : ";
            cin >> angka1;

            cout << "\t\t Masukan Angka kedua : ";
            cin >> angka2;

            cout << "\n";

            hasil = angka1 / angka2;
            cout << "\t\t " << angka1 << " / " << angka2 << " = " << hasil;
            cout << "\n\n";

            status4 :
            cout << "\t Apakah anda ingin mencobanya lagi ?(m=menu utama/y=ya/t=tidak) ";
            cin >> status;

            if(status=='m' || status=='M')
                  goto menu;
            else if(status=='y' || status=='Y')
                  goto pembagian;
            else if(status=='t' || status=='T')
                  goto end;
            else
            {
                  cout << "\t Silahkan cek kembali huruf yang anda input !\n\n";
                  goto status3;
            }
                       
            cout << "\n\n";
      }
      else
      {
            goto menu;
      }

      end :
      cout << "\n\n\t\tTerima Kasih Telah Menggunakan Program Aritmatik ini\n";
      cout << "\n\t========================= Sampai Jumpa ==========================\n\n\n" ;

      cout << "\n";
      return 0;
  }
