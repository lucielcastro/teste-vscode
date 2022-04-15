#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    int n1, n2;

    printf("\nInforme dois numeros inteiros: ");
    scanf("%d %d", &n1, &n2);
    
    if(n1<n2) 
    {
       for(int i = n1; i<=n2; i++)
       printf("%d ", i);
    }
    else if(n1>n2) 
    {
        for(int i = n1; i>=n2; i--)
        printf("%d ", i);
    }
    else printf("\n\tNumeros iguais\n");

    printf("\nPressione qualquer tecla para finalizar!\n");
    getch();
}