#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[])
{
	int n,k,c=0,d=0;
	//char aluno[22][22],ord[22];
	do
	{
	    scanf("%i %i",&n,&k);
	    char aluno[n][22],ord[22];
		    for (c=0; c<=n; c++){
			    fgets(aluno[c],22,stdin);
		    }
		    //ordenação
			    for(d=0; d<=n; d++)
			    {
				    c=d-1;
				    strcpy(ord,aluno[d] );// ord=ordenar
					    while (c>=0 && strcmp(aluno[c],ord)>0)
					    {
						    strcpy(aluno[c+1],aluno[c]); c--;
					    }
				strcpy(aluno[c+1],ord);
			    }
		//fim da ordenação
		printf("\n%s\n",aluno[k]);
} while (n!=0 && k!=0);
}
