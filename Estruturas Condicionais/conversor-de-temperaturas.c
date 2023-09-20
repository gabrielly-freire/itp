/*Escreva um programa em que o usuário informe a temperatura (em números reais) e a escala utilizada (Celsius, 
Farenheit ou Kelvin). */

#include <stdio.h>

int main(){
     
     float temperatura;
     char escala;

     scanf("%f %c", &temperatura, &escala);

     if (escala == 'C'){
        printf("Celsius: %.2f\n", temperatura);
        printf("Farenheit: %.2f\n", temperatura*1.8+32);
        printf("Kelvin: %.2f\n", temperatura+273.15);
     }else if(escala == 'F'){
        printf("Celsius: %.2f\n", (temperatura-32)/1.8);
        printf("Farenheit: %.2f\n", temperatura);
        printf("Kelvin: %.2f\n", (temperatura-32)*5/9+273.15);
     }else if(escala == 'K'){
        printf("Celsius: %.2f\n", temperatura-273.15);
        printf("Farenheit: %.2f\n", (temperatura-273.15)*1.8+32);
        printf("Kelvin: %.2f\n", temperatura);
     }else{
        printf("Escala desconhecida");
     }
     

    return 0;
}