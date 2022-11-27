#include<stdio.h>
int main(){
    int i,k,n,l;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("\n");
    for (i=1;i<=n;i++){
        for (k=0;k>=(n-i);k++){
            printf(" ");}
        for(l=n;l>=n;l--){
            printf("* ");}   
        printf("\n");
    }
    return 0;
}