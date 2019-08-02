#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,c;
	float soma,soma2;
	soma=soma2=0;
	do{
 		scanf("%d",&n);
		int s[n];
		s[0]=0;
		soma=soma2=0;
			for (c=1; c<=n; c++){
				scanf("%d",&s[c]);
				soma=soma+s[c];
			}
			soma=soma/2;
			for (c=1; c<=n; c++){
				soma2=soma2+s[c];
					if ((soma2>=soma)&&(n%2==0))
					{
						printf("%d \n",c);
						break;
					}
						if ((soma2==soma)&&(n%2>0)){
							printf("%d \n",c);
							break;
						}
							if((soma2>soma)){
								printf("%d \n",c);
								break;
							}
			}
	}while (n!=0);
}
