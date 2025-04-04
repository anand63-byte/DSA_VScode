#include<stdio.h>

void printPattern(int n){
    for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
            printf(" ");
            }
            for(int k=1;k<=1;k++){
            printf("*");
            }
        printf("\n");
    }
       int m = n;

    for(int i=1;i<=m;i++){
        for(int j=1;j<=m-i;j++){
        printf(" ");
        }
        for(int k=1;k<=1;k++){
        printf("*");
        }
        printf("\n");
    }

}
int main(){
    printPattern(5);
}