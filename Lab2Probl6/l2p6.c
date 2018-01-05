//Intr-o anumita zi a saptamanii, toti cei n studenti ai Facultatii de Informatica sunt prezenti la cursuri, insa fiecare intr-un anumit interval orar de forma [a,b] , unde a,b apartine lui N si a < b .Decanul Facultatii doreste sa convoace o sedinta la care sa participe toti studentii. Pentru a-l ajuta, scrieti un program care sa determine intervalul orar din ziua respectiva în care sunt prezenti in Facultate toti studentii. 

#include <stdio.h>
int max (int x , int y){
return x>y? x:y;
}
int min (int x , int y){
int r= x<y? x:y;
return r;
}

int main() {

    printf("numar de studenti:");

    int i,nr_studenti;
    int a = 0; int b = 23;
    int student_curent_a, student_curent_b;

    scanf("%d",&nr_studenti);
    for (i=1;i<=nr_studenti;i++)
    {
     printf("Orar student %d:",i);
     scanf("%d %d",&student_curent_a, &student_curent_b);
     a = max(a, student_curent_a);
     b = min (b, student_curent_b);
    }
    if (a>b){
        printf("Nu exista interval orar pentru sedinta");
    }
    else{
       printf("Toti studentii sunt prezenti intre orele %d %d",a,b);
    }

    return 0;
}
