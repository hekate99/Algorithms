#include<stdio.h>

#include<conio.h>
#include<malloc.h>
int main()

{

int n,I,fact=1;

int *a=malloc(sizeof(int)*n);


printf(" enter the number ");

scanf(" %d ",&n);

for(I=0;I<n;I++)

{

a[I]=n-I;

fact=fact*(n-I);

}

printf(" factorial of number = %d",fact);

getch();

}
