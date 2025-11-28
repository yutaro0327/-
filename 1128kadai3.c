#include <stdio.h>
#include <string.h>
int main() {
    
    char yutaro[] = "aokiaoki";
    int i;
    //find length of string using strlen()
    printf("The string '%s' is %lu characters long.\n",yutaro,strlen(yutaro));
    for (i=1;i<=strlen(yutaro);i++)
    printf("%d\n",i);
    
    return 0;
}





















