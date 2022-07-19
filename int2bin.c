#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a, b, n, i=0,tmp;
	int tab[100] ;

	printf("Entrez un nombre : ");
	scanf("%d",&n);
	tmp = n;

	while (n > 0 && i<= 8)
	{	
		if(n==1 || n==0){
			a=n;
			n=0;
			tab[i] = a;
		}
		else
		{
			a = n % 2;
			n = n / 2;
			tab[i] = a;
			i++;

			
		}
		/*printf("%d \t",a);
		printf("%d \n",n);*/
	}

	printf("%d = ( ",tmp);

	for( i ;i >= 0;i--)
	{

		printf("%d ",tab[i]);

	}

	printf(")2");

	return 0;
}