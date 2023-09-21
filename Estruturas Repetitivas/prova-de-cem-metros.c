#include <stdio.h>
#include <math.h>

int main(){

    float inscricao, tempo=0;
    int contAptos = 0, contSeries = 0; 

    scanf("%f", &inscricao);

    while(tempo!=-1){
        scanf("%f", &tempo);

        if(tempo<=inscricao && tempo!=-1){
            contAptos++;
        }
    }

    contSeries = ceil(contAptos/8.0);

    printf("%d %d", contAptos, contSeries);

    return 0;
}