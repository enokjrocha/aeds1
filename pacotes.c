#include <stdio.h>
#include <stdlib.h>

int main (){
	int numcasas,numentregas,c,passos=1,posicao;
	scanf("%d %d",&numcasas,&numentregas);
	int numero[numcasas],entregar[numentregas];
		for (c=0; c<numcasas; c++){
			scanf("%d",&numero[c]);
		}
			for (c=0; c<numentregas; c++){
				scanf("%d",&entregar[c]);
			}
			posicao=1;
			    for (c=0; c<numentregas; c++){
				    while (entregar[c]<numero[posicao] ){
				        posicao--;
						passos++;
				    }
				        while (entregar[c]>numero[posicao] ){
					    	posicao++;
						    passos++;
						}
			    }
    printf("%d",passos);
}
