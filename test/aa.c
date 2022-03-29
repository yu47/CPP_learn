
#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 500

int main()
{
   /*--------------------------------*/
   int i=0,k,m,n,l;
   char str1[N],str2[N];  /*C=M+K...K is key...*/
   //clrscr();
   /*--------------------------------*/
   printf("This is a code password program......\n");
   printf("Please input proclaimed in writing(M)::\n");
   gets(str1);/*输入要加密的明文M*/
   printf("Please input the key(K)(int)::\n");
   scanf("%d",&k);/*输入密钥K*/

   m=strlen(str1);/*测试明文的长度*/
   printf("The M length is %d\n",m);
   printf("\n *\n *\n *\n***\n *\n");
   printf("ciphertext(C) is ::\n\n");

   for(i=0;i<m;i++)/*加密的过程*/
   {
      n=(int)str1[i];/*将字符转换成ASCII*/
      if(str1[i]==' ')/*如果字符串中出现空格返回空格*/
      {
    	 printf(" ");
    	 str2[i]=str1[i];
      }
      else if(n>96&&n<123)/*对小写进行加密*/
      {
    	 n=(n-97+k)%26;
         if(n<0)
	    n=26+n;
	 l=(char)(n+97);
    	 printf("%c",l);
    	 str2[i]=l;
      }
      else if(n>64&&n<91)/*对大写进行加密*/
      {
    	 n=(n-65+k)%26;
         if(n<0)
	    n=26+n;
	 l=(char)(n+97);
         printf("%c",l);
    	 str2[i]=l;
      }
   }
   str2[i]='\0';
   /*--------------------------------*/
   printf("\n\nThe C length is %d",strlen(str2));
   printf("\n\n *\n *\n *\n***\n *\n");
   printf("When the ciphertext is '%s',\nThe password program is...::\n\n",str2);
   m=strlen(str2);
   for(i=0;i<m;i++)/*解密过程*/
   {
      n=(int)str2[i];/*将字符转换成ASCII*/
      if(str2[i]==' ')/*如果是空格，返回的也是空格*/
      {
	 printf(" ");
      }
      else if(n>96&&n<123)/*对小写进行解密*/
      {
	 n=(n-97-k)%26;
	 if(n<0)
	    n=26+n;
	 l=(char)(n+97);
	 printf("%c",l);
      }
      else if(n>64&&n<91)/*对大写进行解密*/
      {
     	 n=(n-65-k)%26;
         if(n<0)
	    n=26+n;
	 l=(char)(n+97);
    	 printf("%c",l);
      }
   }
   str1[i]='\0';
   getchar();
   return 0;

}