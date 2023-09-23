#include <stdio.h>
#include <stdbool.h>

bool ehPar(int n){
    return n%2==0;
}

int main(){

    int n;

    scanf("%d", &n);

    if(ehPar(n)){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}