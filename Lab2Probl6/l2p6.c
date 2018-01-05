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
