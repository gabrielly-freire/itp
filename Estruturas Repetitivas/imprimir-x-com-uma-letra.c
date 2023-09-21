#include <stdio.h>

int main(){

    int n;
    char letra;

    scanf("%d %c", &n, &letra);

    for (int i = 1; i < n; i++){
        for (int j = 1; j < n; j++){
            if(i+j==n || i==j){
                printf("%c", letra);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    

    return 0;
}