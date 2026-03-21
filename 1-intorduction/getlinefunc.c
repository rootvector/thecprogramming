#include <stdio.h>
/*  getline function    */ 
#define MAX 10
int getlines(char s[], int max);

int main(){
    char str[MAX];
    int len = getlines(str, MAX);
    
    printf("%d : %s\n", len, str);

    return 0;
}

int getlines(char s[], int max){
    int c, i;

    for(i=0; i < max-1 && (c=getchar()) != EOF && c!='\n'; ++i)
        s[i] = c;
    if( c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
