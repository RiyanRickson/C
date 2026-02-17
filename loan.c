
#include<stdio.h>
int main()
{
    int age;
    float income,request,credit_score,rate=0,intr_amt,total;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=21)
    {
        printf("Enter your annual income: ");
        scanf("%f",&income);
        if (income>=300000)
        {
            printf("Enter requested loan amount: ");
            scanf("%f",&request);
            printf("Enter credit score: ");
            scanf("%f",&credit_score);
            if (credit_score>=750)
                rate=8;
            else if (credit_score<750 && credit_score>=650)
                rate=10;
            else
                printf("Loan rejected due to low credit score");
        }
        else{
            printf("Loan rejected due to low income");
        }

    }
    else
        printf("Loan rejected as age less than 21");
    if (rate !=0)
    {
        intr_amt=(request*rate)/100;
        total=request+intr_amt;
        printf(" Loan approved\n Interest rate: %.2f%% \n ",rate);
        printf("Interest amount: %.2f \n Total amount payable: %.2f",intr_amt,total);
    }
}