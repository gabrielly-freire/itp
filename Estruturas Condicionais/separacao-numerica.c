/*Escreva um programa que receba um número inteiro de 1 à 100000 e separe os dígitos do número, 
imprimindo na saída os dígitos em linhas diferentes.*/

#include <stdio.h>

int main(){

    int n;

    scanf("%d", &n);

    if(n>=1 && n< 1000000){
        if(n>=1 && n<10){
            printf("%d\n", n);
        }else if(n>=10 && n<100){
            printf("%d\n", n/10);
            printf("%d\n", n%10);
        }else if(n>=100 && n<1000){
            printf("%d\n", n/100);
            n=n%100;
            printf("%d\n", n/10);
            n=n%10;
            printf("%d\n", n);
        }else if(n>=1000 && n<10000){
            printf("%d\n", n/1000);
            n=n%1000;
            printf("%d\n",n/100);
            n=n%100;
            printf("%d\n", n/10);
            n=n%10;
            printf("%d\n", n);
        }else{
            printf("%d\n", n/10000);
            n=n%10000;
            printf("%d\n", n/1000);
            n=n%1000;
            printf("%d\n",n/100);
            n=n%100;
            printf("%d\n", n/10);
            n=n%10;
            printf("%d\n", n);
        }
    
    }else{
        printf("Número fora do intervalo");
    }
    


}