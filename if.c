#include<stdio.h>
int main()
{
     int age;
     printf("Enter the value of age:");
     scanf("%d",&age);
     if(age>=18)
      {
    if(age>=60)
        printf("Eligible to vote (senior citizen\n)");
    else
        printf("Eligible for vote\n");
    }
    else{
        printf("not Eligible for vote");
    }
    return 0;
}