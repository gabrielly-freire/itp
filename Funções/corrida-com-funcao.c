#include <stdio.h>
int encontro(int x, int v1, int v2){
    int result;
    
    if(v1<=v2){
        result = -1;
    }else{
        result = x/(v1-v2);
    }
    return result;
}

int main(){
    int x, v1, v2;

    scanf("%d %d %d", &x, &v1, &v2);

    int result = encontro(x, v1, v2);

    if(result == -1){
        printf("impossivel");
    }else{
        printf("%ds", result);
    }

    return 0;
}