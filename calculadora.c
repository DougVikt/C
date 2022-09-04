#include <stdio.h>

float operacao( char operador ,float n1, float n2)
{
    float resultado;
   switch(operador){
       case '+':
       resultado=n1+n2;
       break;
       
       case '-':
       resultado=n1-n2;
       break;
       
       case '/':
       resultado=n1/n2;
       break;
       
       case '*':
       resultado=n1*n2;
       break;
    
   }
    return printf("resultado : %.2f",resultado); 
    
}


int main()
{
    float n1=0,n2=0,resultado;
    char operador;
    int repetir;
    do
    {
        printf(">>> calculadora operante <<<");
        printf("\ncoloque a operação : ");
        scanf("%c",&operador);
        printf("diga o primeiro numero : ");
        scanf ("%f",&n1);
        printf ("diga o segundo numero : ");
        scanf("%f",&n2);
        operacao(operador,n1,n2);
        printf("\npara repetir digite 1 para sim ou 2 para não , para sair : ");
        scanf("%i",&repetir);
        
    }while(repetir==1);
    
    return 0;
}
