#include<stdio.h>

int main()
{
   float gas,alc,x;
   int escolha;

do{    
    // solicitação de atribuição do valor da gasolina ao usuário 
    printf("\t\n\n\tCOMPARADOR DE COMBUSTÍVEL\n\n\n");
    printf("\n\nDigite o valor da Gasolina: ");    
    scanf("%f",&gas);    
     // solicitação de atribuição do valor do alcool ao usuário
    printf("\n\nDigite o valor do Etanol: ");
    scanf("%f",&alc);
    

     x = alc / gas;

    if( x > 0.7){
    printf("\n\nOptar pela gasolina é mais vantajoso!");
    printf("\n%.2f",x);    
        
    }else if(x == 0.7){
    printf("\n\nTanto faz a escolha!");
    printf("\n%.2f",x);
    
    }else if(x< 0.7){
    printf("\n\nOptar pelo Etanol é mais vantajoso!");
    printf("\n%.2f",x);
         }
        
        printf("\n\n1 - Realizar outra Consulta\n2 - Saír\n\n  ");
        scanf("%d",&escolha);
        
    }while(escolha!=2);
    
    return 0;
}