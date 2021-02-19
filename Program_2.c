//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);
 
 int n=0;
 for(int i=0;str[i]!='\0';i++){
     n++;
   
 }
 //printf("%d\n",n);
 //printf("%s",str);
	//Write your code here
 char rev[n];
 for(int i=0;i<n;i++){
   rev[i]=str[n-1-i];
 }
 printf("%s",rev);
	return 0;
}
