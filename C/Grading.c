#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,result;
    printf("enter your marks in physics : ");
    scanf("%d",&sub1);
    printf("enter your marks in chemistry : ");
    scanf("%d",&sub2);
    printf("enter your marks in mathematics : ");
    scanf("%d",&sub3);
    result = (sub1+sub2+sub3)/3;
    if (sub1 > 100 || sub2 > 100 || sub3 > 100 || sub1 < 0 || sub2 < 0 || sub3 < 0)
    {
        printf("wrong input |(>.<)|");
    }
    else if (result >= 40)
    {
        printf("Result : %d\nyou are PASS",result);
    }
    else if (sub1 >= 33 && sub2 >= 33 && sub3 >= 33)
    {
        printf("Result : %d\nyou are PASS",result);
    }
    else if (sub1 > 100 || sub2 > 100 || sub3 > 100)
    {
        printf("wrong input !(`~`)!");
    }
    else
    {
        printf("Result : %d\nyou are FAIL",result);
    }
}
