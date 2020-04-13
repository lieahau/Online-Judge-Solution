/* Penjelasan soal:

    Cara encode:

    banyak Matrix Rows i = 10, dimulai dari 0, 1, .., 9
    banyak Matrix Column j = M+2, dimulai dari 0, 1, .., M+1
    M = panjang string

    ketika i = 0 (first rows), j = 0 (first column) sampai M+1 (last column), print '/'
        berarti: selalu print '/' di Rows 0

    ketika i = 9 (last rows), j = 0 (first column) sampai M+1 (last column), print '/'
        berarti: selalu print '/' di Rows 9

    ketika j = 0 (first column), i = 0 (first rows) sampai 9 (last rows), print '/'
        berarti: selalu print '/' di Column 0

    ketika j = M+1 (last column), i = 0 (first rows) sampai 9 (last rows), print '/'
        berarti: selalu print '/' di Column terakhir

    jika M = 5, berarti:
       0 1 2 3 4 5 6
     0 / / / / / / /
     1 /           /
     2 /           /
     3 /           /
     4 /           /
     5 /           /
     6 /           /
     7 /           /
     8 /           /
     9 / / / / / / /

     ketika i = 1 to 8, dan j = 1 to M, print sesuai function b(i-1, c[j-1])
     contoh:
        string c = "bc"

        ketika i = 1, j = 1, panggil function b(i-1, c[j-1])
        b(1-1, c[1-1]) = b(0, c[0]) = b(0, 'b')

        ketika i = 1, j = 2
        b(1-1, c[2-1]) = b(0, c[1]) = b(0, 'c')

        dari situ, di cek apakah c/2^i genap atau ganjil, dimana c adalah ascii karakter
        print '/' jika genap
        print '\' jika ganjil

        b(0, 'b') = (98/2^0) = 98 mod 2 = 0, genap, print '/'
        b(0, 'c') = (99/2^0) = 99 mod 2 = 1, ganjil, print '\'

        function b(i,c) dipanggil sebanyak M kali setiap rows dari row 1 sampai 8
            sehingga function b(i,c) dipanggil sebanyak 8*M kali

        jadi, setiap karakter di representasikan dengan 8 baris dalam 1 column yang sama

        contoh karakter 'b'

            row	sign	binary	value
            0	/	    0	    0
            1	\	    1	    2
            2	/	    0	    0
            3	/	    0	    0
            4	/	    0	    0
            5	\	    1	    32
            6	\	    1	    64
            7	/	    0	    0
        2 + 32 + 64 = 98 --> ascii 'b'

    itu cara encode nya,
     perintah soal:
     decode dari cara encode tersebut


*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c[15][100];
    int tc;

    scanf("%d", &tc);
    getchar();

    for(int tcase = 0; tcase < tc; tcase++)
    {
        // Reset string selain first dan last rows
        for(int i = 1; i < 9; i++)
            memset(c[i], 0, sizeof c[i]);

        int row = 0;
        while(gets(c[row]) && strlen(c[row])) // input sampai panjang string = 0 (new blank line)
            row++;

        // banyak kolom
        int column = strlen(c[0]);

        // buang last rows dan column
        row = row-1;
        column = column-1;

        // karena setiap karakter di representasikan dalam 1 kolom, maka loop berdasarkan kolomnya
        // dan mulai dari 1 abaikan first kolom
        for(int j = 1; j < column; j++)
        {
            // reset setiap kolom
            int sum = 0;    // merepresentasikan ascii karakter
            int shift = 1; // karena berdasarkan pangkat 2, jadi bisa menggunakan shift

            for(int i = 1; i < row; i++)
            {
                // jika slash '\', berarti binary 1, jadi tambahkan ke nilai sum ascii
                // jika backslash '/', berarti binary 0, tidak perlu ditambahkan ke sum ascii
                if(c[i][j] == '\\')
                    sum += shift;
                shift = shift << 1;
            }

            printf("%c", sum);
        }
        printf("\n");
    }

    return 0;
}
