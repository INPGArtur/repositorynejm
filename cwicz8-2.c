#include <stdio.h> //zmiana2
#define WIERSZE 3//zmiana2.1
#define KOLUMNY 5
void kop_vla(int wiersze, int kolumny, double tab[wiersze][kolumny], double tab2[wiersze][kolumny]);
void wyswietl_vla(int wiersze, int kolumny, double tab[wiersze][kolumny]);
int main()
{
    double tab[WIERSZE][KOLUMNY] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    
    double tab2[WIERSZE][KOLUMNY];
    
    kop_vla(WIERSZE, KOLUMNY, tab,tab2);
    wyswietl_vla(WIERSZE, KOLUMNY, tab);
    printf("\n");
    wyswietl_vla(WIERSZE, KOLUMNY, tab2);
    
    return 0;
}

void kop_vla(int wiersze, int kolumny, double tab[wiersze][kolumny], double tab2[wiersze][kolumny])
{
    int w,k;
    
    for(w = 0; w<wiersze;w++)
        for(k=0; k<kolumny; k++)
            tab2[w][k] = tab[w][k];
    
}

void wyswietl_vla(int wiersze, int kolumny, double tab[wiersze][kolumny])
{
    int w,k;
    
    for(w = 0; w<wiersze;w++)
    {
        for(k=0; k<kolumny; k++)
            printf("tab[%d][%d] = %.2f ", w, k, tab[w][k]);
        printf("\n");
    }
    
}
