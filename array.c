//WAP to accept input from user in an array and display the sum and average
/*#include<stdio.h>
int main()
{
    int i;float marks[5];float sum=0;
    for(i=0;i<5;i++)
    {
        printf("Enter the %d value \n",(i+1));
        scanf("%f",&marks[i]);
        sum=sum+marks[i];
    }
    printf("The average value is %f",sum/5);
    

}*/

//WAP to reverse a string  taken from user
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len;int i;
    char arr[len];
    printf("Enter the string to be reversed \n");
    scanf("%s,&str");
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        arr[i]=str[i];
    }
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}