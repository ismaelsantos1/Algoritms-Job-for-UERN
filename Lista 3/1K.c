/*
O card�pio de uma lanchonete � o seguinte:
Especifica��o C�digo Pre�o
Misto quente 100 1,20
Cachorro quente 101 1,30
Bauru 102 1,50
Hamburger 103 1,20
Cheeseburguer 104 1,30
Refrigerante 105 1,00
Escrever um algoritmo que leia o c�digo do item pedido, a quantidade e calcule
o valor a ser pago por aquele lanche. Considere que a cada execu��o somente
ser� calculado um item.
*/

#include <stdio.h>

int main(){
	
	int cardapio, cod;
	float valorPItem, valorTotal, qtd;
	
	printf("\nDigite o codigo do produto: \n");
	scanf("%d", &cod);
	
	switch(cod){
		case 100:
			valorPItem = 1.20;
			printf("Misto quente");
			break;
			
		case 101:
			valorPItem = 1.30;
			printf("Cachorro quente");
			break;
		
		case 102:
			valorPItem = 1.50;
			printf("Bauru");
			break;
		
		case 103:
			valorPItem = 1.20;
			printf("Hambrguer");
			break;
			
		case 104:
			valorPItem = 1.30;
			printf("Cheeseburguer");
			break;
			
		case 105: 
			valorPItem = 1.00;
			printf("Refrigerante");
			break;
			
		default:
			valorPItem = 0;
			printf("C�digo inv�lido!\n");
	}	
}
