#include <stdio.h>
void strrev(char ch[]){
    int len =0;
    while(ch[len] != '\0'){
       len++;
   }
   
   for(int i =0 ;i<len/2;i++ ){
       int temp = ch[i];
       ch[i] =ch[len-1-i];
       ch[len-1-i] = temp;
       
   }
   printf("the reversed string is : %s",ch);
}
int main()
{
   char ch[] = "Raushan kumar" ;
   
   strrev(ch);
    return 0;
}

