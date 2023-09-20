#include <stdio.h>

int main(){
	int t;

	scanf("%d", &t);

	if(t>=0 && t<5){
		printf("Iniciante");
	}else if(t>=5 && t<20){
		scanf("%d", &t);
		if(t){
			printf("Intermediário");
		}else{
			printf("Iniciante");
		}
	}else if(t>=20){
		scanf("%d", &t);
		if(t){
			printf("Avançado");

		}else{
			printf("Intermediário");
		}
	}else{
		printf("Valor inválido");

	}

	return 0;
}