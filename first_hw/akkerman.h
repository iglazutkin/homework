#include <stdio.h>
long akker (int m,int n);
int main()
{
int z,m1,n1;
scanf ("%d%d",&m1,&n1);
z=akker(m1,n1);
printf ("anwser: %d",z);
return 0;
}

long akker (int m,int n)
{
int q=0;
if (m==0)
{
q=n+1;
}
if (m>0 && n==0)
{
q=akker(m-1,1);
}
if (m>0 && n>0)
{
q=akker(m-1,akker(m,n-1));
}
return q;
}
