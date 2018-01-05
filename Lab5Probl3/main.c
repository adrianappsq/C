//Se citeste un tablou unidimensional format din n numere intregi. Sa se afiseze cele mai mari m valori distincte din tablou in ordine crescatoare si cele mai mici k valori distincte in ordine descrescatoare.

#include <stdio.h>
#include <stdlib.h>


//void - nu returneaza nimic
//definim semnatura functiei (tip rezultat nume functie(tip param1, nume param1,...))
void frecvente(int dimensiune,int elemente[]){
    int i;
    int j;
    int curent;
    int frecventa;
    int e_deja_afisat;
    printf("Frecventele elementelor din vector sunt:\n");
    for (i=0;i<dimensiune;i++){
        //9 -> de 1 ori
        curent=elemente[i];
        frecventa=1;
        e_deja_afisat=0;
        for(j=0;j<i;j++){
            if(elemente[j]==curent){
                e_deja_afisat=1;
                break;
            }
        }
        if (e_deja_afisat){
            continue;
        }
        for(j=i+1;j<dimensiune;j=j+1){
            if(curent==elemente[j]){
                frecventa=frecventa+1;
            }

        }
        printf("%d -> de %d ori\n", curent, frecventa);

    }

} // acolade: blocuri de cod (o secventa de instructioni-se executa pas cu pas, una dupa cealalta)


int main()
{
   int v[100]; //definim variabilele (un vector de 100 de elemente)
   int n;      //definim n - dimensiunea sirului
   int i;      //definim contorul - variabila ajutatoare

   printf("Introduceti numarul de elemente[mai putin de 100]:");

   scanf("%d",&n); // citim un numar intreg la adresa[&] variabilei n;

   printf("Introduceti %d numere intregi:", n); // introduceti n numere intregi

   //pasi: de unde incepe; conditia de oprire; ce faci la sfarsitul operatiei pe care o executi in for (pasul de incrementare)
   for (i=0;i<n;i++){
        scanf("%d",&v[i]); //citim un numar intreg la adresa elementului curent din v(al i-lea element)
   }
    frecvente(n,v);

    return 0;
}
