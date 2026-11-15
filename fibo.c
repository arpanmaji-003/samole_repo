#include<stdio.h>
int fibo(int n,int a,int b){
if (n==0) return 0;
printf("%d ",a);
return fibo(n-1,a+b,a);
}
int main(){
int n;
printf("Enter a Number: ");
scanf("%d",&n);
printf("Fibbo naci series upto %d is : ", n);
fibo(n,0,1);
}