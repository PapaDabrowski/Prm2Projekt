//Piotr Dąbrowski grupa E3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>
/*funkcje zewnętrzne*/

int wczytaj(char *nazwa_pliku,int tab[1]){

    FILE *plik;
    plik=fopen(nazwa_pliku,"r");

    if(plik!=NULL){
       fgets(tab[0],10,plik);
       fclose(plik);
       return tab[0];
    }

    else printf("Błąd wczytywania pliku");
}

void wprowadzanie(char *nazwa_pliku,int **t,int kolumny){
    int i;
    int zakres=0;
    int pobrane=0;
    FILE *plik;
    fopen(nazwa_pliku,"r");
if(plik!=NULL){
       for(i=0;i<kolumny;i++){
           fgets(t[i][1],3,in);
           zakres+=pobrane;
            if(i==1){
            t[1][0]=0;
            t[1][1]=pobrane;
            }
        if(i>1){
            t[i][1]=pobrane+t[i-1][1];
            t[i][0]=i;
            }
       }
    if(zakres!=100){
            printf("Zły zakres prawdopodobieństwa!\n");
            printf("Spróbuj od nowa!\n");
            exit(EXIT_FAILURE);
       }
}
    else printf("Błąd wczytywania pliku");
    exit(EXIT_FAILURE);
}

int losowanie(int **t,int kolumny){
    int wylosowana,i;
    wylosowana=rand()%101;
    for(i=0;i<kolumny-1;i++){
        if(i==0){
            if(wylosowana<t[1][i]) return t[0][0];
            }
        if(i!=0){
            if(wylosowana>t[1][i-1] && wylosowana<=t[1][i]) return t[0][i];
            }
    }
}



//wybór dobrze
int wyborkolejki(int **tablica,int okienka){
   int i;
   int b=0;
   int a=0;
   int c=0;
   a=tablica[1][0];
for(i=0;i<okienka;i++){
      b=tablica[1][i];
      if(a>b){
          a=tablica[1][i];
          c=i;
          }
     }
   return c;
}


int main(int argc, char *arcv[]){
  int czasdzialania ,czas ,osoby ,**t ,i ,ludzie ,a ,**okienka ;
  srand(time(NULL));
  osoby=wczytaj(arcv[1],"r");
  *(t+i)=(int*)malloc((3*sizeof(int*));

/* TABLICA GŁÓWNA */
    okienka=calloc(4*sizeof(int*));
    *(okienka)=(int*)calloc(iloscokienek+1,sizeof(int*));
    *(okienka+1)=(int*)calloc(iloscokienek+1,sizeof(int*));
    *(okienka+2)=(int*)calloc(iloscokienek+1,sizeof(int*));
    *(okienka+3)=(int*)calloc(iloscokienek+1,sizeof(int*));
/*KONIEC GŁÓWNEJ TABLICY*/

    for(i=0;i<=iloscokienek;i++){
        okienka[3][i]=losowanieczasu(...)
        }

    for(czas=0;czas<=czasdzialania;czas++){

        ludzie=losowanie(....);

        for(i=0;i=>ludzie;i++){
            a=wyborkolejki(okienka);
            okienka[1][a]+=1;
            }
        for(i=0;i<iloscokienek;i++){
            tab[3][i]-=1;
            if(tab[3][i]=0){
               tab[2][i]+=1;
               tab[3][i]=losowanieczasu(...);
               }
            }
         system("clear");
         /*wyświetlanie stanu kolejek*/
         for(i=0;i<okienka;i++){
             printf("   Okienko %d   ",i+1);
             }
         printf("\n");
         for(i=0;i<okienka;i++){
             printf("      %d        ",okienka[1][i]);
             }
         printf("                         Liczba obsłużonych klientów\n");
         for(i=0;i<okienka;i++){
             printf("      %d        ",okienka[2][i]);
             }
         /*koniec wyświetlania kolejek*/
         a=0;
         ludzie=0;
         usleep(10000);
}
printf("Koniec symulacji\n");
/* zwolnienie pamięci */
for(i=0;i<=1;i++){
    free(*pdokienka+i);
    }
free(pdokienka);
for(i=0;i<=4;i++){
    free(*(okienka+i));
    }
free(okienka);
for(i=0;i<osoby+2;i++){
    free(*(+i));
    }
free(t);
/* koniec zwolnienia pamięci */

return 0;
}
