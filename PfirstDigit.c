#include<stdio.h>
int main(){
    char X[4];
    scanf("%s",&X);
    if(X[0] % 2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
}