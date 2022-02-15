
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int biner ( int cari ,int n , int angka[])
{

    int akhir ,awal ,tengah ,ketemu , i;

    akhir = n - 1; awal = 0; ketemu = -1; i = 0;

    while ( ketemu == -1 && i < n )
    {
        tengah = ( awal+ akhir ) / 2;

            if ( angka[tengah] == cari )
        {
            ketemu = tengah;
        }
        else
        {
            if ( angka[tengah] < cari )
            {
                awal = tengah + 1;
            }
            else
            {
                akhir = tengah - 1;
            }
        }i++;
    }return ketemu;
}

int main ()
{
    int cari , hasil , i , n;
    int angka[50];

    printf("Berapa data yg ingin di input: ");
    scanf("%d" , &n);

    printf("\nInput angka secara terurut menaik\n");
    for ( i = 0; i < n; i ++ )
    {
        printf("Data ke - %d : ", i+1);
        scanf("%d", &angka[i]);
    }

    printf("Berapa angka yg ingin dicari: ");
    scanf("%d", &cari);

    hasil = biner ( cari , n ,angka );

    if  ( hasil == - 1 )
    {
        printf("\nData tidak ditemukan !! ");
    }
    else
    {
        printf("\nAngka %d ditemukan di indeks %d", cari ,hasil+1);
    }

    return 0;
}
