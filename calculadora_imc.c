#include <stdio.h>


char linha(){ // função cria linhas
    int i;
    for (i=0;i<=30;i++){
        printf("=");
    }
    printf("\n");
}



int main()
{
    float peso , altura , imc;
    
    linha();
    printf("  calculando o IMC \n");
    linha();
    printf("imforme seu peso e altura :\n(lembrando que usa-se o '.' no lugar da virgula)\n");
    scanf("%f %f",&peso ,&altura);
    imc = peso/(altura * altura);
    printf("seu IMC é %.1f kg/m² \n",imc);
    linha();
    if (imc < 18.5 ){
        printf("estado de magreza !\n");
        printf("pode ocorer Consequências para a saúde como : \nFadiga, stress, ansiedade\n");
    }
    if (imc > 18.5  && imc < 24.9){
        printf("estado normal !\n");
        printf("menas Consequências para a saude !\n");
    }
    if (25 < imc && imc < 29.9){
        printf("estado de sobrepeso !\n");
        printf("pode ocorer Consequências para a saúde como : \nFadiga, má circulação, varizes\n");
    }
    if (30 < imc && imc < 34.9){
        printf("estado de obesidade grau 1 !\n");
        printf("pode ocorer Consequências para a saúde como : \nDiabetes, angina, infarto, aterosclerose\n");
    }
    if (35 < imc && imc < 40){
        printf("estado de obesidade grau 2 !\n");
        printf("pode ocorer Consequências para a saúde como : \nApneia do sono, falta de ar\n");
    }
    if (imc > 40){
        printf("estado de obesidade grau 3 !\n");
        printf("pode ocorer Consequências para a saúde como : \nRefluxo, dificuldade para se mover, escaras, diabetes, infarto, AVC\n");
    }
    linha();
    return 0;
}
