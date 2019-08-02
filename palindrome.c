#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char pv1[100],pv2[100],pv3[100],pv12[200],p12i[200],pv13[200],p13i[200],pv23[200],p23i[200],pv123[300],p123i[300],p1i[100],p2i[100],p3i[300];
int i,j=0,d=1,k=0;
int main (){
do {
	for (k=0; k<=300; k++){ 
	    pv1[k]=0;
	    pv2[k]=0;
	    pv3[k]=0;
	    pv12[k]=0;
	    p12i[k]=0;
	    pv13[k]=0;
	    p13i[k]=0;
	    pv23[k]=0;
	    p23i[k]=0;
	    pv123[k]=0;
	    p123i[k]=0;
	    p1i[k]=0;
	    p2i[k]=0;
	    p3i[k]=0;
	}
	scanf("%s %s %s",pv1,pv2,pv3);
	    if (pv1[0]!='*'){printf("Teste %d\n",d);}
	        else {return 0;}
	d=d+1;
	strcpy(pv12,pv1);
	strcat(pv12,pv2);
	strcpy(pv13,pv1);
	strcat(pv13,pv3);
	strcpy(pv23,pv2);
	strcat(pv23,pv3);
	strcpy(pv123,pv1);
	strcat(pv123,pv2);
	strcat(pv123,pv3);
	j=0; i=0;
	for (i=strlen(pv1)-1; i>=0; i--){
		p1i[j]=pv1[i];
		j++;
	}
			if (strcmp(pv1,p1i)==0){printf("%s ",pv1);}
	j=0;
	   for (i=strlen(pv2)-1; i>=0; i--){
			p2i[j]=pv2[i];
			j++;
		}
			if (strcmp(pv2,p2i)==0){printf("%s ",pv2);}
	j=0;
	        for (i=strlen(pv3)-1; i>=0; i--){
				p3i[j]=pv3[i];
				j++;
			}
			    if (strcmp(pv3,p3i)==0){printf("%s ",pv3);}
	j=0;	
	            for (i=strlen(pv12)-1; i>=0; i--){
				    p12i[j]=pv12[i];
				    j++;
			    }
			        if (strcmp(pv12,p12i)==0){printf("%s ",pv12);}
	j=0;
	                for (i=strlen(pv13)-1; i>=0; i--){
				        p13i[j]=pv13[i];
		                j++;
		            }
			            if (strcmp(pv13,p13i)==0){printf("%s ",pv13);}
	j=0;
	                    for (i=strlen(pv23)-1; i>=0; i--){
				            p23i[j]=pv23[i];
				            j++;
		                }
			                if (strcmp(pv23,p23i)==0){printf("%s ",pv23);}
	j=0;
	                        for (i=strlen(pv123)-1; i>=0; i--){
				                p123i[j]=pv123[i];
				                j++;
		                    }
			                    if (strcmp(pv123,p123i)==0){printf("%s ",pv123);}
	printf("\n\n");
}while (pv1[0]!='*');
}
