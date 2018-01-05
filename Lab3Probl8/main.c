#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numar_ziledela1800;

int nr_barbati=0;

int nr_femei=0;

int suma_varstelor_inzile=0;

void procesare_CNP(){

    int S,AA,LL,ZZ,JJ,NNN,C;

    int anul_nasterii;

    int varsta_in_zile;

    printf("Introduceti CNP:");

    scanf("%1d%2d%2d%2d%2d%3d%1d",&S,&AA,&LL,&ZZ,&JJ,&NNN,&C);

    //printf("%d%d%d%d%d%d%d\n", S,AA,LL,ZZ,JJ,NNN,C);
    if(S%2==0){
        nr_femei=nr_femei+1;
    }
    else{
        nr_barbati=nr_barbati+1;
    }
    //1 / 2 - născuţi între 1 ianuarie 1900 şi 31 decembrie 1999
    //3 / 4 - născuţi între 1 ianuarie 1800 şi 31 decembrie 1899
    //5 / 6 - născuţi între 1 ianuarie 2000 şi 31 decembrie 2099

    if ((S==1) || (S==2)){
       anul_nasterii=1900+AA;
    }
    if ((S==3) || (S==4)){
       anul_nasterii=1800+AA;
    }
    if ((S==5) || (S==6)){
       anul_nasterii=2000+AA;
    }
    varsta_in_zile=numar_ziledela1800-((anul_nasterii-1800)*365+LL*30+ZZ);
    suma_varstelor_inzile=suma_varstelor_inzile+varsta_in_zile;
}

int main ()
{
    //S	AA	LL	ZZ	JJ	NNN	C

    int n;

    int i;

    numar_ziledela1800=time(0)/60 /60 /24 + (1970-1800)* 365;

    printf("Introduceti numarul de studenti:");

    scanf("%d",&n);

    for (i=0;i<n;i++) {

      procesare_CNP();

    }

    printf("Numar de femei:%d\nNumar de barbati:%d",nr_femei,nr_barbati);

    printf("\nVarsta medie:%d",suma_varstelor_inzile/n/365);
    return 0;
}
