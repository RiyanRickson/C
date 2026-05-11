// Riyan Rickson Castelino
// Pes2ug25am339
// week 10 program 1
#include<stdio.h>
#include<string.h>
struct super
{
   int code,quant,price;
   char n[20];
   float disc; 
}s;
int main()
{
    float total,damt,fin;
    printf("Enter item name: ");
    gets(s.n);
    printf("Enter item code: ");
    scanf("%d",&s.code);
    printf("Enter quantity: ");
    scanf("%d",&s.quant);
    printf("Enter price per unit: ");
    scanf("%d",&s.price);
    printf("Enter dicount percentage: ");
    scanf("%f",&s.disc);

    printf("--item details--\n");
    printf("item code: %d \nitem name: %s \nquantity: %d \n",s.code,s.n,s.quant);
    printf("price per unit: %d \ndiscount percentage: %.2f %%\n",s.price,s.disc);

    total=s.price*s.quant;
    damt=(total*s.disc)/100;
    fin=total-damt;
    printf("--bill details--\n");
    printf("total cost: %.2f \ndiscount amount: %.2f \nfinal amount: %.2f",total,damt,fin);
    return 0;
}

