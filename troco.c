#include <stdlib.h>
#include <stdio.h>

int main (){
	int h,i,j,k,l,m,d,v,n;
	v=1;
	while (v!=0) {			
		n=n+1;
		do {scanf("%d",&v);} while ((v>100000000)||(v<0));
			if (v==0){return 0;}
	h=v/100;
	i=(v%100)/50;
	j=(v%50)/20;
	k=((v%50)%20)/10;
	l=(((v%50)%20)%10)/5;
	m=((((v%50)%20)%10)%5)/1;
	printf("Teste %d\n%d %d %d %d %d %d\n",n,h,i,j,k,l,m);
	}

}
