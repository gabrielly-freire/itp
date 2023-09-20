#include <stdio.h>

int main(){
    
    int qtdHeroi, classeHeroi, nivelMonstro;

    scanf("%d %d %d", &qtdHeroi, &classeHeroi, &nivelMonstro);

    switch (nivelMonstro){
    case 1:
        if ((classeHeroi>=2 && qtdHeroi >=1) || (classeHeroi==1 && qtdHeroi>=3)){
            printf("Heróis vencerão!");
        }else{
            printf("Melhor chamar Saitama!");
        }
        break;
    case 2:
        if ((classeHeroi>=3 && qtdHeroi >=1) || (classeHeroi==2 && qtdHeroi>=3)){
            printf("Heróis vencerão!");
        }else{
            printf("Melhor chamar Saitama!");
        }
        break;
    case 3:
        if ((classeHeroi>=4 && qtdHeroi >=1) || (classeHeroi==3 && qtdHeroi>=3)){
            printf("Heróis vencerão!");
        }else{
            printf("Melhor chamar Saitama!");
        }
        break;
    case 4:
        if ((classeHeroi==5 && qtdHeroi >=1) || (classeHeroi==4 && qtdHeroi>=3)){
            printf("Heróis vencerão!");
        }else{
            printf("Melhor chamar Saitama!");
        }
        break;
    case 5:
        if ((classeHeroi==5 && qtdHeroi >=1)){
            printf("Heróis vencerão!");
        }else{
            printf("Melhor chamar Saitama!");
        }
        break;
    }


    return 0;
}