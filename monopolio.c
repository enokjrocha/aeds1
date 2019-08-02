#include <stdlib.h>
#include <stdio.h>

int main (){
	int a,b,c,k,n,x;
	scanf("%d %d",&n,&k);
	if (n==0 && k==0){return 0;}
	do{
	char o;
	int banco[n];
	    for (c=0; c<n; c++){
	        banco[c]=c;
	    }
		    for (c=0; c<k; c++){
			scanf("%s %d %d",&o,&a,&b);
				if (o=='F'){
					for (x=0; x<n; x++){
						if (banco[x]==banco[b-1]){
						    if (x!=b-1){
						        banco[x] = banco [a-1];
						    }
						}
					}
				banco[b-1]=banco[a-1];
				}
					if (o=='C'){
						if (banco[a-1]==banco[b-1]){
							printf("S\n");
						}
							else {
								printf("N\n");
							}
					}
		    }
	printf("\n");
	scanf("%d %d",&n,&k);
	}while (n!=0 && k!=0);
}
