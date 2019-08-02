#include<stdlib.h>
#include<stdio.h>
#include<string.h>

struct lcar//little car
{
  int id, posto, time;;//posto = posto
};
//------------------------------------------------------------------------------//
//                        FUNÇÃO DE COMPARAÇÃO                                  //
//------------------------------------------------------------------------------//
	int f(const void *a, const void *b)                                         //Função para a comparação do final 
	{                                                                           //
		                                                                        //
 		struct lcar *c, *d;                                                     //O problema também pode ser resolvido através da 
  			c=(struct lcar *) a; d = (struct lcar *) b;                         //criação de uma matriz de dimensão (leitura x qtd de carro)
  			                                                                    //
  				if (c->posto!=d->posto)                                         //
  				{                                                               //
  				    return (d->posto-c->posto);                                 //
  				}                                                               //
  				        else                                                    //
  				        {                                                       //
  				            return (c->time-d->time);                           //
  				        }                                                       //
	}                                                                           //
//------------------------------------------------------------------------------//
int main(int argc,char *argv[])
{
	
	struct lcar car[101];//100 »»» erro (acima de 101)
	
  		int k, n, m,v,x, y,c,j;
			scanf("%i %i %i", &k, &n, &m);
			//k é o número de postos de checagem
			//n é o numero de carrinhos 
			//m número de leituras
			//c vai ser o primeiro contador
			//j vai ser o segundo contador usado na ordenação caso o erro persista no qsort
			    if ((k==0) || (n==0) || (m==0) || (k<0) || (n<0) || (m<0))//condicional de entrada (perguntar ao monitor se é necessario e qual é a diferença entre %i e %d)
			    {
			        return 0;
			    }
			        else
			        {
  				        for (c=1; c<=n; c++ )
				        {
				            car[c].time=-1;//-1
    				        car[c].posto=0;//0
    				        car[c].id=c;//NÃO CONFUNDIR, id é a IDENTIFICAÇÃO 
  				        }
  				
					       for (c=0; c<m; c++)
					       {
    					        scanf("%i %i", &x, &y);
//carrinho x passou no posto de checagem y
    						        if (y==((car[x].posto%k)+1))//aula de 04/10
							        {
							            //car[x].lcar;   ver se o problema com o teste 3 persiste usando essa linha
							            car[x].time=c;
      							        car[x].posto ++;
    						        }
  					        }
  		
    qsort(car+1,n, sizeof(struct lcar), f);//para ordenar ~~~lembrar de testar se realmente é necessario usar o qsort
  //qsort(car+1,n sizeof(struct car),f);
  //void qsort(void *base, size_t quantidade, size_t tamanho, int(*compar)(const void *, const void *)); ~~~~sintaxe
								    for (c=1; c<=n;c++) printf("%i ",car[c].id);
                    }
}
