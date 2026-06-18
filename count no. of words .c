
#include <stdio.h>

int main()
{
    char ch[] = "my name is Raushan kumar and i am a good human being";
    int count =1 ;
    int len =0;
    while(ch[len] != '\0'){
        len++ ;
    }
    for(int  i=0 ;i<len ;i++){
        if(ch[i] == ' '){
            count++;
        }
    }
    printf("%d",count);

    return 0;
}
