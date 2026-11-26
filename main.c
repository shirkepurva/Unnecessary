#include<stdio.h>
#include<string.h>
int main()
{
    float a,b,sum=0,sub=0,mul=0,div=0;
    char op[5];
    printf("Welcome to Daddy's little calculator");
    printf("\nThis is a basic calculator that knows only 2nd grade arithmetic. Do not expect much.");
    printf("\nNow enter a stupid number:");
    scanf("%f",&a);
    printf("\nAnother one now:");
    scanf("%f",&b);
    printf("\nGood girl.");
    printf("\nEnter operation by writing first three letters of the op name:");
    scanf("\n%4s",op);
    if(strcmp(op,"add")==0||strcmp(op,"Add")==0||strcmp(op,"ADD")==0)
    {
        sum=a+b;
        printf("\nSum=%f",sum);
    }
    else if(strcmp(op,"sub")==0||strcmp(op,"Sub")==0||strcmp(op,"SUB")==0)
    {
        sub=a-b;
        printf("\nDifference=%f",sub);
    }
    else if(strcmp(op,"mul")==0||strcmp(op,"Mul")==0||strcmp(op,"MUL")==0)
    {
        mul=a*b;
        printf("\nProduct=%f",mul);
    }
    else if(strcmp(op,"div")==0||strcmp(op,"Div")==0||strcmp(op,"DIV")==0)
    {
        if(b==0)
        {
            printf("\nNow, now. Don't commit crimes darling.");
        }
        else
        {
        div=a/b;
        printf("\nQuotient=%f",div);
        }
    }
    
    else
    {
        printf("\nTf are you doing?");
    }
    return 0;
}