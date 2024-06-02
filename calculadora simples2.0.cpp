#include<stdio.h>
#include<locale.h>
int main(){
	int n1,n2,adic,mult,subt;
	char exp;
	double div;
	setlocale(LC_ALL,"portuguese");
	
	scanf("%i",&n1);//irá receber o primeiro valor
    scanf(" %c",&exp);//escolha da expressão
    scanf("%i",&n2);//receberá o segundo valor
    
    //se a exp que o usuário digitar estiver dentro de um dos cases, irá fazer o cálculo matemático aonde uma váriavel auxiliadora recebera o 
	//valor e esse valor será impresso na tela do usuario;
	switch(exp){
		case '-':
			subt=n1-n2;
			printf("%i", subt);
			break;
		case '+':
			adic=n1+n2;
			printf("%i", adic);
			break;
		case '/':
			if(n2==0){
				printf("Não existe divisão por 0");
				break;
			}
			div=(double)n1/n2;
			printf("%lf", div);
			break;
		case '*':
			mult=n1*n2;
			printf("%i", mult);
			break;
		default:
			printf("Operador inválido\n");
			break;
	}
	return 0;
}
