#include <stdio.h>
int n;
void td(int x[], int y)
{
	int i, j, d;
	for (i=0; i<=y-1; i++)
		for (j=i+1; j<=y-1; j++)
			if(x[i]>x[j])
			{
				d=x[i];
				x[i]=x[j];
				x[j]=d;
			}
}
void xu(int a[], int n)
{
	FILE *ou;//khai bao bien ou
	ou=fopen("ou.out", "w");//mo tep out va gan no cho bien ou
	int i;
	for (i=0; i<=n-1; i++)
		fprintf(ou,"%d ", a[i]);//xuat ra tep ou bien a[i]
	fclose(ou);//dong bien ou(dong tep ou.out)
}
int main()
{
	FILE *in;//khai bao bien in
	int a[100];
	in=fopen("in.inp", "r");//mo tep in.inp va gan no cho bien in
	fscanf(in, "%d", &n);//nhap tu bien in va gan no cho bien n
	int i;
	for (i=0; i<=n; i++)
		fscanf(in, "%d", &a[i]);//nhap tu bien in va gan no cho a[i]
	fclose(in);
	td(a, n);
	xu(a, n);
}
