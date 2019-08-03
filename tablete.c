#include <stdio.h>
#include <stdlib.h>

int main (){
	int TAMANHO,X1,X2,Y1,Y2,CONTADOR1,CONTADOR2,F=0,F2=0;
	scanf("%d", &TAMANHO);
	int TABLETE[TAMANHO+1][TAMANHO+1];
	for (CONTADOR1=0; CONTADOR1<TAMANHO; CONTADOR1++){
	    for (CONTADOR2=0; CONTADOR2<TAMANHO; CONTADOR2++){
	        TABLETE[CONTADOR1][CONTADOR2]=0;
	    }
	}
	scanf("%d %d", &X1,&Y1);
	scanf("%d %d", &X2,&Y2);
		TABLETE[X1][Y1]=-1;
		TABLETE[X2][Y2]=-1;
			for (CONTADOR1=0; CONTADOR1<=(TAMANHO/2); CONTADOR1++){
				for (CONTADOR2=0; CONTADOR2<=TAMANHO; CONTADOR2++){
					if (TABLETE[CONTADOR1][CONTADOR2]==-1){
						F++;
					}
				}
			}
			    for (CONTADOR1=TAMANHO/2+1; CONTADOR1<=(TAMANHO); CONTADOR1++){
				    for (CONTADOR2=0; CONTADOR2<=TAMANHO; CONTADOR2++){
					    if (TABLETE[CONTADOR1][CONTADOR2]==-1){
						    F2++;
					    }
				    }
			    }
			                if (F==F2){
				                printf("S");
			                }
			                    else{
				                    printf("N");
			                    }
}
