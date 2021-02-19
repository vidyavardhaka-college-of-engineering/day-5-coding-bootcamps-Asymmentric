//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	//Write your code here
  int n=0;
 for(int i=0;str[i]!='\0';i++){
     n++;
   
 }
 for(int i=0;i<n;i++){
   if(str[i]!=str[n-1-i]){
     return 0;
   }
 }
 printf("palindrome");

	
	return 0;
}
