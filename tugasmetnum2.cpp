#include<stdio.h>
#include<conio.h>
#define nmax 100
int main()
{
	int n;
	int x[nmax-1];
	int y[nmax-1];
	int i;
	int j;
	float c,m,a,b,q,r;
	float hasil,hsl0,hsl1,hsl2,hsl3,hsl4;
	printf("Masukan N :");
	scanf("%d", &n );
	
	for(i=1;i<=n;i++){
	
	printf("Masukan x ke %d :" , i);
	scanf("%d", &x[i]);
	printf("Masukan y ke %d :" , i);
	scanf("%d", &y[i]);
}
	for(j=1;j<=n;j++)
	{
		printf("x ke %d : %d" , j , x[j]);
		printf("\ny ke %d : %d" , j , y[j]);
		printf("\n");
	}
	hsl1=0;
	hsl0=0;
	hsl2=0;
	hsl3=0;
	hsl4=0;
	
	for(i=1;i<=n;i++)
	{
			
		hsl1 = hsl1+ x[i];
		hsl0 = hsl0 + y[i];
		hsl2 = hsl2 + (hsl1 * hsl1);	
		hsl3 = hsl3 + (x[i] * y[i]);
		hsl4= hsl4 + (x[i] * x[i]);
	}
		a= (n *(hsl3)) - (hsl0 * hsl1); 
		b= (n *(hsl4)) - (hsl1 * hsl1);
		q= (hsl0* (hsl4)) - (hsl1 * hsl3); 
		r= (n *(hsl4)) - (hsl1 * hsl1);

		m= a / b ;
		c= q / r;
		hasil = (m*n) + c;		
	
		printf("\n F(x) = mx + c = (%f * %d ) + %f = %f" , m, n,c, hasil );
		
		
	getch();
	return 0;
	
}


