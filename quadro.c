#include<stdio.h>
#include<stdlib.h>
int main  () 
{
	int nfalt,i,j,quadro[3][3],linhas[3]={0,0,0};
		for (i=0; i<3; i++){
			for (j=0; j<3; j++){
			scanf("%d",&quadro[i][j]);
			linhas[i]=linhas[i]+quadro[i][j];
		}
		}

	if ((linhas[0]<linhas[1]) && (linhas [0]<linhas[2])){
		nfalt=linhas[1]-linhas[0];
	}
	if ((linhas[1]<linhas[0]) && (linhas[1]<linhas[2])){
		nfalt=linhas[0]-linhas[1];
	}
	if ((linhas[2]<linhas[0]) && (linhas[2]<linhas[1])){
		nfalt=linhas[0]-linhas[2];
	}
		for (i=0; i<3; i++){
			for (j=0; j<3; j++){
				if (quadro[i][j]==0){
					quadro[i][j]=nfalt;
				}
	    }
	}

printf("%d %d %d\n%d %d %d\n%d %d %d\n", quadro[0][0],quadro[0][1],quadro[0][2], quadro[1][0],quadro[1][1],quadro[1][2], quadro[2][0],quadro[2][1],quadro[2][2]);
}