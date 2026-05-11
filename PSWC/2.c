#include <stdio.h>
int main()
{
    int code , rev=0, r,og;
    printf("Enter the barcode: ");
    scanf("%d",&code);
    og=code;
    while(code>0)
    {
        r=code%10;
        rev=rev*10+r;
        code=code/10;
    }
    if(code==rev)
    {
        printf("Valid barcode");
    }
    else{
        printf("Invalid");
    }
    return 0;
}