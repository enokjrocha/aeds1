#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int c,SOMATORIO,N,M[10000],copia[10000],K,soma;
int direita,esquerda,metade, TAMANHO_MAX, maiorM; //para facilitar o entendimento, todas as variáveis foram declaradas como globais
//----------------------------------------------------------
// INICIO DAS FUNCOES                    
//----------------------------------------------------------
//				FUNCAO 1							
//----------------------------------------------------------
int soma_menor_N(int P)
{                                  
	SOMATORIO=0;                                                
		for (c=0; c<K; c++)                          
		{                                                   
			SOMATORIO=SOMATORIO+M[c]/P;                   
		}                                                   
		return (SOMATORIO<N);                           
}         													
//----------------------------------------------------------
//          FUNCAO 2 (INVERSO DA FUNCAO 1)              
//----------------------------------------------------------
 int soma_maiorIGUAL_N(int P)//essa soma é a de tamanhos
 {                                 
		for (c=0; c<K; c++)                            
		{                                                   
			SOMATORIO=SOMATORIO+M[c]/P;                   
		}                                                   
		return (SOMATORIO>=N);                          
}                  
//----------------------------------------------------------
//              FUNCAO 3 (MEDIA)
//----------------------------------------------------------
float MEDIA(int a, int b)
{
    return (a+b)/2;
}
//----------------------------------------------------------

int main (int argc,char *argv[])
{
	do{
	soma=esquerda=0;
	scanf("\n%d",&N);
	scanf("%d",&K);
		for (c=0; c<K; c++)
		{
			scanf("%d",&M[c]);
		
			    if (M[c]<0 || M[c]>10000){
			        break;
			    }
		}
		
		    for (c=0; c<K; c++)
		    {
		      	if (M[c]>maiorM){
			        maiorM=M[c];
			    }  
	    	}
	    	direita=maiorM;
		    	if (esquerda<=direita)
		    	{
			    	while (esquerda<=direita)
				    {
					    metade=MEDIA(esquerda,direita);
						    if (soma_menor_N(metade))
						    {   
							    direita=metade-1;
						    }
							    else
							    {
								    if (soma_maiorIGUAL_N(metade))
								    {
								    	TAMANHO_MAX=metade;
								    	esquerda=metade+1;
								    }
							    }
				    }
			    }
			    else
			    {
				    break;
			    }
				    if (N==0 && K==0)//para nao imprimir a ultima linha (caso n_pessoas=n_paes=0)
				    {
					    break;
				    }
		printf("%d\n",TAMANHO_MAX);

} while(N!=0 && K!=0);
}
