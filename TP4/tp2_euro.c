//euro.c
#include <stdio.h>
int main()
{
  float somme;
  printf("Somme ? ");
  scanf("%f", &somme);
  somme*=100;
  printf("billets de 500€ : %d\n", (int)somme/50000);
  somme=(int)somme%50000;
  printf("billets de 100€ : %d\n", (int)somme/10000);
  somme=(int)somme%10000;
  printf("billets de 20€ : %d\n", (int)somme/2000);
  somme=(int)somme%2000;
  printf("billets de 10€ : %d\n", (int)somme/1000);
  somme=(int)somme%1000;
  printf("billets de 5€ : %d\n", (int)somme/500);
  somme=(int)somme%500;
  printf("pieces de 2€ : %d\n", (int)somme/200);
  somme=(int)somme%200;
  printf("pieces de 1€ : %d\n", (int)somme/100);
  somme=(int)somme%100;
  printf("pieces de 50cts : %d\n", (int)somme/50);
  somme=(int)somme%50;
  printf("pieces de 20cts : %d\n", (int)somme/20);
  somme=(int)somme%20;
  printf("pieces de 10cts : %d\n", (int)somme/10);
  somme=(int)somme%10;
  printf("pieces de 5cts : %d\n", (int)somme/5);
  somme=(int)somme%5;
  printf("pieces de 2cts : %d\n", (int)somme/2);
  somme=(int)somme%2;
  printf("pieces de 1cts : %d\n", (int)somme/1);
  return 0;
}
