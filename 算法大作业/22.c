#include <stdio.h>
#include <stdlib.h>
void package(int n,float c,float pi[],float wi[],float x[]);
void package0_1(int n,float c,float pi[],float wi[],float x[]); 
 
int main(void)
{
    int n = 5;
    float c = 10;
	  float wi[] = { 2, 2, 6, 6, 5 };
	  float pi[] = { 6, 3, 5, 4, 4};
    //已经按照单位价值降序排列
    float *x;
    x = (float*)malloc(sizeof(float)*n); 
    printf("*******0-1背包******\n");
    package0_1(n,c,pi,wi,x);
 
}
 
/*
*  背包问题 
*  n:物品个数 
*  c：背包容量 
*  v[]:每个物品的价值 
*  w[]:每个物品的重量（这里已经按照单位价值降序排列 ） 
*  x[]:物品是否放入背包（0表示不放，1表示全部放入，0-1放入一部分） 
*/
void package(int n,float c,float pi[],float wi[],float x[])
{
     int i;
     for(i=0;i<n;i++)
     {
        x[i] = 0;//初始状态，所有物品都没有被放入背包 
     } 
     
     for(i=0;i<n;i++)
     {
       if(wi[i] > c)
       {
         break;
       }
       
       x[i] = 1;
       c = c - wi[i];
       printf("放入第%d件物品，背包剩余容量%f.\n",(i+1),c);
     }
     
     if(i<=n)//还可以放入一个物品的一部分 
     {
        x[i] = c/wi[i]; 
        
        printf("放入第%d件物品的%f部分.背包剩余容量为0.\n",(i+1),wi[i]*x[i]);
     }     
}
 
/*
*  0-1背包问题 
*  n:物品个数 
*  c：背包容量 
*  v[]:每个物品的价值 
*  w[]:每个物品的重量（这里已经按照单位价值降序排列 ） 
*  x[]:物品是否放入背包（0表示不放，1表示全部放入） 
*/
void package0_1(int n,float c,float pi[],float wi[],float x[])
{
     int i;
     for(i=0;i<n;i++)
     {
        x[i] = 0;//初始状态，所有物品都没有被放入背包 
     } 
     
     for(i=0;i<n;i++)
     {
       if(wi[i] > c)
       {
         break;
       }
       
       x[i] = 1;
       c = c - wi[i];
       printf("放入第%d件物品，背包剩余容量%f.\n",(i+1),c);
     }
}
 
 