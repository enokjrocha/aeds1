#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main (){
	char p1[999],p2[999],p11[999],p22[999];
	int a,b,c,d,somaesq=0,somadir=0;
	scanf("%d",&a);
	for (b=0; b<a; b++){ 
	scanf("%s %s", p1, p2);
	strcpy(p11,p1);
	strcpy(p22,p2);
		for (c=0; p1[c]!='\0'; c++){
			for (d=0; p2[d]!='\0'; d++){
				if (p1[c]==p2[d]){
						p1[c]='*';
						p2[d]='*';
					}
				}	
			}	
				for (c=0; p1[c]!='\0'; c++){
					if (p1[c]=='*'){}
						else {somaesq=somaesq+p1[c];}
				}
					for (d=0; p2[d]!='\0'; d++){ 
						if (p2[d]=='*'){}
							else {somadir=somadir+p2[d];}
					}
	printf("Duelo %d\npontos esquerda: %d\npontos direita: %d\n",b+1,somaesq,somadir);
		if (somaesq>somadir){
			printf("%s (esquerda) ganha\n",p11);
		} 
			if (somaesq<somadir){
				printf("%s (direita) ganha\n",p22);
			}
				if (somaesq==somadir){
					printf("houve um empate!\n");
				}
		
	somaesq=somadir=0;
}
}
