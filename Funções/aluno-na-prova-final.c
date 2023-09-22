#include <stdio.h>
float calcNota(int n1, int n2, int n3){

    float media = (n1+n2+n3);
    float nota, menor;

    if(n1>=3 && n2>=3 && n3 >=3 && media < 15){
        menor = n1;

        if(n2<menor){
            menor = n2;
        }

        if(n3<menor){
            menor = n3;
        }

        nota = 15 - (n1+n2+n3-menor);
    }else{
        return -1;
    }

    return nota;

}
int main(){

    float n1, n2, n3, n4;

    scanf("%f %f %f", &n1, &n2, &n3);

    n4 = calcNota(n1, n2, n3);

    if(n4==-1){
        printf("Nao faz prova final");
    }else{
        printf("Final\n%.1f",n4);
    }

    return 0;
}