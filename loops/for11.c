#include <stdio.h>

int main() {

    int no,i,j;
    printf("enter the no");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}