#include <stdio.h>
#include <string.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // Membuat semua variable yang dibutuhkan
    char nama1[30], nama2[30];
    int panjang1, panjang2, total1, total2;
    float hasil1, hasil2;
    float hasilakhir;

    // Memasukkan nama
    while(gets(nama1))
    {
        gets(nama2);
        // set panjangnya nama
        panjang1 = strlen(nama1);
        panjang2 = strlen(nama2);

        // set nilai awal variable total1
        total1 = 0;

        // menghitung jumlah nama1 yang dimasukkan kedalam variable total1
        for(int i = 0; i < panjang1; i++)
        {
            if(nama1[i] >= 'a' && nama1[i] <='z') //mengubah nilai dari huruf ASCII
                total1 = total1 + (nama1[i]-96);
                else if(nama1[i] >= 'A' && nama1[i] <= 'Z')
                total1 = total1 + (nama1[i]-64);
        }

        // set nilai awal variable hasil1
        hasil1 = 0;

        // menghitung hasil dari nama1 yang dimasukkan kedalam variable hasil1 hingga nilai dari total1 mencapai 0
         while(total1 != 0)
            {
                hasil1 = hasil1 + (total1 % 10); // mod 10 untuk mengambil angka kedua dari nilai total1
                total1 = total1 / 10; // dalam pseudocode: "div", untuk mengambil angka pertama dari nilai total1
            }

        // untuk mengulang proses diatas apabila hasil1 masih berupa 2 digit angka
        if(hasil1 > 9)
        {
            total1 = hasil1;
            hasil1 = 0;
            while(total1 != 0)
            {
                hasil1 = hasil1 + total1 % 10;
                total1 = total1 / 10;
            }
        }

        // mengulangi proses diatas untuk nama2
        total2 = 0;


        for(int j = 0; j < panjang2; j++)
        {
            if(nama2[j] >= 'a' && nama2[j] <='z')
                total2 = total2 + nama2[j]-96;
                else if(nama2[j] >= 'A' && nama2[j] <= 'Z')
                total2 = total2 + nama2[j]-64;
        }

        hasil2 = 0;

         while(total2 != 0)
            {
                hasil2 = hasil2 + (total2 % 10);
                total2 = total2 / 10;
            }


        if(hasil2 > 9)
        {
            total2 = hasil2;
            hasil2 = 0;
            while(total2 != 0)
            {
                hasil2 = hasil2 + total2 % 10;
                total2 = total2 / 10;
            }
        }

        // menghitung persentase akhir
        if(hasil1 < hasil2)
            hasilakhir = 100 * hasil1 / hasil2;
        else if(hasil1 == 0 && hasil2 == 0)
        {
            hasilakhir = 0;
        }
        else
            hasilakhir = 100 * hasil2 / hasil1;

        // print output akhir
        if(panjang1 <= 0 && panjang2 <= 0)
            printf("\n");
        else if(panjang1 > 0 && panjang2 > 0 && hasil1 == 0 && hasil2 == 0)
            printf("\n");
        else
            printf("%0.2f %%\n", hasilakhir);
    }
    return 0;
}
