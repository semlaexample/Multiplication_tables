#include<stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
 int n=0,i=0,r;
 printf("insert n: ");
 scanf("%d",&n);
 do{
 	i++;
 	r=i*n;
 	printf("%d ",r);
 }while (i<10);
 system("pause");
}
