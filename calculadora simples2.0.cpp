#include<stdio.h>
#include<locale.h>
int main(){
	int n1,n2,adic,mult,subt;
	char exp;
	double div;
	setlocale(LC_ALL,"portuguese");
	
	scanf("%i",&n1);//ir� receber o primeiro valor
    scanf(" %c",&exp);//escolha da express�o
    scanf("%i",&n2);//receber� o segundo valor
    
    //se a exp que o usu�rio digitar estiver dentro de um dos cases, ir� fazer o c�lculo matem�tico aonde uma v�riavel auxiliadora recebera o 
	//valor e esse valor ser� impresso na tela do usuario;
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
				printf("N�o existe divis�o por 0");
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
			printf("Operador inv�lido\n");
			break;
	}
	return 0;
}
