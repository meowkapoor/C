#include<stdio.h>
int main(){
    int i,k,n,l;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("\n");
    for (i=1;i<=n;i++){
        for (k=(n-i);k>=0;k--){
            printf(" ");}
        for(l=1;l<=i;l++){
            printf("* ");}   
        printf("\n");
    }
    return 0;
}