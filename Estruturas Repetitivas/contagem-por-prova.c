#include <stdio.h>

int main(){

    int n, contS=0, contC=0, contL=0;
    char tipo;
    

    
    do{
       scanf("%c", &tipo);
       switch (tipo){
            case 'S': contS++;break;
            case 'C': contC++;break;
            case 'L': contL++;break;
       }
       
    }while (tipo != 'F');

    printf("%d %d %d %d", contC, contS, contL, contC+contS+contL);    
    
    return 0;
}