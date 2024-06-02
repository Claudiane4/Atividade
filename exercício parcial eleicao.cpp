#include <stdio.h>
#include <locale.h>

int main(){
	int i, votoAmom=0, votodavi=0, votocap=0, votomaria=0, votonulo=0, votobranco=0, a;
	setlocale(LC_ALL,"portuguese");
	printf("X X X X X X X X X X X X ELEÇÂO 2024 X X X X X X X X X X X X X\n\n\n");
	
	printf("Candidatos:\n");
	
	for(i=1;i<=10;i++){
		
		printf("\n[1]. Amom\n");
		printf("[2]. Davi Almeida\n");
		printf("[3]. Capitão Alberto Neto\n");
		printf("[4]. Maria do Carmo Seffair\n");
		printf("[5]. Nulo\n");
		printf("[6]. Branco\n");
		printf("\nEntre com o seu voto!\n");
		scanf("%i", &a);
		
		switch(a){
			case 1:
				votoAmom++;
				break;
			case 2:
				votodavi++;
				break;
			case 3:
				votocap++;
				break;
			case 4:
				votomaria++;
				break;
			case 5:
				votonulo++;
				break;
			case 6:
				votobranco++;
				break;
			default:
				printf("\aEsse candidato não existe\n");
		}
		
	}
	
	printf("Amom teve:%i\n", votoAmom);
	printf("Davi Almeida teve:%i\n", votodavi);
	printf("Capitão Alberto Neto teve:%i\n", votocap);
	printf("Maria do carmo Seffair teve:\n", votomaria);
	printf("Quantidade de votos nulos:%i\n", votonulo);
	printf("Quantidade de votos em branco:%i\n", votobranco);
	
	if(votoAmom>votodavi && votoAmom>votocap&&votoAmom>votomaria){
		printf("O candidado vencedor é Amom!\n");
	}
		else
		    if(votodavi>votoAmom&&votdavi>votocap&&votdavi>votomaria){
		    	printf("\no candidato vencedor é Davi ALmeida!\n");
			}
			else
			    if(votocap>votodavi&&votocap>votoAmom&&votocap>votomaria){
			    	printf("\nO candidato vencedor é Capitão Alberto Neto!\n");
				}
				else
				    if(votomaria>votoAmom&&votomaria>votodavi&&votomaria>votocap){
				    	printf("\nO candidato vencedor é Maria do Carmo Seffair!\n");
					}else{
						printf("\nNão tem vencedor!\n");
					}
				
    return 0;
}
