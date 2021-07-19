#include <stdio.h>
#include <stdlib.h>

int main(){

    char nacao[20];
    int inv,A,B;
    float cmp,vnd,luc,imp,totinv,totimp,totluc;
    
			printf("--------------------------------\n");
			printf("\n       MERCADO DE AÇÕES         ");
			printf("\n--------------------------------");
	do{
			printf("\nNome da ação de investimento: ");
			scanf("%s", nacao);
			printf("\nQual a quantidae de açṍes? ");
			scanf("%d", &inv);
			printf("\nQual o preço da compra? R$");
			scanf("%f", &cmp);
			printf("\nQual o preço da vcenda da ação? R$");
			scanf("%f", &vnd);
			printf("\nQual o tipo da operação? ");
			printf("\n----------------------------------");
			printf("\nPARA DAY TRADE DIGITE [1]");
			printf("\nPARA SWING TRADE DIGITE [2]");
			printf("\n----------------------------------\n");
			scanf("%d", &A);
			luc=(vnd-cmp)*inv;
			totinv=(inv+inv);
			totimp=(imp+imp);
			totluc=(luc-imp);
		
	if(A==1){
		imp=(luc/5);
		printf("\nNome da ação: %s",nacao);
		printf("\nQuantidade: %d",inv);
		printf("\nPreço da compra: R$ %f",cmp);
		printf("\nPreço da venda: R$ %f",vnd);
		switch(A){
		case 1: 
			printf("\nOpeação: 1. day trade");
			break;
		case 2:
			printf("\nOperação: 2. swing trade");
			break;
		default:
			printf("\n!!!!OPÇÃO INVÁLIDA!!!!");
			break;
			printf("\nLucro:R$ %f",luc);
			printf("\nImposto pago:R$ %f",imp);
		}
			printf("\nLucro:R$ %f",luc);
			printf("\nImposto pago: R$ %f", imp);
			printf("\nQuer investir mais? SIM[1]NÃO[2]");
			scanf("%d",&B);
		}
		
		else if(A==2){
			imp=3*(luc/20);
			printf("\nNome da ação: %s",nacao);
			printf("\nQuantidade: %d",inv);
			printf("\nPreço da compra: R$ %f",cmp);
			printf("\nPreço da venda: R$ %f",vnd);
		switch(A){
		case 1: 
			printf("\nOpeação: 1. day trade");
			break;
		case 2:
			printf("\nOperação: 2. swing trade");
			break;
		default:
			printf("\n!!!!OPÇÃO INVÁLIDA!!!!");
			break;
			printf("\nLucro:R$ %f",luc);
			printf("\nImposto pago:R$ %f",imp);
		}
			printf("\nLucro:R$ %f",luc);
			printf("\nImposto pago: R$ %f", imp);
			printf("\nQuer investir mais? SIM[1]NÃO[2]");
			scanf("%d",&B);
			}
	}while(B==1);
		
			printf("\nTotal investido: R$ %f",totinv);
			printf("\nTotal de imposto pago: R$ %f",totimp);
			printf("\nLucro sem desconto R$ %f",luc);
			printf("\nLucro total: R$ %f",totluc);		
			
		
	
	return 0;
}
