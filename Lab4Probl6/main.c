#include <stdio.h>
//Un vector format din n numere intregi se numeste vector creasta daca exista un indice p astfel incat v[0]<=v[1]<=...<=v[p] si v[p]>=v[p+1]>=...>=v[n-1].
//Scrieti un program care citeste un vector format din n numere intregi si verifica daca este vector creasta sau nu.\n


#define CRESTERE 0
#define DESCRESTERE 1
#define NU_E_CREASTA 2

int creasta(int n,int *v){
   int stare=CRESTERE;
   int i;
    for(i=0;i<n-1;i++){
        if(stare==CRESTERE){
            if(v[i]>v[i+1]){
                stare=DESCRESTERE;
            }
        }
        else{
            if(v[i]<v[i+1]){
                stare=NU_E_CREASTA;
                break;
            }
        }
    }
    return stare;
}
int main()
{
    int n;
    int v[100];
    int i;


    printf("Introduceti dimensiunea vectorului[3<=n<=100]:");
    scanf("%d",&n);

    printf("Introduceti %d numere:",n);

    for (i=0;i<n;i=i+1){
     scanf("%d",&v[i]);
    }


    if(creasta(n,v)==NU_E_CREASTA){
        printf("Vectorul nu e creasta");
    }else{
        printf("Vectorul este vector creasta");
    }

    return 0;
}
