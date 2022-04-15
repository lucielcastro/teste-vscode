#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){

    float preco, preco_inf ;

    printf("\nInforme o preco do produto: ");
    scanf("%f", &preco);
    
    if(preco<100 && preco>=0) 
    {
       preco_inf = preco*.1+preco;
       printf("\n\tPreco normal: %.2f\n\tPreco inflacioando: %.2f\n", preco, preco_inf);
    }
    else if(preco>=100) 
    {
       preco_inf = preco*.2+preco;
       printf("\n\tPreco normal: %.2f\n\tPreco inflacioando: %.2f\n", preco, preco_inf);
    }
    else printf("\n\tPreco invalido!\n");

    printf("\nPressione qualquer tecla para finalizar! ");
    getch();
}