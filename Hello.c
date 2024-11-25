#include<stdio.h>
#include<string.h>
int main(){
    char S[100];
    fgets(S,sizeof (S),stdin);
    printf("Hello, %s",S);
}