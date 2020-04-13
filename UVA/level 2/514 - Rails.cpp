#include <stdio.h>
#include <stack>
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    // deklarasi variable
	int block;

	while(scanf("%d", &block) == 1 && block != 0) //memproses apabila scan var block tidak sama dengan 0
    {
        int line[1000];
		while(scanf("%d", &line[0]) == 1) //scan variable line index ke 0
		{
			if(line[0] == 0) //jika line[0] == 0, maka hanya print enter, lalu break loop, lalu scan block lagi
            {
				printf("\n");
				break;
			}

			for(int i = 1; i < block; i++)
            {
				scanf("%d", &line[i]); //scan line[1] hingga line[block-1]
			}

			stack<int> rails; // deklarasi stack variable bernama rails
			int cek = 0; // deklarasi variable cek untuk mengecek nilai index dari variable line

			for(int j = 1; j <= block; j++)
            {
				rails.push(j); //mengisi nilai stack variable rails

                //mengeluarkan nilai teratas dari rails apabila nilainya = nilai dari line[cek]
				while(!rails.empty() && rails.top() == line[cek])
                {
					rails.pop();
					cek++;
					if(cek >= block) //menghentikan loop ketika nilai dari var cek >= nilai var block
                        break;
				}
			}

			// print output
			if(rails.empty()) //jika rails kosong, maka print yes
                printf("Yes\n");
			else
                printf("No\n");
		}
	}

	return 0;
}
